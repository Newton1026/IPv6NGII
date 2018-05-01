#include "nightwidget.h"
#include "ui_nightwidget.h"
#include <QDebug>

NightWidget::NightWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NightWidget)
{
    ui->setupUi(this);
}

NightWidget::~NightWidget()
{
    delete ui;
}

void NightWidget::on_dial_actionTriggered(int action)
{
    qDebug()<<"on_dial_actionTriggered";
}
