
#include <QMainWindow>
#include <QDebug>
#include <QString>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QImage>
#include <QPixmap>
#include <QCloseEvent>
#include <QMessageBox>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <stdio.h>

#include "global.h"
#include "DialogColorBlue.h"
#include "DialogColorRed.h"
#include "DialogColorGreen.h"

using namespace cv;
using namespace std;
namespace Ui { class MainWindow; }

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

	int from_class;

protected:
	void closeEvent(QCloseEvent *event);

private slots:
    void on_startBtn_pressed();
    void on_actionBlue_Mask_triggered();
	void on_actionGreen_Mask_triggered();
	void on_actionRed_Mask_triggered();
	void on_actionStart_Painting_triggered();
	void on_actionStart_Stop_triggered();
	void on_actionBrush_Size_1_triggered();
	void on_actionBrush_Size_3_triggered();
	void on_actionBrush_Size_10_triggered();
	void on_actionEraser_Size_6_triggered();
	void on_actionEraser_Size_10_triggered();
	void on_actionEraser_Size_15_triggered();

private:
    Ui::MainWindow *ui;
	VideoCapture video;
	QGraphicsPixmapItem pixmap;
	QGraphicsPixmapItem pixmap_1;
	QGraphicsPixmapItem pixmap_2;
	QGraphicsPixmapItem pixmap_3;
	QGraphicsPixmapItem pixmap_4;
	Mat getBlueObject(Mat frame);
	Mat getGreenObject(Mat frame);
	Mat getRedObject(Mat frame);
	Mat getObjectByColor(Mat frame,QString color);
	static void morphOps(Mat & thresh);
	void trackObject(int & x, int & y, Mat frame, Mat & cameraFeed, Scalar color);
	double distanceCalculate(double x1, double y1, double x2, double y2);
	DialogColorGreen *dialogColorGreen;
	DialogColorBlue *dialogColorBlue;
	DialogColorRed *dialogColorRed;
};