/*************************************************
Copyright:kevin
Author:Kevin LiQi
Date:2015-12-07
Email:kevinlq0912@163.com
QQ:936563422
Description:���ܼҾ�--ͳ��ģ���ʵ��
            �¶�ͳ�ơ�ʪ��ͳ�ơ�����Ũ��ͳ��
**************************************************/
#ifndef STATISTICWIDGET_H
#define STATISTICWIDGET_H

#include <QWidget>
#include "qcustomplot.h"

class SqlHelp;

namespace Ui {
class StatisticWidget;
}

class StatisticWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit StatisticWidget(QWidget *parent = 0);
    ~StatisticWidget();

private slots:
    void loadPlotTempture();                //�����¶Ȼ�ͼ
    void loadPlotHumidity();                //����ʪ�Ȼ�ͼ
    void loadPlotSmoke();                   //��������Ũ�Ȼ�ͼ
    
    void on_ckMove_stateChanged(int arg1);

    void on_ckBackground_stateChanged(int arg1);

    void on_ckText_stateChanged(int arg1);

    void slotUpdataData();                  //����ͳ��ͼ����

private:
    Ui::StatisticWidget *ui;

    int m_currentIndex;                       //��ǰ����id
    QList<QCustomPlot *> m_plots_list;

    QVector<double> m_plot_tempture_keys;
    QVector<QString> m_plot_tempture_labels;
    QVector<double> m_plot_tempture_values;

    double plot2_key;
    double plot2_value;


    QVector<double> m_plot_smoke_values;
    QVector<double> m_plot_smoke_key;
    int m_smoke_count;

    void initStyle();                       //��ʼ����ʽ
    void initForm();                        //��ʼ������
    void initPlot();                        //��ʼ����ͼ
    void initPlotTempture();                //��ʼ���¶Ȼ�ͼ
    void initPlotHumidity();                //��ʼ��ʪ�Ȼ�ͼ
    void initPlotSmoke();                   //��ʼ������Ũ�Ȼ�ͼ

    SqlHelp *m_sqlhelp;
};

#endif // STATISTICWIDGET_H
