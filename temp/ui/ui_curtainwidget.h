/********************************************************************************
** Form generated from reading UI file 'curtainwidget.ui'
**
** Created: Tue Dec 6 15:22:02 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/
#ifndef UI_CURTAINWIDGET_H
#define UI_CURTAINWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CurtainWidget
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_curtain_open;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pbnOpenCurtain;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_curtain_stop;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pbnStopCurtain;
    QSpacerItem *horizontalSpacer_10;
    QWidget *widget_curtain_close;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *pbnCloseCurtain;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *CurtainWidget)
    {
        if (CurtainWidget->objectName().isEmpty())
            CurtainWidget->setObjectName(QString::fromUtf8("CurtainWidget"));
        CurtainWidget->resize(595, 369);
        verticalLayout_5 = new QVBoxLayout(CurtainWidget);
        verticalLayout_5->setSpacing(8);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(CurtainWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\346\245\267\344\275\223\";"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(20);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        widget_curtain_open = new QWidget(CurtainWidget);
        widget_curtain_open->setObjectName(QString::fromUtf8("widget_curtain_open"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_curtain_open->sizePolicy().hasHeightForWidth());
        widget_curtain_open->setSizePolicy(sizePolicy);
        widget_curtain_open->setMinimumSize(QSize(100, 120));
        widget_curtain_open->setMaximumSize(QSize(120, 16777215));
        verticalLayout_3 = new QVBoxLayout(widget_curtain_open);
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(20, 10, 20, 10);
        label_2 = new QLabel(widget_curtain_open);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/curtain/curtain_open.png);"));

        verticalLayout_3->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pbnOpenCurtain = new QPushButton(widget_curtain_open);
        pbnOpenCurtain->setObjectName(QString::fromUtf8("pbnOpenCurtain"));
        pbnOpenCurtain->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_2->addWidget(pbnOpenCurtain);

        horizontalSpacer_4 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_3->addWidget(widget_curtain_open);

        widget_curtain_stop = new QWidget(CurtainWidget);
        widget_curtain_stop->setObjectName(QString::fromUtf8("widget_curtain_stop"));
        sizePolicy.setHeightForWidth(widget_curtain_stop->sizePolicy().hasHeightForWidth());
        widget_curtain_stop->setSizePolicy(sizePolicy);
        widget_curtain_stop->setMinimumSize(QSize(100, 120));
        widget_curtain_stop->setMaximumSize(QSize(120, 16777215));
        verticalLayout = new QVBoxLayout(widget_curtain_stop);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(20, 10, 20, 10);
        label_3 = new QLabel(widget_curtain_stop);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/images/curtain/curtain_stop.png);"));

        verticalLayout->addWidget(label_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        pbnStopCurtain = new QPushButton(widget_curtain_stop);
        pbnStopCurtain->setObjectName(QString::fromUtf8("pbnStopCurtain"));
        pbnStopCurtain->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_5->addWidget(pbnStopCurtain);

        horizontalSpacer_10 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout_3->addWidget(widget_curtain_stop);

        widget_curtain_close = new QWidget(CurtainWidget);
        widget_curtain_close->setObjectName(QString::fromUtf8("widget_curtain_close"));
        sizePolicy.setHeightForWidth(widget_curtain_close->sizePolicy().hasHeightForWidth());
        widget_curtain_close->setSizePolicy(sizePolicy);
        widget_curtain_close->setMinimumSize(QSize(100, 120));
        widget_curtain_close->setMaximumSize(QSize(120, 16777215));
        verticalLayout_2 = new QVBoxLayout(widget_curtain_close);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, 10, 20, 10);
        label_4 = new QLabel(widget_curtain_close);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(56, 58));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/images/curtain/curtain_close.png);"));

        verticalLayout_2->addWidget(label_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_13 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);

        pbnCloseCurtain = new QPushButton(widget_curtain_close);
        pbnCloseCurtain->setObjectName(QString::fromUtf8("pbnCloseCurtain"));
        pbnCloseCurtain->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_7->addWidget(pbnCloseCurtain);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_14);


        verticalLayout_2->addLayout(horizontalLayout_7);


        horizontalLayout_3->addWidget(widget_curtain_close);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_4->addItem(verticalSpacer_2);


        verticalLayout_5->addLayout(verticalLayout_4);
        retranslateUi(CurtainWidget);

        QMetaObject::connectSlotsByName(CurtainWidget);
    } // setupUi

    void retranslateUi(QWidget *CurtainWidget)
    {
        CurtainWidget->setWindowTitle(QApplication::translate("CurtainWidget", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CurtainWidget", "\347\252\227\345\270\230", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        pbnOpenCurtain->setText(QApplication::translate("CurtainWidget", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        pbnStopCurtain->setText(QApplication::translate("CurtainWidget", "\345\201\234\346\255\242", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        pbnCloseCurtain->setText(QApplication::translate("CurtainWidget", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};
namespace Ui {
    class CurtainWidget: public Ui_CurtainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURTAINWIDGET_H
