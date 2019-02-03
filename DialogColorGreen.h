#pragma once

#include <QDialog>

#include "ui_DialogColorGlobal.h"
#include "global.h"

class DialogColorGreen : public QDialog {
	Q_OBJECT

public:
	DialogColorGreen(QWidget *parent = Q_NULLPTR);
	~DialogColorGreen();

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
