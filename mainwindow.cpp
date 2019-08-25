#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
	this->setWindowTitle("HandPainting");
    ui->graphicsView->setScene(new QGraphicsScene(this));
    ui->graphicsView->scene()->addItem(&pixmap);
	ui->graphicsView_2->setScene(new QGraphicsScene(this));
	ui->graphicsView_2->scene()->addItem(&pixmap_1);
	ui->graphicsView_3->setScene(new QGraphicsScene(this));
	ui->graphicsView_3->scene()->addItem(&pixmap_2);
	ui->graphicsView_4->setScene(new QGraphicsScene(this));
	ui->graphicsView_4->scene()->addItem(&pixmap_3);
	ui->graphicsView_5->setScene(new QGraphicsScene(this));
	ui->graphicsView_5->scene()->addItem(&pixmap_4);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_startBtn_pressed() {
    if(video.isOpened()) {
        ui->startBtn->setText("Start");
        video.release();
        return;
    }
	
	if (!video.open(0)) {
		QMessageBox::critical(this, "Camera Error", "Camera is not being accessed by !");
		return;
	}

    ui->startBtn->setText("Stop");

    Mat frame;
	Mat frame_painting;
	Mat frame_blue;
	Mat frame_green;
	Mat frame_red;
	Mat frame_mask;

    while(video.isOpened()) {
        
		video >> frame;
		frame_blue = frame.clone();
		frame_green = frame.clone();
		frame_red = frame.clone();
		int x_b = 1000, y_b = 1000;
		int x_g = 1000, y_g = 1000;
		int x_r = 1000, y_r = 1000;
		
		if (frame_painting.empty()) {
			frame_painting = frame.clone();
			frame_painting.setTo(Scalar(0, 0, 0));
		}

		if (global.new_paint) {
			frame_painting = frame.clone();
			frame_painting.setTo(Scalar(0, 0, 0));
			global.new_paint = false;
		}

        if(!frame.empty()) {
			if (global.startstop) {
				//frame_blue = MainWindow::getBlueObject(frame);
				frame_green = MainWindow::getObjectByColor(frame, "Green");
				frame_red = MainWindow::getObjectByColor(frame, "Red");
				frame_blue = MainWindow::getObjectByColor(frame, "Blue");
				frame_mask = frame_blue | frame_green | frame_red;

				trackObject(x_b, y_b, frame_blue, frame, Scalar(255, 0, 0));
				trackObject(x_g, y_g, frame_green, frame, Scalar(0, 255, 0));
				//trackObject(x_r, y_r, frame_red, frame, Scalar(0, 0, 255)); 
				
				//trackObject_Version_2(x_b, y_b, frame_blue, frame, Scalar(255, 0, 0)); Or second approach by using moments
				//trackObject_Version_2(x_g, y_g, frame_green, frame, Scalar(0, 255, 0));
				trackObject_Version_2(x_r, y_r, frame_red, frame, Scalar(0, 0, 255));


				if (distanceCalculate(x_b, y_b, x_r, y_r) <= global.distanceseuil) 
					circle(frame_painting, Point(x_b, y_b), global.brash_size, Scalar(255, 255, 255), CV_FILLED, 8, 0);
				
				if (distanceCalculate(x_b, y_b, x_g, y_g) <= global.distanceseuil) 
					circle(frame_painting, Point(x_b, y_b), global.brash_size, Scalar(0, 255, 0), CV_FILLED, 8, 0);

				if (distanceCalculate(x_r, y_r, x_g, y_g) <= global.distanceseuil)
					circle(frame_painting, Point(x_r, y_r), global.erase_size, Scalar(0, 0, 0), CV_FILLED, 8, 0);

				imshow("Painting", frame_painting);

				QImage qimg(frame_mask.data, frame_mask.cols, frame_mask.rows, frame_mask.step, QImage::Format_Grayscale8);
				pixmap.setPixmap(QPixmap::fromImage(qimg.rgbSwapped()));
				ui->graphicsView->fitInView(&pixmap, Qt::KeepAspectRatio);

				QImage qimg_1(frame.data, frame.cols, frame.rows, frame.step, QImage::Format_RGB888);
				pixmap_1.setPixmap(QPixmap::fromImage(qimg_1.rgbSwapped()));
				ui->graphicsView_2->fitInView(&pixmap_1, Qt::KeepAspectRatio);

				QImage qimg_blue(frame_blue.data, frame_blue.cols, frame_blue.rows, frame_blue.step, QImage::Format_Grayscale8);
				pixmap_2.setPixmap(QPixmap::fromImage(qimg_blue.rgbSwapped()));
				ui->graphicsView_3->fitInView(&pixmap_2, Qt::KeepAspectRatio);

				QImage qimg_green(frame_green.data, frame_green.cols, frame_green.rows, frame_green.step, QImage::Format_Grayscale8);
				pixmap_3.setPixmap(QPixmap::fromImage(qimg_green.rgbSwapped()));
				ui->graphicsView_4->fitInView(&pixmap_3, Qt::KeepAspectRatio);

				QImage qimg_red(frame_red.data, frame_red.cols, frame_red.rows, frame_red.step, QImage::Format_Grayscale8);
				pixmap_4.setPixmap(QPixmap::fromImage(qimg_red.rgbSwapped()));
				ui->graphicsView_5->fitInView(&pixmap_4, Qt::KeepAspectRatio);
			}
        }
        qApp->processEvents();
    }
    ui->startBtn->setText("Start");
}

