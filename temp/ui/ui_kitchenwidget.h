/********************************************************************************
** Form generated from reading UI file 'kitchenwidget.ui'
**
** Created: Tue Dec 6 15:22:02 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/
#ifndef UI_KITCHENWIDGET_H
#define UI_KITCHENWIDGET_H

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

class Ui_KitchenWidget
{
public:
    QHBoxLayout *horizontalLayout_6;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_light_top;
    QHBoxLayout *horizontalLayout;
    QLabel *lab_light_main;
    QLabel *label_light_main;
    QSpacerItem *horizontalSpacer;
    mySwitchButton *pbn_light_main;
    QLabel *label_div;
    QWidget *widget_right;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_temp;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_cur_smoke;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_set_smoke;
    QVBoxLayout *verticalLayout;
    QToolButton *tbn_smoke_sub;
    QToolButton *tbn_smoke_add;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *KitchenWidget)
    {
        if (KitchenWidget->objectName().isEmpty())
            KitchenWidget->setObjectName(QString::fromUtf8("KitchenWidget"));
        KitchenWidget->resize(604, 260);
        horizontalLayout_6 = new QHBoxLayout(KitchenWidget);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 0, 1, 1);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(18);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        widget_light_top = new QWidget(KitchenWidget);
        widget_light_top->setObjectName(QString::fromUtf8("widget_light_top"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_light_top->sizePolicy().hasHeightForWidth());
        widget_light_top->setSizePolicy(sizePolicy);
        widget_light_top->setMaximumSize(QSize(340, 200));
        horizontalLayout = new QHBoxLayout(widget_light_top);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 25, 25, 25);
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

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbn_light_main = new mySwitchButton(widget_light_top);
        pbn_light_main->setObjectName(QString::fromUtf8("pbn_light_main"));

        horizontalLayout->addWidget(pbn_light_main);
        horizontalLayout_5->addWidget(widget_light_top);

        label_div = new QLabel(KitchenWidget);
        label_div->setObjectName(QString::fromUtf8("label_div"));
        sizePolicy1.setHeightForWidth(label_div->sizePolicy().hasHeightForWidth());
        label_div->setSizePolicy(sizePolicy1);
        label_div->setMaximumSize(QSize(3, 16777215));
        label_div->setStyleSheet(QString::fromUtf8("background-color: rgb(7, 122, 229);"));

        horizontalLayout_5->addWidget(label_div);
        widget_right = new QWidget(KitchenWidget);
        widget_right->setObjectName(QString::fromUtf8("widget_right"));
        widget_right->setMaximumSize(QSize(16777215, 160));
        horizontalLayout_3 = new QHBoxLayout(widget_right);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        widget_temp = new QWidget(widget_right);
        widget_temp->setObjectName(QString::fromUtf8("widget_temp"));
        sizePolicy1.setHeightForWidth(widget_temp->sizePolicy().hasHeightForWidth());
        widget_temp->setSizePolicy(sizePolicy1);
        widget_temp->setMaximumSize(QSize(300, 220));
        gridLayout = new QGridLayout(widget_temp);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(widget_temp);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(142, 227, 235);"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_cur_smoke = new QLabel(widget_temp);
        label_cur_smoke->setObjectName(QString::fromUtf8("label_cur_smoke"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(26);
        label_cur_smoke->setFont(font2);
        label_cur_smoke->setStyleSheet(QString::fromUtf8("color: rgb(255, 158, 0);"));
        label_cur_smoke->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_cur_smoke, 1, 0, 1, 1);

        label = new QLabel(widget_temp);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setMinimumSize(QSize(3, 0));
        label->setMaximumSize(QSize(3, 16777215));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(7, 122, 229);"));

        gridLayout->addWidget(label, 0, 1, 2, 1);

        label_3 = new QLabel(widget_temp);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(142, 227, 235);"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label_set_smoke = new QLabel(widget_temp);
        label_set_smoke->setObjectName(QString::fromUtf8("label_set_smoke"));
        label_set_smoke->setFont(font2);
        label_set_smoke->setStyleSheet(QString::fromUtf8("color: rgb(255, 158, 0);"));
        label_set_smoke->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_set_smoke, 1, 2, 1, 1);


        horizontalLayout_4->addWidget(widget_temp);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tbn_smoke_sub = new QToolButton(widget_right);
        tbn_smoke_sub->setObjectName(QString::fromUtf8("tbn_smoke_sub"));
        sizePolicy.setHeightForWidth(tbn_smoke_sub->sizePolicy().hasHeightForWidth());
        tbn_smoke_sub->setSizePolicy(sizePolicy);
        tbn_smoke_sub->setMinimumSize(QSize(60, 60));
        tbn_smoke_sub->setStyleSheet(QString::fromUtf8("color: rgb(142, 227, 235);\n"
"font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        tbn_smoke_sub->setAutoRaise(true);

        verticalLayout->addWidget(tbn_smoke_sub);

        tbn_smoke_add = new QToolButton(widget_right);
        tbn_smoke_add->setObjectName(QString::fromUtf8("tbn_smoke_add"));
        sizePolicy.setHeightForWidth(tbn_smoke_add->sizePolicy().hasHeightForWidth());
        tbn_smoke_add->setSizePolicy(sizePolicy);
        tbn_smoke_add->setMinimumSize(QSize(60, 60));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        tbn_smoke_add->setFont(font3);
        tbn_smoke_add->setStyleSheet(QString::fromUtf8("color: rgb(142, 227, 235);\n"
"font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        tbn_smoke_add->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbn_smoke_add->setAutoRaise(true);
        verticalLayout->addWidget(tbn_smoke_add);


        horizontalLayout_4->addLayout(verticalLayout);
        horizontalLayout_3->addLayout(horizontalLayout_4);
        horizontalLayout_5->addWidget(widget_right);
        gridLayout_2->addLayout(horizontalLayout_5, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);
        gridLayout_2->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Maximum);
        gridLayout_2->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalLayout_6->addLayout(gridLayout_2);
        retranslateUi(KitchenWidget);

        QMetaObject::connectSlotsByName(KitchenWidget);
    } // setupUi

    void retranslateUi(QWidget *KitchenWidget)
    {
        KitchenWidget->setWindowTitle(QApplication::translate("KitchenWidget", "Form", 0, QApplication::UnicodeUTF8));
        lab_light_main->setText(QApplication::translate("KitchenWidget", "\344\270\273\347\201\257", 0, QApplication::UnicodeUTF8));
        label_light_main->setText(QString());
        pbn_light_main->setText(QString());
        label_div->setText(QString());
        label_2->setText(QApplication::translate("KitchenWidget", "\345\275\223\345\211\215\347\203\237\351\233\276\346\265\223\345\272\246", 0, QApplication::UnicodeUTF8));
        label_cur_smoke->setText(QApplication::translate("KitchenWidget", "9%", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_3->setText(QApplication::translate("KitchenWidget", "\351\242\204\350\256\276\347\203\237\351\233\276\346\265\223\345\272\246", 0, QApplication::UnicodeUTF8));
        label_set_smoke->setText(QApplication::translate("KitchenWidget", "12%", 0, QApplication::UnicodeUTF8));
        tbn_smoke_sub->setText(QString());
        tbn_smoke_add->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class KitchenWidget: public Ui_KitchenWidget {};
} // namespace Ui
QT_END_NAMESPACE
#endif // UI_KITCHENWIDGET_H
