#ifndef NIGHTWIDGET_H
#define NIGHTWIDGET_H

#include <QWidget>

namespace Ui {
class NightWidget;
}

class NightWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit NightWidget(QWidget *parent = 0);
    ~NightWidget();
    
private slots:
    void on_dial_actionTriggered(int action);

private:

    Ui::NightWidget *ui;
};

#endif // NIGHTWIDGET_H
