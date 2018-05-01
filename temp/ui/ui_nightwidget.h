/********************************************************************************
** Form generated from reading UI file 'nightwidget.ui'
**
** Created: Tue Dec 13 10:05:24 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NIGHTWIDGET_H
#define UI_NIGHTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCalendarWidget>
#include <QtGui/QDial>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NightWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QCalendarWidget *calendarWidget;
    QDial *dial;

    void setupUi(QWidget *NightWidget)
    {
        if (NightWidget->objectName().isEmpty())
            NightWidget->setObjectName(QString::fromUtf8("NightWidget"));
        NightWidget->resize(698, 411);
        verticalLayout = new QVBoxLayout(NightWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(NightWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        calendarWidget = new QCalendarWidget(widget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(190, 0, 491, 391));
        dial = new QDial(widget);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setGeometry(QRect(90, 120, 50, 64));

        verticalLayout->addWidget(widget);


        retranslateUi(NightWidget);

        QMetaObject::connectSlotsByName(NightWidget);
    } // setupUi

    void retranslateUi(QWidget *NightWidget)
    {
        NightWidget->setWindowTitle(QApplication::translate("NightWidget", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NightWidget: public Ui_NightWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NIGHTWIDGET_H
