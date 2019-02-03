#include "DialogColorBlue.h"

DialogColorBlue::DialogColorBlue(QWidget *parent) : QDialog(parent) {
	ui.setupUi(this);
	connect(ui.horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(valueHmin(int)));
	connect(ui.horizontalSlider_2, SIGNAL(valueChanged(int)), this, SLOT(valueHmax(int)));
	connect(ui.horizontalSlider_3, SIGNAL(valueChanged(int)), this, SLOT(valueSmax(int)));
	connect(ui.horizontalSlider_4, SIGNAL(valueChanged(int)), this, SLOT(valueSmin(int)));
	connect(ui.horizontalSlider_5, SIGNAL(valueChanged(int)), this, SLOT(valueVmax(int)));
	connect(ui.horizontalSlider_6, SIGNAL(valueChanged(int)), this, SLOT(valueVmin(int)));
}

DialogColorBlue::~DialogColorBlue() {}

void DialogColorBlue::valueHmin(int val) { global.H_valm = val; }
void DialogColorBlue::valueSmin(int val) { global.S_valm = val; }
void DialogColorBlue::valueVmin(int val) { global.V_valm = val; }
void DialogColorBlue::valueHmax(int val) { global.H_val = val; }
void DialogColorBlue::valueSmax(int val) { global.S_val = val; }
void DialogColorBlue::valueVmax(int val) { global.V_val = val; }