void MainWindow::closeEvent(QCloseEvent *event) {
    if(video.isOpened()) {
        QMessageBox::warning(this, "Warning", "Stop the video before closing the application !");
        event->ignore();
    } else { event->accept(); }
}

Mat MainWindow::getObjectByColor(Mat frame, QString color) {
	Mat outPutImage = frame.clone();
	Mat Hsv_frame = frame.clone();
	
	if (color == "Blue") {
		cvtColor(frame, Hsv_frame, CV_BGR2HSV);
		//qDebug() << global.H_valm << global.S_valm << global.V_valm << global.H_val << global.S_val << global.V_val;
		inRange(Hsv_frame, Scalar(global.H_valm, global.S_valm, global.V_valm), Scalar(global.H_val, global.S_val, global.V_val), outPutImage);		
	}

	if (color == "Green") {
		cvtColor(frame, Hsv_frame, CV_BGR2HSV);
		//qDebug() << global.H_valm_1 << global.S_valm_1 << global.V_valm_1 << global.H_val_1 << global.S_val_1 << global.V_val_1;
		inRange(Hsv_frame, Scalar(global.H_valm_1, global.S_valm_1, global.V_valm_1), Scalar(global.H_val_1, global.S_val_1, global.V_val_1), outPutImage);	
	}
	
	if (color == "Red") {
		cvtColor(frame, Hsv_frame, CV_BGR2HSV);
		//qDebug() << global.H_valm_2 << global.S_valm_2 << global.V_valm_2 << global.H_val_2 << global.S_val_2 << global.V_val_2;
		inRange(Hsv_frame, Scalar(global.H_valm_2, global.S_valm_2, global.V_valm_2), Scalar(global.H_val_2, global.S_val_2, global.V_val_2), outPutImage);
	}

	MainWindow::morphOps(outPutImage);
	
	return outPutImage;
}

void MainWindow::morphOps(Mat &thresh) {
	
	Mat erodeElement = getStructuringElement(MORPH_RECT, Size(3, 3));
	Mat dilateElement = getStructuringElement(MORPH_RECT, Size(8, 8));
	
	erode(thresh, thresh, erodeElement);
	erode(thresh, thresh, erodeElement);
	dilate(thresh, thresh, dilateElement);
	dilate(thresh, thresh, dilateElement);
}

void MainWindow::trackObject(int &x, int &y, Mat frame, Mat &cameraFeed, Scalar color) {
	
	int x_t = 0, y_t = 0, x_b = 0, y_b = 0, x_l = 0, y_l = 0, x_r = 0, y_r = 0;
	bool bl = true;

	for (int x = 0; x < frame.rows; x++) {
		for (int y = 0; y < frame.cols; y++) {
			if (((int)frame.at<uchar>(x, y) == 255) && bl) {
				x_t = y;
				y_t = x;
				bl = false;
			}
		}
	}

	bl = true;

	for (int x = frame.rows - 1; x >= 0; x--) {
		for (int y = frame.cols - 1; y >= 0; y--) {
			if (((int)frame.at<uchar>(x, y) == 255) && bl) {
				x_b = y;
				y_b = x;
				bl = false;
			}
		}
	}

	bl = true;

	for (int y = 0; y < frame.cols; y++) {
		for (int x = 0; x < frame.rows; x++) {
			if (((int)frame.at<uchar>(x, y) == 255) && bl) {
				x_l = y;
				y_l = x;
				bl = false;
			}
		}
	}

	bl = true;

	for (int y = frame.cols - 1; y >= 0; y--) {
		for (int x = frame.rows - 1; x >= 0; x--) {
			if (((int)frame.at<uchar>(x, y) == 255) && bl) {
				x_r = y;
				y_r = x;
				bl = false;
			}
		}
	}

	circle(cameraFeed, Point(x_r, y_r), 1, Scalar(255, 0, 0), CV_FILLED, 2);
	circle(cameraFeed, Point(x_l, y_l), 1, Scalar(255, 0, 0), CV_FILLED, 2);
	circle(cameraFeed, Point(x_t, y_t), 1, Scalar(0, 255, 0), CV_FILLED, 2);
	circle(cameraFeed, Point(x_b, y_b), 1, Scalar(0, 255, 0), CV_FILLED, 2);
	if (distanceCalculate(x_t, y_t, x_b, y_b) > distanceCalculate(x_l, y_l, x_r, y_r)) {
		circle(cameraFeed, Point(x_t + std::abs(x_b - x_t) / 2, y_t + std::abs(y_b - y_t) / 2), distanceCalculate(x_t, y_t, x_b, y_b) / 2, color, 3, 2);
		circle(cameraFeed, Point(x_t + std::abs(x_b - x_t) / 2, y_t + std::abs(y_b - y_t) / 2), 5, color, CV_FILLED, 2);
		x = x_t + std::abs(x_b - x_t) / 2;
		y = y_t + std::abs(y_b - y_t) / 2;
	}
	else {
		circle(cameraFeed, Point(x_l + std::abs(x_r - x_l) / 2, y_l + std::abs(y_r - y_l) / 2), distanceCalculate(x_l, y_l, x_r, y_r) / 2, color, 3, 2);
		circle(cameraFeed, Point(x_l + std::abs(x_r - x_l) / 2, y_l + std::abs(y_r - y_l) / 2), 5, color, CV_FILLED, 2);
		x = x_t + std::abs(x_b - x_t) / 2;
		y = y_t + std::abs(y_b - y_t) / 2;
	}
}

