#include "HandPainting.h"
#include "ui_HandPainting.h"

HandPainting::HandPainting(QWidget *parent) : QMainWindow(parent) {
    ui->setupUi(this);
    ui->graphicsView->setScene(new QGraphicsScene(this));
    ui->graphicsView->scene()->addItem(&pixmap);
	ui->graphicsView_2->setScene(new QGraphicsScene(this));
	ui->graphicsView_2->scene()->addItem(&pixmap_1);
	namedWindow("loucif", WINDOW_AUTOSIZE);
}

HandPainting::~HandPainting() { delete ui; }

void HandPainting::on_startBtn_pressed() {
    if(video.isOpened()) {
        ui->startBtn->setText("Start");
        video.release();
        return;
    }
	if (!video.open(0)) {
		QMessageBox::critical(this, "Camera Error", "Make sure you entered a correct camera index,"
			"<br>or that the camera is not being accessed by another program!");
		return;
	}

    ui->startBtn->setText("Stop");

    Mat frame;
	Mat frame_1;
    while(video.isOpened()) {
        video >> frame;
		frame_1 = frame.clone();
        if(!frame.empty()) {
			imshow("loucif", HandPainting::getColorObject2(frame));
			frame_1 = HandPainting::getColorObject2(frame);
			//qDebug() << frame.data;            
			//copyMakeBorder(frame, frame, frame.rows/2, frame.rows/2, frame.cols/2, frame.cols/2, BORDER_REFLECT);
            QImage qimg(frame_1.data, frame_1.cols, frame_1.rows, frame_1.step, QImage::Format_Grayscale8);
            pixmap.setPixmap( QPixmap::fromImage(qimg.rgbSwapped()) );
            ui->graphicsView->fitInView(&pixmap, Qt::KeepAspectRatio);
			
			QImage qimgs(frame.data, frame.cols, frame.rows, frame.step, QImage::Format_RGB888);
			pixmap_1.setPixmap(QPixmap::fromImage(qimgs.rgbSwapped()));
			ui->graphicsView_2->fitInView(&pixmap_1, Qt::KeepAspectRatio);
        }
        qApp->processEvents();
    }
    ui->startBtn->setText("Start");
}

void HandPainting::closeEvent(QCloseEvent *event) {
    if(video.isOpened()) {
        QMessageBox::warning(this, "Warning", "Stop the video before closing the application !");
        event->ignore();
    } else { event->accept(); }
}

Mat HandPainting::getColorObject2(Mat frame) {
	Mat outPutImage = frame.clone();
	Mat Hsv_frame = frame.clone();
	cvtColor(frame, Hsv_frame, CV_BGR2HSV);
	inRange(Hsv_frame, Scalar(44, 62, 102), Scalar(118, 255, 255), outPutImage);
	//morphOps(outPutImage);
	return outPutImage;
}