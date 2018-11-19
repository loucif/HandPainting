
#include <QMainWindow>
#include <QDebug>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QImage>
#include <QPixmap>
#include <QCloseEvent>
#include <QMessageBox>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;

namespace Ui { class MainWindow; }

class HandPainting : public QMainWindow {
	Q_OBJECT

public:
	explicit HandPainting(QWidget *parent = 0);
	HandPainting(QWidget * parent);
	~HandPainting();

protected:
	void closeEvent(QCloseEvent *event);

private slots:
	void on_startBtn_pressed();

private:
	Ui::MainWindow *ui;
	VideoCapture video;
	QGraphicsPixmapItem pixmap;
	QGraphicsPixmapItem pixmap_1;
	static Mat getColorObject2(Mat frame);
};