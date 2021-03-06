/*************************************************

Description:智能家居--客厅界面的实现，包括客厅的灯，温湿度
**************************************************/
#ifndef PARLOURWIDGET_H
#define PARLOURWIDGET_H

#include <QWidget>
#include <QToolButton>
#include "analysisdata.h"

namespace Ui {
class Parlourwidget;
}

class Parlourwidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Parlourwidget(QWidget *parent = 0);
    ~Parlourwidget();

private:

    void initForm();
    void init();
    void initConnect();
    //设置按钮样式
    void setToolButtonStyle(QToolButton*tbn, const QString &text,
                            const QString iconName);
    //设置灯的样式
    void setLightStyle(const QString &styleName);

    void refreshSensorDefaultValue();       //刷新传感器的默认值
    void setLedTurnStatus(quint8 status);

private slots:
    void slot_lightMain();
    void slotLighttop();
    void slotLighthelp();

    void slotAddTempture();
    void slotSubTempture();
    void slotAddHumidity();
    void slotSubHumidity();

    void slotUpdataTemp(QString);       //更新温度
    void slotUpdataHum(QString);        //更新湿度

    //更新LED的状态
    void slotUpdataLedStatus(quint8 device,quint8 cmd);

    void slotSaveLedStatus();           //保存LED灯的状态
    void slotChangeLedStatus(quint8 status);         //

signals:
    //卧室灯状态信号(MODEL cmd 打开/关闭)
    void signalLightMain(quint8 cmd);
    void signalLightTop(quint8 cmd);
    void signalLightHelp(quint8 cmd);
    
private:
    Ui::Parlourwidget *ui;

    QString m_styleOn;                  //灯打开
    QString m_styleOff;                 //灯关闭
};

#endif // PARLOURWIDGET_H
