#include "DialogColorGreen.h"

DialogColorGreen::DialogColorGreen(QWidget *parent) : QDialog(parent) {
	ui.setupUi(this);
	//inRange(Hsv_frame, Scalar(36, 0, 0), Scalar(86, 255, 255), outPutImage);green
	ui.horizontalSlider->setValue(36);
	ui.horizontalSlider_2->setValue(86);
	ui.horizontalSlider_3->setValue(255);
	ui.horizontalSlider_4->setValue(0);
	ui.horizontalSlider_5->setValue(255);
	ui.horizontalSlider_6->setValue(0);

	connect(ui.horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(valueHmin(int)));
	connect(ui.horizontalSlider_2, SIGNAL(valueChanged(int)), this, SLOT(valueHmax(int)));
	connect(ui.horizontalSlider_3, SIGNAL(valueChanged(int)), this, SLOT(valueSmax(int)));
	connect(ui.horizontalSlider_4, SIGNAL(valueChanged(int)), this, SLOT(valueSmin(int)));
	connect(ui.horizontalSlider_5, SIGNAL(valueChanged(int)), this, SLOT(valueVmax(int)));
	connect(ui.horizontalSlider_6, SIGNAL(valueChanged(int)), this, SLOT(valueVmin(int)));
}

DialogColorGreen::~DialogColorGreen() {}

void DialogColorGreen::valueHmin(int val) { global.H_valm_1 = val; }
void DialogColorGreen::valueSmin(int val) { global.S_valm_1 = val; }
void DialogColorGreen::valueVmin(int val) { global.V_valm_1 = val; }
void DialogColorGreen::valueHmax(int val) { global.H_val_1 = val; }
void DialogColorGreen::valueSmax(int val) { global.S_val_1 = val; }
void DialogColorGreen::valueVmax(int val) { global.V_val_1 = val; }