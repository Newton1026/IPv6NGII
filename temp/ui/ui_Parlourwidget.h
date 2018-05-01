/********************************************************************************
** Form generated from reading UI file 'Parlourwidget.ui'
**
** Created: Tue Dec 6 15:22:02 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARLOURWIDGET_H
#define UI_PARLOURWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "myswitchbutton.h"

QT_BEGIN_NAMESPACE

class Ui_Parlourwidget
{
public:
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QWidget *widget_left_main;
    QVBoxLayout *verticalLayout;
    QWidget *widget_light_top;
    QHBoxLayout *horizontalLayout;
    QLabel *lab_light_main;
    QLabel *label_light_main;
    QSpacerItem *horizontalSpacer;
    mySwitchButton *pbn_light_main;
    QWidget *widget_light_mid;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lab_light_top;
    QLabel *label_light_top;
    QSpacerItem *horizontalSpacer_2;
    mySwitchButton *pbn_light_top;
    QWidget *widget_light_bottom;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lab_light_help;
    QLabel *label_light_help;
    QSpacerItem *horizontalSpacer_3;
    mySwitchButton *pbn_light_help;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_right_main;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QToolButton *tbn_temp_add;
    QSpacerItem *verticalSpacer;
    QToolButton *tbn_temp_sub;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget_temp;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_cur_temp;
    QLabel *label_5;
    QLabel *label_cur_hum;
    QLabel *label_div;
    QLabel *label_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_set_temp;
    QLabel *label_6;
    QLabel *label_set_hum;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_6;
    QToolButton *tbn_hum_add;
    QSpacerItem *verticalSpacer_2;
    QToolButton *tbn_hum_sub;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QWidget *Parlourwidget)
    {
        if (Parlourwidget->objectName().isEmpty())
            Parlourwidget->setObjectName(QString::fromUtf8("Parlourwidget"));
        Parlourwidget->resize(602, 292);
        horizontalLayout_8 = new QHBoxLayout(Parlourwidget);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        widget_left_main = new QWidget(Parlourwidget);
        widget_left_main->setObjectName(QString::fromUtf8("widget_left_main"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_left_main->sizePolicy().hasHeightForWidth());
        widget_left_main->setSizePolicy(sizePolicy);
        widget_left_main->setMaximumSize(QSize(300, 280));
        verticalLayout = new QVBoxLayout(widget_left_main);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(20, 20, 0, 20);
        widget_light_top = new QWidget(widget_left_main);
        widget_light_top->setObjectName(QString::fromUtf8("widget_light_top"));
        horizontalLayout = new QHBoxLayout(widget_light_top);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(15, -1, 15, -1);
        lab_light_main = new QLabel(widget_light_top);
        lab_light_main->setObjectName(QString::fromUtf8("lab_light_main"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        lab_light_main->setFont(font);
        lab_light_main->setStyleSheet(QString::fromUtf8("color: rgb(142, 227, 235);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(lab_light_main);

        label_light_main = new QLabel(widget_light_top);
        label_light_main->setObjectName(QString::fromUtf8("label_light_main"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_light_main->sizePolicy().hasHeightForWidth());
        label_light_main->setSizePolicy(sizePolicy1);
        label_light_main->setMinimumSize(QSize(60, 0));
        label_light_main->setMaximumSize(QSize(60, 16777215));
        label_light_main->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(label_light_main);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbn_light_main = new mySwitchButton(widget_light_top);
        pbn_light_main->setObjectName(QString::fromUtf8("pbn_light_main"));

        horizontalLayout->addWidget(pbn_light_main);


        verticalLayout->addWidget(widget_light_top);

        widget_light_mid = new QWidget(widget_left_main);
        widget_light_mid->setObjectName(QString::fromUtf8("widget_light_mid"));
        horizontalLayout_2 = new QHBoxLayout(widget_light_mid);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(15, -1, 15, -1);
        lab_light_top = new QLabel(widget_light_mid);
        lab_light_top->setObjectName(QString::fromUtf8("lab_light_top"));
        lab_light_top->setFont(font);
        lab_light_top->setStyleSheet(QString::fromUtf8("color: rgb(142, 227, 235);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_2->addWidget(lab_light_top);

        label_light_top = new QLabel(widget_light_mid);
        label_light_top->setObjectName(QString::fromUtf8("label_light_top"));
        label_light_top->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_2->addWidget(label_light_top);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pbn_light_top = new mySwitchButton(widget_light_mid);
        pbn_light_top->setObjectName(QString::fromUtf8("pbn_light_top"));

        horizontalLayout_2->addWidget(pbn_light_top);


        verticalLayout->addWidget(widget_light_mid);

        widget_light_bottom = new QWidget(widget_left_main);
        widget_light_bottom->setObjectName(QString::fromUtf8("widget_light_bottom"));
        horizontalLayout_3 = new QHBoxLayout(widget_light_bottom);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(15, -1, 15, -1);
        lab_light_help = new QLabel(widget_light_bottom);
        lab_light_help->setObjectName(QString::fromUtf8("lab_light_help"));
        lab_light_help->setFont(font);
        lab_light_help->setStyleSheet(QString::fromUtf8("color: rgb(142, 227, 235);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_3->addWidget(lab_light_help);

        label_light_help = new QLabel(widget_light_bottom);
        label_light_help->setObjectName(QString::fromUtf8("label_light_help"));
        label_light_help->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_3->addWidget(label_light_help);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pbn_light_help = new mySwitchButton(widget_light_bottom);
        pbn_light_help->setObjectName(QString::fromUtf8("pbn_light_help"));

        horizontalLayout_3->addWidget(pbn_light_help);


        verticalLayout->addWidget(widget_light_bottom);


        horizontalLayout_7->addWidget(widget_left_main);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        widget_right_main = new QWidget(Parlourwidget);
        widget_right_main->setObjectName(QString::fromUtf8("widget_right_main"));
        sizePolicy.setHeightForWidth(widget_right_main->sizePolicy().hasHeightForWidth());
        widget_right_main->setSizePolicy(sizePolicy);
        widget_right_main->setMaximumSize(QSize(380, 240));
        horizontalLayout_6 = new QHBoxLayout(widget_right_main);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_2->addItem(verticalSpacer_3);

        tbn_temp_add = new QToolButton(widget_right_main);
        tbn_temp_add->setObjectName(QString::fromUtf8("tbn_temp_add"));
        tbn_temp_add->setMinimumSize(QSize(60, 60));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        tbn_temp_add->setFont(font1);
        tbn_temp_add->setStyleSheet(QString::fromUtf8("color: rgb(142, 227, 235);\n"
"font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        tbn_temp_add->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbn_temp_add->setAutoRaise(true);

        verticalLayout_2->addWidget(tbn_temp_add);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_2->addItem(verticalSpacer);

        tbn_temp_sub = new QToolButton(widget_right_main);
        tbn_temp_sub->setObjectName(QString::fromUtf8("tbn_temp_sub"));
        tbn_temp_sub->setMinimumSize(QSize(60, 60));
        tbn_temp_sub->setFont(font1);
        tbn_temp_sub->setStyleSheet(QString::fromUtf8("color: rgb(142, 227, 235);\n"
"font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        tbn_temp_sub->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbn_temp_sub->setAutoRaise(true);

        verticalLayout_2->addWidget(tbn_temp_sub);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_2->addItem(verticalSpacer_4);


        horizontalLayout_6->addLayout(verticalLayout_2);

        widget_temp = new QWidget(widget_right_main);
        widget_temp->setObjectName(QString::fromUtf8("widget_temp"));
        gridLayout = new QGridLayout(widget_temp);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget_temp);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(9);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: rgb(142, 227, 235);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(widget_temp);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(142, 227, 235);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_cur_temp = new QLabel(widget_temp);
        label_cur_temp->setObjectName(QString::fromUtf8("label_cur_temp"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(26);
        label_cur_temp->setFont(font3);
        label_cur_temp->setStyleSheet(QString::fromUtf8("color: rgb(255, 158, 0);"));
        label_cur_temp->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_cur_temp);

        label_5 = new QLabel(widget_temp);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 158, 0);"));
        label_5->setScaledContents(true);
        label_5->setMargin(-1);

        horizontalLayout_4->addWidget(label_5);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        label_cur_hum = new QLabel(widget_temp);
        label_cur_hum->setObjectName(QString::fromUtf8("label_cur_hum"));
        label_cur_hum->setFont(font3);
        label_cur_hum->setStyleSheet(QString::fromUtf8("color: rgb(255, 158, 0);"));
        label_cur_hum->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_cur_hum, 1, 1, 1, 1);

        label_div = new QLabel(widget_temp);
        label_div->setObjectName(QString::fromUtf8("label_div"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_div->sizePolicy().hasHeightForWidth());
        label_div->setSizePolicy(sizePolicy2);
        label_div->setMinimumSize(QSize(140, 0));
        label_div->setMaximumSize(QSize(16777215, 3));
        label_div->setStyleSheet(QString::fromUtf8("background-color: rgb(7, 122, 229);"));
        label_div->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_div, 2, 0, 1, 2);

        label_2 = new QLabel(widget_temp);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font4.setPointSize(12);
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(142, 227, 235);"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label_4 = new QLabel(widget_temp);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(142, 227, 235);"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 3, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_set_temp = new QLabel(widget_temp);
        label_set_temp->setObjectName(QString::fromUtf8("label_set_temp"));
        label_set_temp->setFont(font3);
        label_set_temp->setStyleSheet(QString::fromUtf8("color: rgb(255, 158, 0);"));
        label_set_temp->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_set_temp);

        label_6 = new QLabel(widget_temp);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 158, 0);\n"
"font: 26pt \"\346\245\267\344\275\223\";"));
        label_6->setMargin(-2);

        horizontalLayout_5->addWidget(label_6);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        label_set_hum = new QLabel(widget_temp);
        label_set_hum->setObjectName(QString::fromUtf8("label_set_hum"));
        label_set_hum->setFont(font3);
        label_set_hum->setStyleSheet(QString::fromUtf8("color: rgb(255, 158, 0);"));
        label_set_hum->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_set_hum, 4, 1, 1, 1);


        horizontalLayout_6->addWidget(widget_temp);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_3->addItem(verticalSpacer_6);

        tbn_hum_add = new QToolButton(widget_right_main);
        tbn_hum_add->setObjectName(QString::fromUtf8("tbn_hum_add"));
        tbn_hum_add->setMinimumSize(QSize(60, 60));
        tbn_hum_add->setFont(font1);
        tbn_hum_add->setStyleSheet(QString::fromUtf8("color: rgb(142, 227, 235);\n"
"font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        tbn_hum_add->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbn_hum_add->setAutoRaise(true);

        verticalLayout_3->addWidget(tbn_hum_add);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tbn_hum_sub = new QToolButton(widget_right_main);
        tbn_hum_sub->setObjectName(QString::fromUtf8("tbn_hum_sub"));
        tbn_hum_sub->setMinimumSize(QSize(60, 60));
        tbn_hum_sub->setFont(font1);
        tbn_hum_sub->setStyleSheet(QString::fromUtf8("color: rgb(142, 227, 235);\n"
"font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        tbn_hum_sub->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbn_hum_sub->setAutoRaise(true);

        verticalLayout_3->addWidget(tbn_hum_sub);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_3->addItem(verticalSpacer_5);


        horizontalLayout_6->addLayout(verticalLayout_3);


        horizontalLayout_7->addWidget(widget_right_main);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        retranslateUi(Parlourwidget);

        QMetaObject::connectSlotsByName(Parlourwidget);
    } // setupUi

    void retranslateUi(QWidget *Parlourwidget)
    {
        Parlourwidget->setWindowTitle(QApplication::translate("Parlourwidget", "Form", 0, QApplication::UnicodeUTF8));
        lab_light_main->setText(QApplication::translate("Parlourwidget", "\344\270\273\347\201\257", 0, QApplication::UnicodeUTF8));
        label_light_main->setText(QString());
        pbn_light_main->setText(QString());
        lab_light_top->setText(QApplication::translate("Parlourwidget", "\351\241\266\347\201\257", 0, QApplication::UnicodeUTF8));
        label_light_top->setText(QString());
        pbn_light_top->setText(QString());
        lab_light_help->setText(QApplication::translate("Parlourwidget", "\350\276\205\347\201\257", 0, QApplication::UnicodeUTF8));
        label_light_help->setText(QString());
        pbn_light_help->setText(QString());
        tbn_temp_add->setText(QString());
        tbn_temp_sub->setText(QString());
        label->setText(QApplication::translate("Parlourwidget", "\345\275\223\345\211\215\346\270\251\345\272\246", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Parlourwidget", "\345\275\223\345\211\215\346\271\277\345\272\246", 0, QApplication::UnicodeUTF8));
        label_cur_temp->setText(QApplication::translate("Parlourwidget", "20", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Parlourwidget", "\342\204\203", 0, QApplication::UnicodeUTF8));
        label_cur_hum->setText(QApplication::translate("Parlourwidget", "40%", 0, QApplication::UnicodeUTF8));
        label_div->setText(QString());
        label_2->setText(QApplication::translate("Parlourwidget", "\351\242\204\350\256\276\346\270\251\345\272\246", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Parlourwidget", "\351\242\204\350\256\276\346\271\277\345\272\246", 0, QApplication::UnicodeUTF8));
        label_set_temp->setText(QApplication::translate("Parlourwidget", "18", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Parlourwidget", "\342\204\203", 0, QApplication::UnicodeUTF8));
        label_set_hum->setText(QApplication::translate("Parlourwidget", "60%", 0, QApplication::UnicodeUTF8));
        tbn_hum_add->setText(QString());
        tbn_hum_sub->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Parlourwidget: public Ui_Parlourwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARLOURWIDGET_H
