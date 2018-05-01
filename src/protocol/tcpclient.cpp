#include "tcpclient.h"
#include <QMessageBox>
#include <QtNetwork>
#include <QDebug>

QHostAddress tcpClient::s_hostAddress = QHostAddress::Any;
int tcpClient::s_hostPort = 0;
tcpClient::tcpClient(QWidget *parent) :
    QTcpSocket(parent)
{
    m_flag = 0;
    m_isConnected = false;
    linkSignalWithSlot();
}

void tcpClient::requestConnect()
{
    if (!m_isConnected)
    {
        abort();
        connectToHost(tcpClient::s_hostAddress,tcpClient::s_hostPort);
    }
}
/*************************************************
Function Name：isConnected()
Description: 是否连接
Input： NULL
Output： NULL
Changes： NULL
*************************************************/
bool tcpClient::isConnected()
{
    return m_isConnected;
}

/*************************************************
Function Name： setFlag()
Description: 是否标识
*************************************************/
void tcpClient::setFlag(int flag)
{
    m_flag = flag;
}

/*************************************************
Function Name： flag()
Description: 获取标识
*************************************************/
int tcpClient::flag()
{
    return m_flag;
}

/*************************************************
Function Name： getIP()
Description: 获取ip地址
*************************************************/
QString tcpClient::getIP()
{
    QList<QHostAddress> list = QNetworkInterface::allAddresses();
    foreach (QHostAddress address, list)
    {
       if(address.protocol() == QAbstractSocket::IPv4Protocol) //我们使用IPv4地址
        {
           if(address.toString()!="127.0.0.1")
                return address.toString();
        }
    }
    return 0;
}

/*************************************************
Function Name： getCurrentDateTime()
Description: 获取当前的日期和时间
*************************************************/
QString tcpClient::getCurrentDateTime()
{
    QTime time = QTime::currentTime();
    QDate date = QDate::currentDate();

    return QString("%1  %2").arg(date.toString(Qt::ISODate))
        .arg(time.toString(Qt::ISODate));
}
// mark: private slots---------------------------------------------------------
/*************************************************
Function Name： connectionClosedByServer()
Description: 连接被客户端关闭
Input： NULL
Output： NULL
Changes： NULL
*************************************************/
void tcpClient::connectionClosed()
{
    m_isConnected = false;
    qDebug("连接断开");
    deleteLater();
    if (m_flag == 0)
    {

    }
}

/*************************************************
Function Name： connectionCreate()
Description: 连接创建
Input： NULL
Output： NULL
Changes： NULL
*************************************************/
void tcpClient::connectionCreate()
{
    m_isConnected = true;
}

/*************************************************
Function Name： dispalyError()
Description: 显示错误
Input： 错误信息
Output： NULL
Changes： NULL
*************************************************/
void tcpClient::dispalyError(QAbstractSocket::SocketError socketError)
{
    m_isConnected = false;
    switch (socketError)
    {
    case QAbstractSocket::RemoteHostClosedError:
        emit showConnectionStatus(tr("链接失败.可能是因为服务器关闭."));
        break;
    case QAbstractSocket::HostNotFoundError:
        emit showConnectionStatus(tr("链接失败.可能是因为找不到服务器"));
        QMessageBox::information(NULL, tr("IM Client"),
                                 tr("This host was not found.Please check the"
                                    "host name and port settings."));
        break;
    case QAbstractSocket::ConnectionRefusedError:
        emit showConnectionStatus(tr("链接失败.可能是因为连接被拒绝"));
        QMessageBox::information(NULL, tr("IM Client"),
                                 tr("The connection was refused by the peer."
                                    "Make sure the IM server is running,"
                                    "and check that the host name and port"
                                    "settings are correct."));
        break;
    default:
        emit showConnectionStatus(tr("链接失败: %1.").arg(errorString()));
        QMessageBox::information(NULL, tr("IM Client"),
                                 tr("The following errot occurred: %1.")
                                 .arg(errorString()));
    }
}

/*************************************************
Function Name： linkSignalWithSlot()
Description: 链接信号与槽
Input： NULL
Output： NULL
Changes： NULL
*************************************************/
void tcpClient::linkSignalWithSlot()
{
    connect(this, SIGNAL(connected()), this, SLOT(connectionCreate()));
    connect(this, SIGNAL(disconnected()), this, SLOT(connectionClosed()));
    connect(this, SIGNAL(error(QAbstractSocket::SocketError)),
            this, SLOT(dispalyError(QAbstractSocket::SocketError)));
}

