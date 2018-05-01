/*********************************************
File Name： RegisterWidget.h
Author： jet.F.R
Date： 2016.3.14
Description： 客户端注册界面
Changes：
********************************************/
#ifndef REGISTERWIDGET_H
#define REGISTERWIDGET_H

#include <QWidget>

class QPushButton;
class QLabel;
class QLineEdit;
class QCheckBox;
class QComboBox;
//#include "CustomLineEdit.h"
/*************************************************
Class Name： IMRegisterWidget
Description: 客户端注册帐号界面类
*************************************************/
class RegisterWidget : public QWidget
{
    Q_OBJECT
public:
    explicit RegisterWidget(QWidget *parent = 0);
    ~RegisterWidget();

signals:

private:
    // 初始化注册界面
    void initRegisterWidget();
    void linkSignalWithSlot();

private slots:
    void onClickBtnRegister();  // 单击“注册”按钮
    void conClickBtnCancel();   // 单击“取消”按钮
    void resetBtnRegister(bool);    // 重置注册按钮

private:
    QLabel *m_labelHead;
    QLabel *m_labelNickname;   // 用户昵称
    QLineEdit *m_leNickname;//input

    QLabel *m_labelDesNickname;// 昵称描述
    QLabel *m_labelPwd;        // 用户密码
    QLineEdit *m_lePwd;//input

    QLabel *m_labelDesPwd;
    QLabel *m_labelConfirmPwd;  // 确认密码
    QLineEdit *m_leConfirmPwd;//input
    QLabel *m_labelDesConfirmPwd;

    QLabel *m_labelSex;        // 性别
    QComboBox *m_cbxSex;
    QLabel *m_labelDesSex;

    QLabel *m_labelBirthday;   // 生日
    QLineEdit *m_leBirthday;
    QLabel *m_labelDesBirthday;

    QLabel *m_labelQuestion;   // 密保问题
    QLineEdit *m_leQuestion;
    QLabel *m_labelDesQuestion;

    QLabel *m_labelAnswer;     // 问题答案
    QLineEdit *m_leAnswer;
    QLabel *m_labelDesAnswer;

    QLabel *m_labelName;       // 真实姓名
    QLineEdit *m_leName;
    QLabel *m_labelDesName;

    QLabel *m_labelPhone;      // 电话
    QLineEdit *m_lePhone;
    QLabel *m_labelDesPhone;

    QLabel *m_labelAddress;    // 地址
    QLineEdit *m_leAddress;
    QLabel *m_labelDesAddress;

    QPushButton *m_btnRegister;// "注册" 按钮
    QPushButton *m_btnCancel;  // "取消" 按钮
};
#endif
// IMREGISTERWIDGET_H
