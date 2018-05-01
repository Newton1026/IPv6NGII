/********************************************************************************
** Form generated from reading UI file 'statisticwidget.ui'
**
** Created: Tue Dec 6 15:22:02 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICWIDGET_H
#define UI_STATISTICWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_StatisticWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QCustomPlot *plot_tempture;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QCustomPlot *plot_humidity;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_5;
    QCustomPlot *plot_smoke;
    QGroupBox *gbox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label;
    QComboBox *comboBox_view_data;
    QSpacerItem *horizontalSpacer;
    QCheckBox *ckMove;
    QCheckBox *ckBackground;
    QCheckBox *ckText;

    void setupUi(QWidget *StatisticWidget)
    {
        if (StatisticWidget->objectName().isEmpty())
            StatisticWidget->setObjectName(QString::fromUtf8("StatisticWidget"));
        StatisticWidget->resize(718, 395);
        verticalLayout_2 = new QVBoxLayout(StatisticWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 3, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(StatisticWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        plot_tempture = new QCustomPlot(tab);
        plot_tempture->setObjectName(QString::fromUtf8("plot_tempture"));

        verticalLayout_3->addWidget(plot_tempture);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        plot_humidity = new QCustomPlot(tab_2);
        plot_humidity->setObjectName(QString::fromUtf8("plot_humidity"));

        verticalLayout_4->addWidget(plot_humidity);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_5 = new QVBoxLayout(tab_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        plot_smoke = new QCustomPlot(tab_3);
        plot_smoke->setObjectName(QString::fromUtf8("plot_smoke"));

        verticalLayout_5->addWidget(plot_smoke);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);

        gbox = new QGroupBox(StatisticWidget);
        gbox->setObjectName(QString::fromUtf8("gbox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gbox->sizePolicy().hasHeightForWidth());
        gbox->setSizePolicy(sizePolicy);
        gbox->setMinimumSize(QSize(0, 35));
        horizontalLayout = new QHBoxLayout(gbox);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_5 = new QSpacerItem(30, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        label = new QLabel(gbox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox_view_data = new QComboBox(gbox);
        comboBox_view_data->setObjectName(QString::fromUtf8("comboBox_view_data"));

        horizontalLayout->addWidget(comboBox_view_data);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ckMove = new QCheckBox(gbox);
        ckMove->setObjectName(QString::fromUtf8("ckMove"));
        ckMove->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(ckMove);

        ckBackground = new QCheckBox(gbox);
        ckBackground->setObjectName(QString::fromUtf8("ckBackground"));
        ckBackground->setFocusPolicy(Qt::NoFocus);
        ckBackground->setChecked(false);

        horizontalLayout->addWidget(ckBackground);

        ckText = new QCheckBox(gbox);
        ckText->setObjectName(QString::fromUtf8("ckText"));
        ckText->setFocusPolicy(Qt::NoFocus);
        ckText->setChecked(false);

        horizontalLayout->addWidget(ckText);


        verticalLayout->addWidget(gbox);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(StatisticWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StatisticWidget);
    } // setupUi

    void retranslateUi(QWidget *StatisticWidget)
    {
        StatisticWidget->setWindowTitle(QApplication::translate("StatisticWidget", "Form", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("StatisticWidget", "\346\270\251\345\272\246\347\273\237\350\256\241", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("StatisticWidget", "\346\271\277\345\272\246\347\273\237\350\256\241", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("StatisticWidget", "\347\203\237\351\233\276\346\265\223\345\272\246\347\273\237\350\256\241", 0, QApplication::UnicodeUTF8));
        gbox->setTitle(QString());
        label->setText(QApplication::translate("StatisticWidget", "\346\234\200\350\277\221\357\274\232", 0, QApplication::UnicodeUTF8));
        comboBox_view_data->clear();
        comboBox_view_data->insertItems(0, QStringList()
         << QApplication::translate("StatisticWidget", "\345\275\223\345\244\251", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("StatisticWidget", "\344\270\200\345\221\250", 0, QApplication::UnicodeUTF8)
        );
        ckMove->setText(QApplication::translate("StatisticWidget", "\347\247\273\345\212\250\347\274\251\346\224\276", 0, QApplication::UnicodeUTF8));
        ckBackground->setText(QApplication::translate("StatisticWidget", "\351\230\264\345\275\261\350\203\214\346\231\257", 0, QApplication::UnicodeUTF8));
        ckText->setText(QApplication::translate("StatisticWidget", "\345\233\276\344\276\213\350\257\264\346\230\216", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StatisticWidget: public Ui_StatisticWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICWIDGET_H
