//B<--->A  B(M)-->fun()---->A
#include "m.h"

M::M(QObject *parent) :
    QObject(parent)
{
    B = new Widget();
    A = new SmartHomeLogin();
}

void M::fun()
{
    A->Communication();
}
