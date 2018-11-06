#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_HandPainting.h"

class HandPainting : public QMainWindow
{
	Q_OBJECT

public:
	HandPainting(QWidget *parent = Q_NULLPTR);

private:
	Ui::HandPaintingClass ui;
};
