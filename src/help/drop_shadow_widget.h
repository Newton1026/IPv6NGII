
/*************************************************
Copyright:kevin
Author:Kevin LiQi
Date:2015-12-06
Email:kevinlq0912@163.com
QQ:936563422
Version:V1.0
Description:智能家居---统计界面曲线图鼠标事件
**************************************************/
#ifndef DROPSHADOWWIDGET_H
#define DROPSHADOWWIDGET_H

#include <QDialog>
#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <qmath.h>

class DropShadowWidget : public QDialog
{
	Q_OBJECT

public:

	explicit DropShadowWidget(QWidget *parent = 0);
	~DropShadowWidget();

protected:

	void mousePressEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	virtual void paintEvent(QPaintEvent *event);

private:

    QPoint move_point;      //移动的距离
    bool mouse_press;       //按下鼠标左键

};

#endif //DROPSHADOWWIDGET_H
