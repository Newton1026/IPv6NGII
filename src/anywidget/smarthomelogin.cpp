#include "smarthomelogin.h"

#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include <QComboBox>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QDockWidget>
#include <QTime>
#include <QTimerEvent>
#include <QInputDialog>
#include <QDebug>
#include <QTextCodec>
#include <QMessageBox>
#include <QDebug>
//construct function
SmartHomeLogin::SmartHomeLogin(QWidget *parent):QWidget(parent)
{
    this->initLoginWidget();
    this->linkSignalWithSlot();
}
//deconstruct function
SmartHomeLogin::~SmartHomeLogin()
{
}
//member function
void SmartHomeLogin::initLoginWidget()
{
    m_isLogin = true;
    QVBoxLayout *vLayoutMidTop   = new QVBoxLayout;
    QVBoxLayout *vLayoutRightTop = new QVBoxLayout;
    QHBoxLayout *hLayoutTop      = new QHBoxLayout;

    QHBoxLayout *hLayoutMid  = new QHBoxLayout;
    QHBoxLayout *hLayoutBtm  = new QHBoxLayout;
    QVBoxLayout *vLayoutMain = new QVBoxLayout;

    QLabel *labelHeadLine = new QLabel(tr("IPv6智能网关"));
    labelHeadLine->setAlignment(Qt::AlignHCenter);
    QPalette pa;//color class
    pa.setColor(QPalette::WindowText, Qt::black);
    labelHeadLine->setPalette(pa);
    QFont ft;
    ft.setPointSize(13);
    labelHeadLine->setFont(ft);


    m_leUserID = new QLineEdit;
    m_leUserID->setPlaceholderText(tr("帐号"));

    m_leUserPwd = new QLineEdit;
    m_leUserPwd->setPlaceholderText(tr("密码"));
    m_leUserPwd->setEchoMode(QLineEdit::Password);//tips

    vLayoutMidTop->addWidget(m_leUserID);
    vLayoutMidTop->addWidget(m_leUserPwd);

    m_labelRegister = new QPushButton;
    m_labelRegister->setText(tr("注册帐号"));

    m_labelForgotPwd = new QPushButton;
    m_labelForgotPwd->setText(tr("忘记密码"));

    vLayoutRightTop->addWidget(m_labelRegister);
    vLayoutRightTop->addWidget(m_labelForgotPwd);

    hLayoutTop->addLayout(vLayoutMidTop);
    hLayoutTop->addLayout(vLayoutRightTop);
    hLayoutTop->setMargin(20);
    //end top

    //mid
    m_cbKeepPwd = new QCheckBox(tr("记住密码"));
    m_cbAutoLogin = new QCheckBox(tr("自动登录"));
    hLayoutMid->addWidget(m_cbKeepPwd);
    hLayoutMid->addWidget(m_cbAutoLogin);
    //end mid

    //bottom
    m_moreButton = new QPushButton(tr("设置"));
    m_moreButton->setCheckable(true);
    m_moreButton->setAutoDefault(false);

    m_cbxStatus = new QComboBox();
    m_cbxStatus->addItem(tr("普通用户"));
    m_cbxStatus->addItem(tr("管理员"));


    m_btnLogin = new QPushButton(tr("登录"));
    m_btnLogin->setDefault(true);

    hLayoutBtm->addWidget(m_moreButton);
    hLayoutBtm->addWidget(m_cbxStatus);
    hLayoutBtm->addWidget(m_btnLogin);
    //end bottom

    //hide
    m_hostAddress = new QLineEdit;
    m_hostAddress->setPlaceholderText(tr("服务器IPv6地址"));
    m_hostPort = new QLineEdit;
    m_hostPort->setFixedWidth(100);
    m_hostPort->setPlaceholderText(tr("端口号"));

    m_extendedWidget = new QWidget;
    QHBoxLayout *hLayoutExtended = new QHBoxLayout;
    hLayoutExtended->setMargin(0);
    hLayoutExtended->addWidget(m_hostAddress);
    hLayoutExtended->addWidget(m_hostPort);

    m_extendedWidget->setLayout(hLayoutExtended);
    //end hide

    m_labelStatus = new QLabel;
    m_labelStatus->setText(tr("Shenzhen University 801"));
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    m_labelStatus->setSizePolicy(sizePolicy);

    vLayoutMain->setSizeConstraint(QLayout::SetFixedSize);
    vLayoutMain->addWidget(labelHeadLine);
    vLayoutMain->addLayout(hLayoutTop);
    vLayoutMain->addLayout(hLayoutMid);
    vLayoutMain->addLayout(hLayoutBtm);
    vLayoutMain->addWidget(m_extendedWidget);
    vLayoutMain->addWidget(m_labelStatus);
    vLayoutMain->setMargin(5);


    setLayout(vLayoutMain);
    m_extendedWidget->hide();
}
//signal&slots
void SmartHomeLogin::linkSignalWithSlot()
{
    connect(m_btnLogin,SIGNAL(clicked()),this,SLOT(onClickshowWidget()));
    connect(m_labelRegister, SIGNAL(clicked()),this, SLOT(onClickLabelRegister()));
    connect(m_labelForgotPwd,SIGNAL(clicked()),this,SLOT(onClickLabelForget()));
    connect(m_moreButton, SIGNAL(toggled(bool)),m_extendedWidget, SLOT(setVisible(bool)));
}
//slots1
void SmartHomeLogin::onClickshowWidget()
{
    if(m_leUserID->text()==""&&m_leUserPwd->text()=="")
    {
        widget = new Widget;
        widget->setAttribute(Qt::WA_DeleteOnClose);
        QMessageBox::information(NULL, tr("提示"),tr("登录成功，请妥善保存账号密码！"));
        widget->show();
        SmartHomeLogin::close();
   }
   else
   {
        QMessageBox::information(NULL, tr("提示"),tr("用户名或密码错误!"));
   }
}

void SmartHomeLogin::Communication()
{
    qDebug()<<"i am Communcation()!";
}
//slots2
void SmartHomeLogin::onClickLabelRegister()
{
    registerWidget = new RegisterWidget;
    registerWidget->show();
}
//slots3
void SmartHomeLogin::onClickLabelForget()
{
    QMessageBox::information(NULL, tr("提示"),tr("本尊也没办法!"));
}
