/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Tue Dec 13 11:25:30 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_Top;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_15;
    QToolButton *tbnSetting;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *tbnHome;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QWidget *widget_Mid;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *tbnParlor;
    QToolButton *tbnBedRoom;
    QToolButton *tbnKitchen;
    QToolButton *tbnSafety;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QWidget *widget_data;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_hour;
    QLabel *label;
    QLabel *label_min;
    QLabel *label_sec;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_data;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_week;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_Bottom_Div;
    QWidget *widget_Bottom;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QToolButton *tbnControl;
    QToolButton *tbnCurtain;
    QToolButton *tbnMusic;
    QToolButton *tbnModel;
    QToolButton *tbnNight;
    QToolButton *tbnStatistic;
    QToolButton *tbnRelaxation;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 480);
        Widget->setMinimumSize(QSize(800, 480));
        Widget->setMaximumSize(QSize(800, 480));
        verticalLayout_3 = new QVBoxLayout(Widget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_Top = new QWidget(Widget);
        widget_Top->setObjectName(QString::fromUtf8("widget_Top"));
        widget_Top->setMinimumSize(QSize(0, 70));
        horizontalLayout = new QHBoxLayout(widget_Top);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(145, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_16);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_15);

        tbnSetting = new QToolButton(widget_Top);
        tbnSetting->setObjectName(QString::fromUtf8("tbnSetting"));
        tbnSetting->setMinimumSize(QSize(35, 35));
        tbnSetting->setCursor(QCursor(Qt::OpenHandCursor));
        tbnSetting->setStyleSheet(QString::fromUtf8(""));
        tbnSetting->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbnSetting->setAutoRaise(true);

        horizontalLayout->addWidget(tbnSetting);

        horizontalSpacer_2 = new QSpacerItem(40, 0, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_2 = new QLabel(widget_Top);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Mono"));
        font.setPointSize(28);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        tbnHome = new QToolButton(widget_Top);
        tbnHome->setObjectName(QString::fromUtf8("tbnHome"));
        tbnHome->setMinimumSize(QSize(35, 35));
        tbnHome->setCursor(QCursor(Qt::OpenHandCursor));
        tbnHome->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbnHome->setAutoRaise(true);

        horizontalLayout->addWidget(tbnHome);

        horizontalSpacer_4 = new QSpacerItem(140, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pushButton = new QPushButton(widget_Top);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setCursor(QCursor(Qt::ArrowCursor));
        pushButton->setFocusPolicy(Qt::ClickFocus);
        pushButton->setDefault(false);
        pushButton->setFlat(true);

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addWidget(widget_Top);

        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_Mid = new QWidget(page);
        widget_Mid->setObjectName(QString::fromUtf8("widget_Mid"));
        horizontalLayout_2 = new QHBoxLayout(widget_Mid);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tbnParlor = new QToolButton(widget_Mid);
        tbnParlor->setObjectName(QString::fromUtf8("tbnParlor"));
        tbnParlor->setMinimumSize(QSize(100, 80));
        tbnParlor->setCursor(QCursor(Qt::OpenHandCursor));
        tbnParlor->setStyleSheet(QString::fromUtf8(""));
        tbnParlor->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbnParlor->setAutoRaise(false);

        horizontalLayout_2->addWidget(tbnParlor);

        tbnBedRoom = new QToolButton(widget_Mid);
        tbnBedRoom->setObjectName(QString::fromUtf8("tbnBedRoom"));
        tbnBedRoom->setMinimumSize(QSize(100, 80));
        tbnBedRoom->setCursor(QCursor(Qt::OpenHandCursor));
        tbnBedRoom->setStyleSheet(QString::fromUtf8(""));
        tbnBedRoom->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbnBedRoom->setAutoRaise(false);

        horizontalLayout_2->addWidget(tbnBedRoom);

        tbnKitchen = new QToolButton(widget_Mid);
        tbnKitchen->setObjectName(QString::fromUtf8("tbnKitchen"));
        tbnKitchen->setMinimumSize(QSize(100, 80));
        tbnKitchen->setCursor(QCursor(Qt::OpenHandCursor));
        tbnKitchen->setStyleSheet(QString::fromUtf8(""));
        tbnKitchen->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbnKitchen->setAutoRaise(false);

        horizontalLayout_2->addWidget(tbnKitchen);

        tbnSafety = new QToolButton(widget_Mid);
        tbnSafety->setObjectName(QString::fromUtf8("tbnSafety"));
        tbnSafety->setMinimumSize(QSize(100, 80));
        tbnSafety->setCursor(QCursor(Qt::OpenHandCursor));
        tbnSafety->setStyleSheet(QString::fromUtf8(""));
        tbnSafety->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbnSafety->setAutoRaise(false);

        horizontalLayout_2->addWidget(tbnSafety);


        verticalLayout->addWidget(widget_Mid);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_data = new QWidget(page_2);
        widget_data->setObjectName(QString::fromUtf8("widget_data"));
        widget_data->setMinimumSize(QSize(420, 200));
        verticalLayout_4 = new QVBoxLayout(widget_data);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(10);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 20, -1, -1);
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_hour = new QLabel(widget_data);
        label_hour->setObjectName(QString::fromUtf8("label_hour"));
        label_hour->setMinimumSize(QSize(80, 0));
        label_hour->setStyleSheet(QString::fromUtf8("font: 75 50pt \"\351\273\221\344\275\223\";\n"
""));
        label_hour->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_hour);

        label = new QLabel(widget_data);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 75 50pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(label);

        label_min = new QLabel(widget_data);
        label_min->setObjectName(QString::fromUtf8("label_min"));
        label_min->setMinimumSize(QSize(80, 0));
        label_min->setStyleSheet(QString::fromUtf8("font: 75 50pt \"\351\273\221\344\275\223\";"));
        label_min->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_min);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        label_sec = new QLabel(widget_data);
        label_sec->setObjectName(QString::fromUtf8("label_sec"));
        label_sec->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_sec->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        horizontalLayout_6->addWidget(label_sec);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, -1, 20);
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_data = new QLabel(widget_data);
        label_data->setObjectName(QString::fromUtf8("label_data"));
        label_data->setStyleSheet(QString::fromUtf8("font: 75 22pt \"\346\245\267\344\275\223\";"));
        label_data->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_data);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        label_week = new QLabel(widget_data);
        label_week->setObjectName(QString::fromUtf8("label_week"));
        label_week->setStyleSheet(QString::fromUtf8("font: 75 22pt \"\346\245\267\344\275\223\";"));
        label_week->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_week);


        horizontalLayout_7->addLayout(horizontalLayout_4);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);


        verticalLayout_4->addLayout(horizontalLayout_7);


        gridLayout->addWidget(widget_data, 3, 1, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(140, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_14, 3, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_13, 3, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(stackedWidget);

        label_Bottom_Div = new QLabel(Widget);
        label_Bottom_Div->setObjectName(QString::fromUtf8("label_Bottom_Div"));
        label_Bottom_Div->setMinimumSize(QSize(0, 0));
        label_Bottom_Div->setMaximumSize(QSize(16777215, 3));

        verticalLayout_2->addWidget(label_Bottom_Div);

        widget_Bottom = new QWidget(Widget);
        widget_Bottom->setObjectName(QString::fromUtf8("widget_Bottom"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_Bottom->sizePolicy().hasHeightForWidth());
        widget_Bottom->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(widget_Bottom);
        horizontalLayout_3->setSpacing(13);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 10, 0, 6);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        tbnControl = new QToolButton(widget_Bottom);
        tbnControl->setObjectName(QString::fromUtf8("tbnControl"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tbnControl->sizePolicy().hasHeightForWidth());
        tbnControl->setSizePolicy(sizePolicy1);
        tbnControl->setMinimumSize(QSize(79, 50));
        tbnControl->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_3->addWidget(tbnControl);

        tbnCurtain = new QToolButton(widget_Bottom);
        tbnCurtain->setObjectName(QString::fromUtf8("tbnCurtain"));
        sizePolicy1.setHeightForWidth(tbnCurtain->sizePolicy().hasHeightForWidth());
        tbnCurtain->setSizePolicy(sizePolicy1);
        tbnCurtain->setMinimumSize(QSize(50, 50));
        tbnCurtain->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_3->addWidget(tbnCurtain);

        tbnMusic = new QToolButton(widget_Bottom);
        tbnMusic->setObjectName(QString::fromUtf8("tbnMusic"));
        sizePolicy1.setHeightForWidth(tbnMusic->sizePolicy().hasHeightForWidth());
        tbnMusic->setSizePolicy(sizePolicy1);
        tbnMusic->setMinimumSize(QSize(50, 50));
        tbnMusic->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_3->addWidget(tbnMusic);

        tbnModel = new QToolButton(widget_Bottom);
        tbnModel->setObjectName(QString::fromUtf8("tbnModel"));
        sizePolicy1.setHeightForWidth(tbnModel->sizePolicy().hasHeightForWidth());
        tbnModel->setSizePolicy(sizePolicy1);
        tbnModel->setMinimumSize(QSize(50, 50));
        tbnModel->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_3->addWidget(tbnModel);

        tbnNight = new QToolButton(widget_Bottom);
        tbnNight->setObjectName(QString::fromUtf8("tbnNight"));
        sizePolicy1.setHeightForWidth(tbnNight->sizePolicy().hasHeightForWidth());
        tbnNight->setSizePolicy(sizePolicy1);
        tbnNight->setMinimumSize(QSize(50, 50));
        tbnNight->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_3->addWidget(tbnNight);

        tbnStatistic = new QToolButton(widget_Bottom);
        tbnStatistic->setObjectName(QString::fromUtf8("tbnStatistic"));
        sizePolicy1.setHeightForWidth(tbnStatistic->sizePolicy().hasHeightForWidth());
        tbnStatistic->setSizePolicy(sizePolicy1);
        tbnStatistic->setMinimumSize(QSize(50, 50));
        tbnStatistic->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_3->addWidget(tbnStatistic);

        tbnRelaxation = new QToolButton(widget_Bottom);
        tbnRelaxation->setObjectName(QString::fromUtf8("tbnRelaxation"));
        sizePolicy1.setHeightForWidth(tbnRelaxation->sizePolicy().hasHeightForWidth());
        tbnRelaxation->setSizePolicy(sizePolicy1);
        tbnRelaxation->setMinimumSize(QSize(50, 50));
        tbnRelaxation->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_3->addWidget(tbnRelaxation);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_2->addWidget(widget_Bottom);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        tbnSetting->setText(QApplication::translate("Widget", "\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "IPv6\346\231\272\350\203\275\347\275\221\345\205\263", 0, QApplication::UnicodeUTF8));
        tbnHome->setText(QApplication::translate("Widget", "\351\246\226\351\241\265", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Widget", "\351\200\200\345\207\272\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        tbnParlor->setText(QApplication::translate("Widget", "1", 0, QApplication::UnicodeUTF8));
        tbnBedRoom->setText(QApplication::translate("Widget", "2", 0, QApplication::UnicodeUTF8));
        tbnKitchen->setText(QApplication::translate("Widget", "3", 0, QApplication::UnicodeUTF8));
        tbnSafety->setText(QApplication::translate("Widget", "4", 0, QApplication::UnicodeUTF8));
        label_hour->setText(QApplication::translate("Widget", "17", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", ":", 0, QApplication::UnicodeUTF8));
        label_min->setText(QApplication::translate("Widget", "56", 0, QApplication::UnicodeUTF8));
        label_sec->setText(QApplication::translate("Widget", "43", 0, QApplication::UnicodeUTF8));
        label_data->setText(QApplication::translate("Widget", "2016\345\271\2641\346\234\2107\346\227\245", 0, QApplication::UnicodeUTF8));
        label_week->setText(QApplication::translate("Widget", "\346\230\237\346\234\237\345\233\233", 0, QApplication::UnicodeUTF8));
        label_Bottom_Div->setText(QString());
        tbnControl->setText(QApplication::translate("Widget", "...", 0, QApplication::UnicodeUTF8));
        tbnCurtain->setText(QApplication::translate("Widget", "PushButton", 0, QApplication::UnicodeUTF8));
        tbnMusic->setText(QApplication::translate("Widget", "PushButton", 0, QApplication::UnicodeUTF8));
        tbnModel->setText(QApplication::translate("Widget", "PushButton", 0, QApplication::UnicodeUTF8));
        tbnNight->setText(QApplication::translate("Widget", "PushButton", 0, QApplication::UnicodeUTF8));
        tbnStatistic->setText(QApplication::translate("Widget", "...", 0, QApplication::UnicodeUTF8));
        tbnRelaxation->setText(QApplication::translate("Widget", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
