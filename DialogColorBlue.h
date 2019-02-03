#pragma once

#include <QDialog>

#include "ui_DialogColorGlobal.h"
#include "global.h"

class DialogColorBlue : public QDialog {
	Q_OBJECT

public:
	DialogColorBlue(QWidget *parent = Q_NULLPTR);
	~DialogColorBlue();

public slots:
	void valueHmin(int val);
	void valueSmin(int val);
	void valueVmin(int val);
	void valueHmax(int val);
	void valueVmax(int val);
	void valueSmax(int val);

private:
	Ui::DialogColorGlobal ui;
};
