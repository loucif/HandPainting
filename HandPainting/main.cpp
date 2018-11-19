#include "HandPainting.h"
#include <QtWidgets/QApplication>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;
using namespace std;

int main(int argc, char *argv[]) {
	QApplication a(argc, argv);
	HandPainting w;
	//Mat src = imread("/Users/loucif/Pictures/tumblr_n4vje69pJm1st5lhmo1_1280.jpg");
	//namedWindow("loucif", WINDOW_AUTOSIZE);
	//imshow("loucif", src);
	w.show();
	return a.exec();
}
