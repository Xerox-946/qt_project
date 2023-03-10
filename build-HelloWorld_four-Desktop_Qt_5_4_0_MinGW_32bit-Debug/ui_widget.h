/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_19;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_20;
    QLabel *label_23;
    QWidget *widget;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->setEnabled(true);
        Widget->resize(900, 900);
        Widget->setStyleSheet(QStringLiteral("background-color: rgb(250, 248, 239);"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 20, 251, 95));
        QFont font;
        font.setFamily(QStringLiteral("Algerian"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background-color: rgb(255, 170, 255);\n"
"color: rgb(255, 255, 0);"));
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(610, 140, 140, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(143, 122, 102);\n"
"\n"
"border-radius:5px;\n"
"color: rgb(255, 255, 255);"));
        label_19 = new QLabel(Widget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(450, 30, 125, 81));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_19->setFont(font2);
        label_19->setStyleSheet(QLatin1String("background-color: rgb(205, 193, 180);\n"
"color: rgb(238, 228, 218);border-radius:5px;"));
        label_19->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_21 = new QLabel(Widget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(450, 50, 125, 61));
        label_21->setFont(font2);
        label_21->setStyleSheet(QLatin1String("background-color: rgb(205, 193, 180);\n"
"color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_21->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(Widget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(600, 50, 125, 61));
        label_22->setFont(font2);
        label_22->setStyleSheet(QLatin1String("background-color: rgb(205, 193, 180);\n"
"color: rgb(255, 255, 255);"));
        label_22->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(Widget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(600, 30, 155, 81));
        label_20->setFont(font2);
        label_20->setStyleSheet(QLatin1String("background-color: rgb(205, 193, 180);\n"
"color: rgb(238, 228, 218);\n"
"border-radius:5px;"));
        label_20->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_23 = new QLabel(Widget);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(600, 50, 155, 61));
        label_23->setFont(font2);
        label_23->setStyleSheet(QLatin1String("background-color: rgb(205, 193, 180);\n"
"color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_23->setAlignment(Qt::AlignCenter);
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(160, 240, 587, 587));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(187, 173, 160);border-radius:5px;"));
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(160, 140, 401, 81));
        textBrowser->setLayoutDirection(Qt::LeftToRight);
        textBrowser->setStyleSheet(QStringLiteral("color: rgb(143, 122, 102);"));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label->setText(QApplication::translate("Widget", "2048", 0));
        pushButton->setText(QApplication::translate("Widget", "new game", 0));
        label_19->setText(QApplication::translate("Widget", "SCORE", 0));
        label_21->setText(QApplication::translate("Widget", "0", 0));
        label_22->setText(QApplication::translate("Widget", "BEST", 0));
        label_20->setText(QApplication::translate("Widget", "BEST", 0));
        label_23->setText(QApplication::translate("Widget", "0", 0));
        textBrowser->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:600;\">Play 2048 Game Online</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">Join the numbers and get to the 2048 tile!</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
