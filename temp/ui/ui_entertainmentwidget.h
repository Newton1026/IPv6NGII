/********************************************************************************
** Form generated from reading UI file 'entertainmentwidget.ui'
**
** Created: Tue Dec 6 15:22:02 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTERTAINMENTWIDGET_H
#define UI_ENTERTAINMENTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EntertainmentWidget
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *EntertainmentWidget)
    {
        if (EntertainmentWidget->objectName().isEmpty())
            EntertainmentWidget->setObjectName(QString::fromUtf8("EntertainmentWidget"));
        EntertainmentWidget->resize(564, 376);
        pushButton = new QPushButton(EntertainmentWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 200, 75, 23));

        retranslateUi(EntertainmentWidget);

        QMetaObject::connectSlotsByName(EntertainmentWidget);
    } // setupUi

    void retranslateUi(QWidget *EntertainmentWidget)
    {
        EntertainmentWidget->setWindowTitle(QApplication::translate("EntertainmentWidget", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("EntertainmentWidget", "\351\237\263\344\271\220", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EntertainmentWidget: public Ui_EntertainmentWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERTAINMENTWIDGET_H
