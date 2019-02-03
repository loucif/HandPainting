#include "DialogColorRed.h"

DialogColorRed::DialogColorRed(QWidget *parent) : QDialog(parent) {
	ui.setupUi(this);
	//inRange(hsv, Scalar(0, 70, 50), Scalar(10, 255, 255), mask1);red
	ui.horizontalSlider->setValue(0);
	ui.horizontalSlider_2->setValue(10);
	ui.horizontalSlider_3->setValue(255);
	ui.horizontalSlider_4->setValue(70);
	ui.horizontalSlider_5->setValue(255);
	ui.horizontalSlider_6->setValue(50);

	connect(ui.horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(valueHmin(int)));
	connect(ui.horizontalSlider_2, SIGNAL(valueChanged(int)), this, SLOT(valueHmax(int)));
	connect(ui.horizontalSlider_3, SIGNAL(valueChanged(int)), this, SLOT(valueSmax(int)));
	connect(ui.horizontalSlider_4, SIGNAL(valueChanged(int)), this, SLOT(valueSmin(int)));
	connect(ui.horizontalSlider_5, SIGNAL(valueChanged(int)), this, SLOT(valueVmax(int)));
	connect(ui.horizontalSlider_6, SIGNAL(valueChanged(int)), this, SLOT(valueVmin(int)));
}

DialogColorRed::~DialogColorRed() {}

void DialogColorRed::valueHmin(int val) { global.H_valm_2 = val; }
void DialogColorRed::valueSmin(int val) { global.S_valm_2 = val; }
void DialogColorRed::valueVmin(int val) { global.V_valm_2 = val; }
void DialogColorRed::valueHmax(int val) { global.H_val_2 = val; }
void DialogColorRed::valueSmax(int val) { global.S_val_2 = val; }
void DialogColorRed::valueVmax(int val) { global.V_val_2 = val; }
