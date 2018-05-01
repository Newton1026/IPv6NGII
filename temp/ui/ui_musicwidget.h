/********************************************************************************
** Form generated from reading UI file 'musicwidget.ui'
**
** Created: Tue Dec 13 19:02:55 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICWIDGET_H
#define UI_MUSICWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_music_list;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget_music;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_music_control;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_music_picture;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QToolButton *toolButton;
    QToolButton *toolButton_3;
    QToolButton *toolButton_5;
    QToolButton *toolButton_2;
    QToolButton *toolButton_7;
    QToolButton *toolButton_4;
    QToolButton *toolButton_6;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *MusicWidget)
    {
        if (MusicWidget->objectName().isEmpty())
            MusicWidget->setObjectName(QString::fromUtf8("MusicWidget"));
        MusicWidget->resize(573, 351);
        verticalLayout_3 = new QVBoxLayout(MusicWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(60, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        widget_music_list = new QWidget(MusicWidget);
        widget_music_list->setObjectName(QString::fromUtf8("widget_music_list"));
        widget_music_list->setMaximumSize(QSize(140, 16777215));
        verticalLayout = new QVBoxLayout(widget_music_list);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget_music = new QListWidget(widget_music_list);
        new QListWidgetItem(listWidget_music);
        listWidget_music->setObjectName(QString::fromUtf8("listWidget_music"));

        verticalLayout->addWidget(listWidget_music);


        horizontalLayout_2->addWidget(widget_music_list);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        widget_music_control = new QWidget(MusicWidget);
        widget_music_control->setObjectName(QString::fromUtf8("widget_music_control"));
        verticalLayout_2 = new QVBoxLayout(widget_music_control);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_music_picture = new QLabel(widget_music_control);
        label_music_picture->setObjectName(QString::fromUtf8("label_music_picture"));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label_music_picture->setFont(font);

        horizontalLayout->addWidget(label_music_picture);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        toolButton = new QToolButton(widget_music_control);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        toolButton->setFont(font1);

        gridLayout->addWidget(toolButton, 0, 0, 1, 1);

        toolButton_3 = new QToolButton(widget_music_control);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        toolButton_3->setFont(font1);

        gridLayout->addWidget(toolButton_3, 0, 2, 1, 1);

        toolButton_5 = new QToolButton(widget_music_control);
        toolButton_5->setObjectName(QString::fromUtf8("toolButton_5"));
        toolButton_5->setFont(font1);

        gridLayout->addWidget(toolButton_5, 1, 0, 1, 1);

        toolButton_2 = new QToolButton(widget_music_control);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        toolButton_2->setFont(font2);

        gridLayout->addWidget(toolButton_2, 1, 1, 1, 1);

        toolButton_7 = new QToolButton(widget_music_control);
        toolButton_7->setObjectName(QString::fromUtf8("toolButton_7"));
        toolButton_7->setFont(font1);

        gridLayout->addWidget(toolButton_7, 1, 2, 1, 1);

        toolButton_4 = new QToolButton(widget_music_control);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        toolButton_4->setFont(font1);

        gridLayout->addWidget(toolButton_4, 2, 0, 1, 1);

        toolButton_6 = new QToolButton(widget_music_control);
        toolButton_6->setObjectName(QString::fromUtf8("toolButton_6"));
        toolButton_6->setFont(font1);

        gridLayout->addWidget(toolButton_6, 2, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        horizontalLayout_2->addWidget(widget_music_control);

        horizontalSpacer_4 = new QSpacerItem(60, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(MusicWidget);

        QMetaObject::connectSlotsByName(MusicWidget);
    } // setupUi

    void retranslateUi(QWidget *MusicWidget)
    {
        MusicWidget->setWindowTitle(QApplication::translate("MusicWidget", "Form", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listWidget_music->isSortingEnabled();
        listWidget_music->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_music->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MusicWidget", "IPv6", 0, QApplication::UnicodeUTF8));
        listWidget_music->setSortingEnabled(__sortingEnabled);

        label_music_picture->setText(QString());
        toolButton->setText(QApplication::translate("MusicWidget", "TCP", 0, QApplication::UnicodeUTF8));
        toolButton_3->setText(QApplication::translate("MusicWidget", "UDP", 0, QApplication::UnicodeUTF8));
        toolButton_5->setText(QApplication::translate("MusicWidget", "Ping", 0, QApplication::UnicodeUTF8));
        toolButton_2->setText(QApplication::translate("MusicWidget", "\350\277\236\346\216\245", 0, QApplication::UnicodeUTF8));
        toolButton_7->setText(QApplication::translate("MusicWidget", "Route", 0, QApplication::UnicodeUTF8));
        toolButton_4->setText(QApplication::translate("MusicWidget", "6LoWPAN", 0, QApplication::UnicodeUTF8));
        toolButton_6->setText(QApplication::translate("MusicWidget", "Bluetooth", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MusicWidget: public Ui_MusicWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICWIDGET_H
