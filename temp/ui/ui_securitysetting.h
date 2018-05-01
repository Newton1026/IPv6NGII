/********************************************************************************
** Form generated from reading UI file 'securitysetting.ui'
**
** Created: Tue Dec 6 15:22:02 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECURITYSETTING_H
#define UI_SECURITYSETTING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecuritySetting
{
public:
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_video1;
    QLabel *label_video2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_video3;
    QLabel *label_video4;

    void setupUi(QWidget *SecuritySetting)
    {
        if (SecuritySetting->objectName().isEmpty())
            SecuritySetting->setObjectName(QString::fromUtf8("SecuritySetting"));
        SecuritySetting->resize(505, 369);
        horizontalLayout_3 = new QHBoxLayout(SecuritySetting);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox = new QGroupBox(SecuritySetting);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_video1 = new QLabel(groupBox);
        label_video1->setObjectName(QString::fromUtf8("label_video1"));
        label_video1->setFocusPolicy(Qt::StrongFocus);
        label_video1->setFrameShape(QFrame::Panel);
        label_video1->setFrameShadow(QFrame::Plain);
        label_video1->setLineWidth(1);
        label_video1->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_video1);

        label_video2 = new QLabel(groupBox);
        label_video2->setObjectName(QString::fromUtf8("label_video2"));
        label_video2->setFrameShape(QFrame::Panel);
        label_video2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_video2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_video3 = new QLabel(groupBox);
        label_video3->setObjectName(QString::fromUtf8("label_video3"));
        label_video3->setFrameShape(QFrame::Panel);
        label_video3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_video3);

        label_video4 = new QLabel(groupBox);
        label_video4->setObjectName(QString::fromUtf8("label_video4"));
        label_video4->setFrameShape(QFrame::Panel);
        label_video4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_video4);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addWidget(groupBox);


        retranslateUi(SecuritySetting);

        QMetaObject::connectSlotsByName(SecuritySetting);
    } // setupUi

    void retranslateUi(QWidget *SecuritySetting)
    {
        SecuritySetting->setWindowTitle(QApplication::translate("SecuritySetting", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        label_video1->setText(QApplication::translate("SecuritySetting", "\351\200\232\351\201\223\344\270\200", 0, QApplication::UnicodeUTF8));
        label_video2->setText(QApplication::translate("SecuritySetting", "\351\200\232\351\201\223\344\272\214", 0, QApplication::UnicodeUTF8));
        label_video3->setText(QApplication::translate("SecuritySetting", "\351\200\232\351\201\223\344\270\211", 0, QApplication::UnicodeUTF8));
        label_video4->setText(QApplication::translate("SecuritySetting", "\351\200\232\351\201\223\345\233\233", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SecuritySetting: public Ui_SecuritySetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECURITYSETTING_H
