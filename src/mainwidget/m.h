#ifndef M_H
#define M_H

#include <QObject>
#include "smarthomelogin.h"
#include "widget.h"

//typedef void(class A::*FUNC())
class M : public QObject
{
    Q_OBJECT
public:
    explicit M(QObject *parent = 0);
    
signals:
public:
    void virtual fun()=0;
private:
    SmartHomeLogin *A;
    Widget *B;
};

#endif // M_H