void MainWindow::trackObject_Version_2(int &x, int &y, Mat threshold, Mat &cameraFeed, Scalar color) {
	
	Mat temp;
	threshold.copyTo(temp);
	double ref_area = 0;
	bool object_found = false;
	vector<Vec4i> hierarchy;
	vector< vector<Point> > contours;

	findContours(temp, contours, hierarchy, CV_RETR_CCOMP, CV_CHAIN_APPROX_SIMPLE);
	
	if (hierarchy.size() > 0) {

		int num_objects = hierarchy.size();

		if (num_objects < global.MAX_NUM_OBJECTS) {
			for (int index = 0; index >= 0; index = hierarchy[index][0]) {

				Moments moment = moments((cv::Mat)contours[index]);
				double area = moment.m00;

				if (area > global.MIN_OBJECT_AREA && area < global.MAX_OBJECT_AREA && area > ref_area) {
					x = moment.m10 / area;
					y = moment.m01 / area;
					object_found = true;
					ref_area = area;
				}
				else object_found = false;
			}
			if (object_found == true) {
				circle(cameraFeed, Point(x, y), 20, color, CV_FILLED, 2);
				putText(cameraFeed, to_string(x) + " - " + to_string(y), Point(x, y + 30), 1, 1, color, 2);
			}
		}
	}
}

double MainWindow::distanceCalculate(double x1, double y1, double x2, double y2) { return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)); }

void MainWindow::on_actionStart_triggered() {
	
	MainWindow::on_startBtn_pressed();
}
void MainWindow::on_actionStop_triggered() {
	
	if (video.isOpened()) {
		ui->startBtn->setText("Start");
		video.release();
		return;
	}
}

void MainWindow::on_actionBlue_Mask_triggered() {

	dialogColorBlue = new DialogColorBlue(this);
	dialogColorBlue->setWindowTitle("Blue Color");
	dialogColorBlue->show();
}

void MainWindow::on_actionGreen_Mask_triggered() {

	dialogColorGreen = new DialogColorGreen(this);
	dialogColorGreen->setWindowTitle("Green Color");
	dialogColorGreen->show();
}

void MainWindow::on_actionRed_Mask_triggered() {

	dialogColorRed = new DialogColorRed(this);
	dialogColorRed->setWindowTitle("Red Color");
	dialogColorRed->show();
}

void MainWindow::on_actionStart_Painting_triggered() {

	if (global.new_paint) { global.new_paint = false; }
	else { global.new_paint = true; }
}

void MainWindow::on_actionStart_Stop_triggered() {

	if (global.startstop) { global.startstop = false; }
	else { global.startstop = true; }
}

void MainWindow::on_actionBrush_Size_1_triggered() { global.brash_size = 2; }

void MainWindow::on_actionBrush_Size_3_triggered() { global.brash_size = 5; }

void MainWindow::on_actionBrush_Size_10_triggered() { global.brash_size = 10; }

void MainWindow::on_actionEraser_Size_6_triggered() { global.erase_size = 10; }

void MainWindow::on_actionEraser_Size_10_triggered() { global.erase_size = 20; }

void MainWindow::on_actionEraser_Size_15_triggered() { global.erase_size = 50; }