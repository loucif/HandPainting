/********************************************************************************
** Form generated from reading UI file 'DialogColorGlobal.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCOLORGLOBAL_H
#define UI_DIALOGCOLORGLOBAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_DialogColorGlobal
{
public:
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_3;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label;
    QSlider *horizontalSlider_2;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_6;
    QSlider *horizontalSlider_4;
    QSlider *horizontalSlider_5;
    QSlider *horizontalSlider_6;
    QLabel *label_4;

    void setupUi(QDialog *DialogColorGlobal)
    {
        if (DialogColorGlobal->objectName().isEmpty())
            DialogColorGlobal->setObjectName(QStringLiteral("DialogColorGlobal"));
        DialogColorGlobal->resize(400, 300);
        horizontalSlider = new QSlider(DialogColorGlobal);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(40, 60, 160, 22));
        horizontalSlider->setMaximum(255);
        horizontalSlider->setValue(110);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_3 = new QSlider(DialogColorGlobal);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(220, 130, 160, 22));
        horizontalSlider_3->setMaximum(255);
        horizontalSlider_3->setValue(255);
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(DialogColorGlobal);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 30, 47, 13));
        label_7 = new QLabel(DialogColorGlobal);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(240, 170, 47, 13));
        label = new QLabel(DialogColorGlobal);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 30, 47, 13));
        horizontalSlider_2 = new QSlider(DialogColorGlobal);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(220, 60, 160, 22));
        horizontalSlider_2->setMaximum(255);
        horizontalSlider_2->setValue(130);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(DialogColorGlobal);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 60, 16, 16));
        label_9 = new QLabel(DialogColorGlobal);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 200, 16, 16));
        label_8 = new QLabel(DialogColorGlobal);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(80, 170, 47, 13));
        label_5 = new QLabel(DialogColorGlobal);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 100, 47, 13));
        label_6 = new QLabel(DialogColorGlobal);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 130, 16, 16));
        horizontalSlider_4 = new QSlider(DialogColorGlobal);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setGeometry(QRect(40, 130, 160, 22));
        horizontalSlider_4->setMaximum(255);
        horizontalSlider_4->setValue(50);
        horizontalSlider_4->setOrientation(Qt::Horizontal);
        horizontalSlider_5 = new QSlider(DialogColorGlobal);
        horizontalSlider_5->setObjectName(QStringLiteral("horizontalSlider_5"));
        horizontalSlider_5->setGeometry(QRect(220, 200, 160, 22));
        horizontalSlider_5->setMaximum(255);
        horizontalSlider_5->setValue(255);
        horizontalSlider_5->setOrientation(Qt::Horizontal);
        horizontalSlider_6 = new QSlider(DialogColorGlobal);
        horizontalSlider_6->setObjectName(QStringLiteral("horizontalSlider_6"));
        horizontalSlider_6->setGeometry(QRect(40, 200, 160, 22));
        horizontalSlider_6->setMaximum(255);
        horizontalSlider_6->setValue(50);
        horizontalSlider_6->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(DialogColorGlobal);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(240, 100, 47, 13));

        retranslateUi(DialogColorGlobal);

        QMetaObject::connectSlotsByName(DialogColorGlobal);
    } // setupUi

    void retranslateUi(QDialog *DialogColorGlobal)
    {
        DialogColorGlobal->setWindowTitle(QApplication::translate("DialogColorGlobal", "DialogColorGlobal", nullptr));
        label_2->setText(QApplication::translate("DialogColorGlobal", "MAX", nullptr));
        label_7->setText(QApplication::translate("DialogColorGlobal", "MAX", nullptr));
        label->setText(QApplication::translate("DialogColorGlobal", "MIN", nullptr));
        label_3->setText(QApplication::translate("DialogColorGlobal", "H", nullptr));
        label_9->setText(QApplication::translate("DialogColorGlobal", "V", nullptr));
        label_8->setText(QApplication::translate("DialogColorGlobal", "MIN", nullptr));
        label_5->setText(QApplication::translate("DialogColorGlobal", "MIN", nullptr));
        label_6->setText(QApplication::translate("DialogColorGlobal", "S", nullptr));
        label_4->setText(QApplication::translate("DialogColorGlobal", "MAX", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogColorGlobal: public Ui_DialogColorGlobal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCOLORGLOBAL_H
