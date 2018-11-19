/********************************************************************************
** Form generated from reading UI file 'HandPainting.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HANDPAINTING_H
#define UI_HANDPAINTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HandPaintingClass
{
public:
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HandPaintingClass)
    {
        if (HandPaintingClass->objectName().isEmpty())
            HandPaintingClass->setObjectName(QStringLiteral("HandPaintingClass"));
        HandPaintingClass->resize(600, 400);
        centralWidget = new QWidget(HandPaintingClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(470, 90, 61, 221));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 10, 75, 23));
        pushButton->setFlat(false);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 70, 381, 251));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 10, 75, 23));
        HandPaintingClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HandPaintingClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        HandPaintingClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HandPaintingClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        HandPaintingClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HandPaintingClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        HandPaintingClass->setStatusBar(statusBar);

        retranslateUi(HandPaintingClass);

        QMetaObject::connectSlotsByName(HandPaintingClass);
    } // setupUi

    void retranslateUi(QMainWindow *HandPaintingClass)
    {
        HandPaintingClass->setWindowTitle(QApplication::translate("HandPaintingClass", "HandPainting", nullptr));
        pushButton->setText(QApplication::translate("HandPaintingClass", "loucif", nullptr));
        label->setText(QApplication::translate("HandPaintingClass", "coco", nullptr));
        pushButton_2->setText(QApplication::translate("HandPaintingClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HandPaintingClass: public Ui_HandPaintingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HANDPAINTING_H
