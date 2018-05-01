/*************************************************
Description:���ϵͳ���ù���
            1.��Ҫ��������ZigBee�Ĵ��ںš������ʵȴ�����Ϣ������
            2.ϵͳ����Ĭ�ϲ�������(���翪��������������ơ���)
            2.ϵͳ����
**************************************************/
#include "systemsettingdialog.h"
#include "ui_systemsettingdialog.h"
#include "myapp.h"
#include "myhelper.h"

#include <QDebug>

SystemSettingDialog::SystemSettingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SystemSettingDialog)
{
    ui->setupUi(this);
    this->initForm();
}

SystemSettingDialog::~SystemSettingDialog()
{
    delete ui;
}

void SystemSettingDialog::initForm()
{
    //���ô������������
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint
                         | Qt::WindowMinMaxButtonsHint);

    //���ݲ�ͬƽ̨��ʼ����������
#ifdef Q_OS_LINUX
    m_portName << "ttyS0" <<"ttyS1" << "ttyS2" << "ttyS2"<< "ttyS4";
#elif defined (Q_OS_WIN)
    m_portName <<"COM0" <<"COM1"<<"COM2" <<"COM3" <<"COM4" <<"COM5"<<"COM6"
              <<"COM7" <<"COM8"<<"COM9" <<"COM10"<<"COM11"<<"COM12"<<"COM13";
#endif
    m_portBaud <<"4800"<<"9600"<<"115200"<<"384000";

    QString port;
    foreach (port, m_portName) {
        ui->cbx_PortName->addItem(port);
    }
    QString baud;
    foreach (baud, m_portBaud) {
        ui->cbx_PortBaud->addItem(baud);
    }
    ui->cbx_PortBaud->setCurrentIndex(getBaudNum(Myapp::baudRate));
    ui->cbx_PortName->setCurrentIndex(getBaudName(Myapp::winPortName));

    this->setMaximumSize(245,292);
    ui->label_title->setText(tr("SystemSetting"));

    ui->cbx_PortName->setEnabled(false);
    ui->cbx_PortBaud->setEnabled(false);
    m_isopenPort = true;                    //Ĭ�ϴ����Ѿ���
}

void SystemSettingDialog::initWidget()
{
    //���ݲ�ͬƽ̨��ʼ���������ʵ�������������Ѿ�д���������ļ���
#ifdef Q_OS_LINUX
    //m_serialThread = new SerialThread(Myapp::portName,this);
#elif defined (Q_OS_WIN)
    //m_serialThread = new SerialThread("COM31",this);
#endif

}

void SystemSettingDialog::initConnect()
{

}

int SystemSettingDialog::getBaudNum(const int baud)
{
    if(4800 == baud)
        return E_BAUD4800;
    if ( 9600 == baud)
        return E_BAUD9600;
    if (115200 == baud)
        return E_BAUD115200;
    return E_BAUDNUMNULL;
}

int SystemSettingDialog::getBaudName(const QString &baud)
{
    if (0 == QString::compare(baud,"COM0"))
        return E_BAUDCOM0;
    else if (0 == QString::compare(baud,"COM1"))
        return E_BAUDCOM1;
    else if (0 == QString::compare(baud,"COM2"))
        return E_BAUDCOM2;
    else if (0 == QString::compare(baud,"COM3"))
        return E_BAUDCOM3;
    else if (0 == QString::compare(baud,"COM4"))
        return E_BAUDCOM4;
    else if (0 == QString::compare(baud,"COM5"))
        return E_BAUDCOM5;
    else if (0 == QString::compare(baud,"COM6"))
        return E_BAUDCOM6;
    else if (0 == QString::compare(baud,"COM7"))
        return E_BAUDCOM7;
    else if (0 == QString::compare(baud,"COM8"))
        return E_BAUDCOM8;
    return E_BAUDNUMNULL;
}

void SystemSettingDialog::on_pbnOk_clicked()
{
    qDebug()<<"on_pbnOk_clicked";
    Myapp::winPortName = ui->cbx_PortName->currentText();
    Myapp::baudRate = ui->cbx_PortBaud->currentText().toInt();

    Myapp::WriteConfig();

    myHelper::showMessageBoxInfo(tr("configuration success!"));
    this->close();
}

void SystemSettingDialog::on_pbnClosePort_clicked()
{
    if (m_isopenPort)
    {
        m_isopenPort = false;
        ui->cbx_PortName->setEnabled(true);
        ui->cbx_PortBaud->setEnabled(true);
        ui->pbnClosePort->setText(tr("open_port"));
    }else
    {
        //�򿪴���
        m_isopenPort = true;
        ui->cbx_PortName->setEnabled(false);
        ui->cbx_PortBaud->setEnabled(false);
        ui->pbnClosePort->setText(tr("close_port"));
        //m_serialThread->startThread();
    }
}

void SystemSettingDialog::on_tbnMenuClose_clicked()
{
    this->close();
}

