/********************************************************************************
** Form generated from reading UI file 'systemsettingdialog.ui'
**
** Created: Tue Dec 13 15:03:48 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMSETTINGDIALOG_H
#define UI_SYSTEMSETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SystemSettingDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_Top;
    QHBoxLayout *horizontalLayout;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *tbnMenuClose;
    QWidget *widget_Mid;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QPushButton *pbnClosePort;
    QLabel *label_3;
    QLabel *label;
    QComboBox *cbx_PortName;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QComboBox *cbx_PortBaud;
    QSpacerItem *horizontalSpacer_5;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QLabel *label_9;
    QLineEdit *lineEdit;
    QLabel *label_6;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QLabel *label_13;
    QWidget *widget_set_bottom;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pbnOk;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *SystemSettingDialog)
    {
        if (SystemSettingDialog->objectName().isEmpty())
            SystemSettingDialog->setObjectName(QString::fromUtf8("SystemSettingDialog"));
        SystemSettingDialog->resize(352, 274);
        verticalLayout_3 = new QVBoxLayout(SystemSettingDialog);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_Top = new QWidget(SystemSettingDialog);
        widget_Top->setObjectName(QString::fromUtf8("widget_Top"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_Top->sizePolicy().hasHeightForWidth());
        widget_Top->setSizePolicy(sizePolicy);
        widget_Top->setMaximumSize(QSize(16777215, 30));
        horizontalLayout = new QHBoxLayout(widget_Top);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 0, 0, 10);
        label_title = new QLabel(widget_Top);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(11);
        label_title->setFont(font);
        label_title->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_title);

        horizontalSpacer_2 = new QSpacerItem(492, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        tbnMenuClose = new QToolButton(widget_Top);
        tbnMenuClose->setObjectName(QString::fromUtf8("tbnMenuClose"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tbnMenuClose->sizePolicy().hasHeightForWidth());
        tbnMenuClose->setSizePolicy(sizePolicy1);
        tbnMenuClose->setMinimumSize(QSize(35, 35));
        tbnMenuClose->setMaximumSize(QSize(35, 35));
        tbnMenuClose->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbnMenuClose->setAutoRaise(true);

        horizontalLayout->addWidget(tbnMenuClose);


        verticalLayout_2->addWidget(widget_Top);

        widget_Mid = new QWidget(SystemSettingDialog);
        widget_Mid->setObjectName(QString::fromUtf8("widget_Mid"));
        verticalLayout = new QVBoxLayout(widget_Mid);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(1, 0, 0, 0);
        tabWidget = new QTabWidget(widget_Mid);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout_3 = new QHBoxLayout(tab);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        groupBox->setFont(font1);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        pbnClosePort = new QPushButton(groupBox);
        pbnClosePort->setObjectName(QString::fromUtf8("pbnClosePort"));

        gridLayout_2->addWidget(pbnClosePort, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 2, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        cbx_PortName = new QComboBox(groupBox);
        cbx_PortName->setObjectName(QString::fromUtf8("cbx_PortName"));

        gridLayout_2->addWidget(cbx_PortName, 1, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 3, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        cbx_PortBaud = new QComboBox(groupBox);
        cbx_PortBaud->setObjectName(QString::fromUtf8("cbx_PortBaud"));

        gridLayout_2->addWidget(cbx_PortBaud, 2, 1, 1, 2);

        horizontalSpacer_5 = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 2, 3, 1, 1);


        horizontalLayout_3->addWidget(groupBox);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_4 = new QLineEdit(tab_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(9);
        lineEdit_4->setFont(font2);

        gridLayout->addWidget(lineEdit_4, 2, 1, 1, 1);

        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font2);

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        lineEdit_3 = new QLineEdit(tab_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        sizePolicy2.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy2);
        lineEdit_3->setFont(font2);

        gridLayout->addWidget(lineEdit_3, 1, 1, 1, 1);

        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font2);

        gridLayout->addWidget(label_9, 3, 0, 1, 1);

        lineEdit = new QLineEdit(tab_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        sizePolicy2.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy2);
        lineEdit->setFont(font2);

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font2);

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        lineEdit_2 = new QLineEdit(tab_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        sizePolicy2.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy2);
        lineEdit_2->setFont(font2);

        gridLayout->addWidget(lineEdit_2, 3, 1, 1, 1);

        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font2);

        gridLayout->addWidget(label_13, 3, 2, 1, 1);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);


        verticalLayout_2->addWidget(widget_Mid);

        widget_set_bottom = new QWidget(SystemSettingDialog);
        widget_set_bottom->setObjectName(QString::fromUtf8("widget_set_bottom"));
        horizontalLayout_2 = new QHBoxLayout(widget_set_bottom);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pbnOk = new QPushButton(widget_set_bottom);
        pbnOk->setObjectName(QString::fromUtf8("pbnOk"));
        pbnOk->setFont(font1);

        horizontalLayout_2->addWidget(pbnOk);

        horizontalSpacer_4 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addWidget(widget_set_bottom);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(SystemSettingDialog);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SystemSettingDialog);
    } // setupUi

    void retranslateUi(QDialog *SystemSettingDialog)
    {
        SystemSettingDialog->setWindowTitle(QApplication::translate("SystemSettingDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label_title->setText(QApplication::translate("SystemSettingDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
        tbnMenuClose->setText(QString());
        groupBox->setTitle(QApplication::translate("SystemSettingDialog", "\344\270\262\345\217\243\345\217\267\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SystemSettingDialog", "\345\205\263\351\227\255\344\270\262\345\217\243", 0, QApplication::UnicodeUTF8));
        pbnClosePort->setText(QApplication::translate("SystemSettingDialog", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SystemSettingDialog", "(\350\256\276\347\275\256\344\270\262\345\217\243\344\271\213\345\211\215\345\205\210\345\205\263\351\227\255\344\270\262\345\217\243)", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SystemSettingDialog", "\344\270\262\345\217\243\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SystemSettingDialog", "\346\263\242\347\211\271\347\216\207\357\274\232", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SystemSettingDialog", "\350\275\257\344\273\266\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("SystemSettingDialog", "\351\242\204\350\256\276\346\271\277\345\272\246\345\200\274\357\274\232", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("SystemSettingDialog", "\346\225\260\346\215\256\344\277\235\345\255\230\346\227\266\351\227\264(\347\247\222):", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("SystemSettingDialog", "\351\242\204\350\256\276\346\270\251\345\272\246\345\200\274\357\274\232", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("SystemSettingDialog", "\351\242\204\350\256\276\347\203\237\351\233\276\345\200\274\357\274\232", 0, QApplication::UnicodeUTF8));
        label_13->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SystemSettingDialog", "\347\263\273\347\273\237\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        pbnOk->setText(QApplication::translate("SystemSettingDialog", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SystemSettingDialog: public Ui_SystemSettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMSETTINGDIALOG_H
