/********************************************************************************
** Form generated from reading UI file 'modelchoosewidget.ui'
**
** Created: Tue Dec 6 15:22:02 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODELCHOOSEWIDGET_H
#define UI_MODELCHOOSEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "myswitchbutton.h"

QT_BEGIN_NAMESPACE

class Ui_ModelChooseWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget_model_widget_up;
    QGridLayout *gridLayout;
    QLabel *label_leave_model;
    mySwitchButton *pbn_leve_home;
    QLabel *label_go_model;
    mySwitchButton *pbn_go_home;
    QWidget *widget_model_widget_down;
    QHBoxLayout *horizontalLayout;
    QLabel *label_led_note;
    mySwitchButton *pbn_key_led;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_text;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *ModelChooseWidget)
    {
        if (ModelChooseWidget->objectName().isEmpty())
            ModelChooseWidget->setObjectName(QString::fromUtf8("ModelChooseWidget"));
        ModelChooseWidget->resize(613, 326);
        verticalLayout_3 = new QVBoxLayout(ModelChooseWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(80, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(30);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_model_widget_up = new QWidget(ModelChooseWidget);
        widget_model_widget_up->setObjectName(QString::fromUtf8("widget_model_widget_up"));
        gridLayout = new QGridLayout(widget_model_widget_up);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(10);
        label_leave_model = new QLabel(widget_model_widget_up);
        label_leave_model->setObjectName(QString::fromUtf8("label_leave_model"));
        label_leave_model->setStyleSheet(QString::fromUtf8("color: rgb(142, 227, 235);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(label_leave_model, 0, 0, 1, 1);

        pbn_leve_home = new mySwitchButton(widget_model_widget_up);
        pbn_leve_home->setObjectName(QString::fromUtf8("pbn_leve_home"));

        gridLayout->addWidget(pbn_leve_home, 0, 1, 1, 1);

        label_go_model = new QLabel(widget_model_widget_up);
        label_go_model->setObjectName(QString::fromUtf8("label_go_model"));
        label_go_model->setStyleSheet(QString::fromUtf8("color: rgb(142, 227, 235);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(label_go_model, 1, 0, 1, 1);

        pbn_go_home = new mySwitchButton(widget_model_widget_up);
        pbn_go_home->setObjectName(QString::fromUtf8("pbn_go_home"));

        gridLayout->addWidget(pbn_go_home, 1, 1, 1, 1);


        verticalLayout->addWidget(widget_model_widget_up);

        widget_model_widget_down = new QWidget(ModelChooseWidget);
        widget_model_widget_down->setObjectName(QString::fromUtf8("widget_model_widget_down"));
        horizontalLayout = new QHBoxLayout(widget_model_widget_down);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_led_note = new QLabel(widget_model_widget_down);
        label_led_note->setObjectName(QString::fromUtf8("label_led_note"));
        label_led_note->setStyleSheet(QString::fromUtf8("color: rgb(142, 227, 235);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(label_led_note);

        pbn_key_led = new mySwitchButton(widget_model_widget_down);
        pbn_key_led->setObjectName(QString::fromUtf8("pbn_key_led"));

        horizontalLayout->addWidget(pbn_key_led);


        verticalLayout->addWidget(widget_model_widget_down);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_text = new QLabel(ModelChooseWidget);
        label_text->setObjectName(QString::fromUtf8("label_text"));
        label_text->setStyleSheet(QString::fromUtf8("font: 12pt \"Abyssinica SIL\";\n"
"color: rgb(142, 227, 235);"));
        label_text->setTextFormat(Qt::PlainText);
        label_text->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_text);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_2->addItem(verticalSpacer_2);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(ModelChooseWidget);

        QMetaObject::connectSlotsByName(ModelChooseWidget);
    } // setupUi

    void retranslateUi(QWidget *ModelChooseWidget)
    {
        ModelChooseWidget->setWindowTitle(QApplication::translate("ModelChooseWidget", "Form", 0, QApplication::UnicodeUTF8));
        label_leave_model->setText(QApplication::translate("ModelChooseWidget", "\347\246\273\345\256\266\346\250\241\345\274\217:", 0, QApplication::UnicodeUTF8));
        pbn_leve_home->setText(QString());
        label_go_model->setText(QApplication::translate("ModelChooseWidget", "\345\233\236\345\256\266\346\250\241\345\274\217:", 0, QApplication::UnicodeUTF8));
        pbn_go_home->setText(QString());
        label_led_note->setText(QApplication::translate("ModelChooseWidget", "\344\270\200\351\224\256\345\205\263\345\205\263\347\201\257:", 0, QApplication::UnicodeUTF8));
        pbn_key_led->setText(QString());
        label_text->setText(QApplication::translate("ModelChooseWidget", "\346\250\241\345\274\217\350\257\264\346\230\216\n"
"\n"
"\343\200\220\347\246\273\345\256\266\346\250\241\345\274\217\343\200\221\n"
"    \345\210\207\346\215\242\345\210\260\347\246\273\345\256\266\346\250\241\345\274\217\345\220\216\347\263\273\347\273\237\344\274\232\350\207\252\345\212\250\350\277\233\350\241\214\346\216\247\345\210\266,     \n"
"\346\227\240\351\234\200\346\211\213\345\212\250\346\216\247\345\210\266\n"
"\343\200\220\345\233\236\345\256\266\346\250\241\345\274\217\343\200\221\n"
"        \345\210\207\346\215\242\345\210\260\345\233\236\345\256\266\346\250\241\345\274\217\345\220\216\345\217\257\344\273\245\346\211\213\345\212\250\346\216\247\345\210\266\347\263\273\347\273\237\n"
"\343\200\220\344\270\200\351\224\256\346\216\247\345\210\266\343\200\221\n"
"        \344\270\200\351\224\256\346\216\247\345\210\266\345\217\257\344\273\245\346\216\247\345\210\266\345\256\266\344\270\255\346\211\200\344\273\245\347\201\257\347\232\204\344\270\244\347\201\255", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ModelChooseWidget: public Ui_ModelChooseWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELCHOOSEWIDGET_H
