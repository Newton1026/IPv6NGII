/********************************************************************************
** Form generated from reading UI file 'BedRoomWidget.ui'
**
** Created: Tue Dec 13 19:01:46 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEDROOMWIDGET_H
#define UI_BEDROOMWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "myswitchbutton.h"

QT_BEGIN_NAMESPACE

class Ui_BedRoomWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_left;
    QVBoxLayout *verticalLayout;
    QWidget *widget_light_mid;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lab_light_top;
    QLabel *label_light_top;
    QSpacerItem *horizontalSpacer_2;
    mySwitchButton *pbn_light_left;
    QWidget *widget_light_bottom;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lab_light_help;
    QLabel *label_light_help;
    QSpacerItem *horizontalSpacer_3;
    mySwitchButton *pbn_light_right;
    QLabel *label_dev;
    QWidget *widget_right;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_cur_temp;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *BedRoomWidget)
    {
        if (BedRoomWidget->objectName().isEmpty())
            BedRoomWidget->setObjectName(QString::fromUtf8("BedRoomWidget"));
        BedRoomWidget->resize(569, 254);
        verticalLayout_3 = new QVBoxLayout(BedRoomWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(20);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        widget_left = new QWidget(BedRoomWidget);
        widget_left->setObjectName(QString::fromUtf8("widget_left"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_left->sizePolicy().hasHeightForWidth());
        widget_left->setSizePolicy(sizePolicy);
        widget_left->setMaximumSize(QSize(16777215, 180));
        verticalLayout = new QVBoxLayout(widget_left);
#ifndef Q_OS_MAC
        verticalLayout->setSpacing(6);
#endif
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_light_mid = new QWidget(widget_left);
        widget_light_mid->setObjectName(QString::fromUtf8("widget_light_mid"));
        horizontalLayout_2 = new QHBoxLayout(widget_light_mid);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(15, -1, 15, -1);
        lab_light_top = new QLabel(widget_light_mid);
        lab_light_top->setObjectName(QString::fromUtf8("lab_light_top"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
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

        pbn_light_left = new mySwitchButton(widget_light_mid);
        pbn_light_left->setObjectName(QString::fromUtf8("pbn_light_left"));

        horizontalLayout_2->addWidget(pbn_light_left);


        verticalLayout->addWidget(widget_light_mid);

        widget_light_bottom = new QWidget(widget_left);
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

        pbn_light_right = new mySwitchButton(widget_light_bottom);
        pbn_light_right->setObjectName(QString::fromUtf8("pbn_light_right"));

        horizontalLayout_3->addWidget(pbn_light_right);


        verticalLayout->addWidget(widget_light_bottom);


        horizontalLayout_4->addWidget(widget_left);

        label_dev = new QLabel(BedRoomWidget);
        label_dev->setObjectName(QString::fromUtf8("label_dev"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_dev->sizePolicy().hasHeightForWidth());
        label_dev->setSizePolicy(sizePolicy1);
        label_dev->setMaximumSize(QSize(3, 16777215));
        label_dev->setStyleSheet(QString::fromUtf8("background-color: rgb(7, 122, 229);"));

        horizontalLayout_4->addWidget(label_dev);

        widget_right = new QWidget(BedRoomWidget);
        widget_right->setObjectName(QString::fromUtf8("widget_right"));
        sizePolicy.setHeightForWidth(widget_right->sizePolicy().hasHeightForWidth());
        widget_right->setSizePolicy(sizePolicy);
        widget_right->setMaximumSize(QSize(16777215, 180));
        horizontalLayout = new QHBoxLayout(widget_right);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget_right);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(142, 227, 235);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        label_cur_temp = new QLabel(widget_right);
        label_cur_temp->setObjectName(QString::fromUtf8("label_cur_temp"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(28);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_cur_temp->setFont(font1);
        label_cur_temp->setStyleSheet(QString::fromUtf8("color: rgb(255, 158, 0);\n"
"font: 28pt \"\346\245\267\344\275\223\";"));
        label_cur_temp->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_cur_temp);

        label_2 = new QLabel(widget_right);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 158, 0);\n"
"font: 28pt \"\346\245\267\344\275\223\";"));

        horizontalLayout->addWidget(label_2);


        horizontalLayout_4->addWidget(widget_right);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(BedRoomWidget);

        QMetaObject::connectSlotsByName(BedRoomWidget);
    } // setupUi

    void retranslateUi(QWidget *BedRoomWidget)
    {
        BedRoomWidget->setWindowTitle(QApplication::translate("BedRoomWidget", "Form", 0, QApplication::UnicodeUTF8));
        lab_light_top->setText(QApplication::translate("BedRoomWidget", "\345\267\246\345\272\212\345\244\264\347\201\257\357\274\232", 0, QApplication::UnicodeUTF8));
        label_light_top->setText(QString());
        pbn_light_left->setText(QString());
        lab_light_help->setText(QApplication::translate("BedRoomWidget", "\345\217\263\345\272\212\345\244\264\347\201\257\357\274\232", 0, QApplication::UnicodeUTF8));
        label_light_help->setText(QString());
        pbn_light_right->setText(QString());
        label_dev->setText(QString());
        label->setText(QApplication::translate("BedRoomWidget", "\345\215\247\345\256\244\346\270\251\345\272\246\357\274\232", 0, QApplication::UnicodeUTF8));
        label_cur_temp->setText(QApplication::translate("BedRoomWidget", "20", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("BedRoomWidget", "\342\204\203", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BedRoomWidget: public Ui_BedRoomWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEDROOMWIDGET_H
