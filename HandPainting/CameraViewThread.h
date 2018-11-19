#ifndef CAMERAVIEWTHREAD_H
#define CAMERAVIEWTHREAD_H

#include <QThread>
#include <QLabel>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;

class CameraViewThread : public QThread
{
public:
	CameraViewThread(QLabel *cameraLabel, VideoCapture cameraCapture);

private:
	void run();

	QLabel *cameraLabel;
	VideoCapture cameraCapture;
};

#endif // CAMERAVIEWTHREAD_H