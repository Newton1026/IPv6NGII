/*************************************************
Copyright:
Author:
Date:2016-12-14
Version:V1.0
Description:登录界面 注册界面
**************************************************/

#ifndef SMARTHOMELOGIN_H
#define SMARTHOMELOGIN_H

#include "widget.h"
#include "registerwidget.h"
#include <QtGui/QWidget>

class QPushButton;
class QLabel;
class QLineEdit;
class QCheckBox;
class QComboBox;

class SmartHomeLogin : public QWidget
{
    Q_OBJECT

public:
    SmartHomeLogin(QWidget *parent = 0);
    ~SmartHomeLogin();

private:
    // 初始化登录界面
    void initLoginWidget();
    QLineEdit *m_leUserID;    // id
    QLineEdit *m_leUserPwd;   // 密码
    QCheckBox *m_cbKeepPwd;   // 记住密码
    QCheckBox *m_cbAutoLogin; // 自动登录
    QComboBox *m_cbxStatus;   // 登录状态
    QPushButton *m_btnLogin;  // 登录按钮

    QPushButton *m_moreButton;// 拓展按钮
    QWidget *m_extendedWidget;// 拓展界面
    QLineEdit *m_hostAddress; // 服务器ip地址
    QLineEdit *m_hostPort;    // 服务器端口

    QLabel *m_labelStatus;    // 状态标签
    bool m_isLogin;           // 是否能登录

    int m_timerID;            // 定时器ID
    bool m_closeTimer;        // 定时器是否关闭
    int m_counter;            // 计数器
    bool m_isAutoLogin;         // 是否自动登录

    QPushButton *m_labelRegister;  //注册
    QPushButton *m_labelForgotPwd;  //忘记密码


    Widget *widget;  //主界面
    RegisterWidget *registerWidget;  //注册界面

public:
    //连接信号与槽函数
    void linkSignalWithSlot();
    void Communication();

public slots:
    //显示主界面
    void onClickshowWidget();
    //显示注册界面
    void onClickLabelRegister();
    //显示忘记密码界面
    void onClickLabelForget();
};
#endif
// SMARTHOMELOGIN_H
