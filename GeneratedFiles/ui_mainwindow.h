/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionStart;
    QAction *actionStop;
    QAction *actionColor_Detection;
    QAction *actionStart_Painting;
    QAction *actionGreen_Mask;
    QAction *actionBlue_Mask;
    QAction *actionRed_Mask;
    QAction *actionMorph;
    QAction *actionBrush_Size_1;
    QAction *actionBrush_Size_3;
    QAction *actionBrush_Size_10;
    QAction *actionEraser_Size_5;
    QAction *actionEraser_Size_6;
    QAction *actionEraser_Size_10;
    QAction *actionEraser_Size_15;
    QAction *actionStart_Stop;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout_3;
    QGraphicsView *graphicsView_3;
    QGraphicsView *graphicsView_4;
    QGraphicsView *graphicsView_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *startBtn;
    QMenuBar *menuBar;
    QMenu *menuVideo;
    QMenu *menuSettings;
    QMenu *menuAbout;
    QMenu *menuPainting;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(613, 583);
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QStringLiteral("actionStart"));
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        actionColor_Detection = new QAction(MainWindow);
        actionColor_Detection->setObjectName(QStringLiteral("actionColor_Detection"));
        actionStart_Painting = new QAction(MainWindow);
        actionStart_Painting->setObjectName(QStringLiteral("actionStart_Painting"));
        actionGreen_Mask = new QAction(MainWindow);
        actionGreen_Mask->setObjectName(QStringLiteral("actionGreen_Mask"));
        actionBlue_Mask = new QAction(MainWindow);
        actionBlue_Mask->setObjectName(QStringLiteral("actionBlue_Mask"));
        actionRed_Mask = new QAction(MainWindow);
        actionRed_Mask->setObjectName(QStringLiteral("actionRed_Mask"));
        actionMorph = new QAction(MainWindow);
        actionMorph->setObjectName(QStringLiteral("actionMorph"));
        actionBrush_Size_1 = new QAction(MainWindow);
        actionBrush_Size_1->setObjectName(QStringLiteral("actionBrush_Size_1"));
        actionBrush_Size_3 = new QAction(MainWindow);
        actionBrush_Size_3->setObjectName(QStringLiteral("actionBrush_Size_3"));
        actionBrush_Size_10 = new QAction(MainWindow);
        actionBrush_Size_10->setObjectName(QStringLiteral("actionBrush_Size_10"));
        actionEraser_Size_5 = new QAction(MainWindow);
        actionEraser_Size_5->setObjectName(QStringLiteral("actionEraser_Size_5"));
        actionEraser_Size_6 = new QAction(MainWindow);
        actionEraser_Size_6->setObjectName(QStringLiteral("actionEraser_Size_6"));
        actionEraser_Size_10 = new QAction(MainWindow);
        actionEraser_Size_10->setObjectName(QStringLiteral("actionEraser_Size_10"));
        actionEraser_Size_15 = new QAction(MainWindow);
        actionEraser_Size_15->setObjectName(QStringLiteral("actionEraser_Size_15"));
        actionStart_Stop = new QAction(MainWindow);
        actionStart_Stop->setObjectName(QStringLiteral("actionStart_Stop"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        graphicsView_2 = new QGraphicsView(centralWidget);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setAutoFillBackground(false);
        QBrush brush(QColor(65, 65, 65, 255));
        brush.setStyle(Qt::SolidPattern);
        graphicsView_2->setBackgroundBrush(brush);

        horizontalLayout_2->addWidget(graphicsView_2);

        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        horizontalLayout_2->addWidget(graphicsView);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        graphicsView_3 = new QGraphicsView(centralWidget);
        graphicsView_3->setObjectName(QStringLiteral("graphicsView_3"));

        horizontalLayout_3->addWidget(graphicsView_3);

        graphicsView_4 = new QGraphicsView(centralWidget);
        graphicsView_4->setObjectName(QStringLiteral("graphicsView_4"));

        horizontalLayout_3->addWidget(graphicsView_4);

        graphicsView_5 = new QGraphicsView(centralWidget);
        graphicsView_5->setObjectName(QStringLiteral("graphicsView_5"));

        horizontalLayout_3->addWidget(graphicsView_5);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 1, 0, 2, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        startBtn = new QPushButton(centralWidget);
        startBtn->setObjectName(QStringLiteral("startBtn"));

        horizontalLayout->addWidget(startBtn);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 613, 21));
        menuVideo = new QMenu(menuBar);
        menuVideo->setObjectName(QStringLiteral("menuVideo"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        menuPainting = new QMenu(menuBar);
        menuPainting->setObjectName(QStringLiteral("menuPainting"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuVideo->menuAction());
        menuBar->addAction(menuPainting->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuVideo->addAction(actionStart);
        menuVideo->addAction(actionStop);
        menuSettings->addAction(actionGreen_Mask);
        menuSettings->addAction(actionBlue_Mask);
        menuSettings->addAction(actionRed_Mask);
        menuSettings->addSeparator();
        menuSettings->addSeparator();
        menuSettings->addAction(actionMorph);
        menuPainting->addAction(actionStart_Stop);
        menuPainting->addAction(actionStart_Painting);
        menuPainting->addSeparator();
        menuPainting->addAction(actionBrush_Size_1);
        menuPainting->addAction(actionBrush_Size_3);
        menuPainting->addAction(actionBrush_Size_10);
        menuPainting->addSeparator();
        menuPainting->addAction(actionEraser_Size_6);
        menuPainting->addAction(actionEraser_Size_10);
        menuPainting->addAction(actionEraser_Size_15);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Video Processor", nullptr));
        actionStart->setText(QApplication::translate("MainWindow", "Start", nullptr));
        actionStop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        actionColor_Detection->setText(QApplication::translate("MainWindow", "Blue Mask", nullptr));
        actionStart_Painting->setText(QApplication::translate("MainWindow", "New Paint", nullptr));
        actionGreen_Mask->setText(QApplication::translate("MainWindow", "Green Mask", nullptr));
        actionBlue_Mask->setText(QApplication::translate("MainWindow", "Blue Mask", nullptr));
        actionRed_Mask->setText(QApplication::translate("MainWindow", "Red Mask", nullptr));
        actionMorph->setText(QApplication::translate("MainWindow", "Morph", nullptr));
        actionBrush_Size_1->setText(QApplication::translate("MainWindow", "Brush Size 1%", nullptr));
        actionBrush_Size_3->setText(QApplication::translate("MainWindow", "Brush Size 3%", nullptr));
        actionBrush_Size_10->setText(QApplication::translate("MainWindow", "Brush Size 10%", nullptr));
        actionEraser_Size_5->setText(QApplication::translate("MainWindow", "Eraser Size 5%", nullptr));
        actionEraser_Size_6->setText(QApplication::translate("MainWindow", "Eraser Size 5%", nullptr));
        actionEraser_Size_10->setText(QApplication::translate("MainWindow", "Eraser Size 10%", nullptr));
        actionEraser_Size_15->setText(QApplication::translate("MainWindow", "Eraser Size 15%", nullptr));
        actionStart_Stop->setText(QApplication::translate("MainWindow", "Start / Stop", nullptr));
        startBtn->setText(QApplication::translate("MainWindow", "Start", nullptr));
        menuVideo->setTitle(QApplication::translate("MainWindow", "Video", nullptr));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Settings", nullptr));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", nullptr));
        menuPainting->setTitle(QApplication::translate("MainWindow", "Painting", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
