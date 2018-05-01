/****************************************************************************
** Meta object code from reading C++ file 'readserialportdata.h'
**
** Created: Tue Oct 24 16:57:51 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/protocol/readserialportdata.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'readserialportdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ReadSerialPortData[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   20,   19,   19, 0x05,
      56,   19,   19,   19, 0x05,
      87,   19,   19,   19, 0x05,
     118,   19,   19,   19, 0x05,
     149,   19,   19,   19, 0x05,
     188,  177,   19,   19, 0x05,
     227,  177,   19,   19, 0x05,
     265,  177,   19,   19, 0x05,
     307,  303,   19,   19, 0x05,
     335,   19,   19,   19, 0x05,
     356,  352,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     377,   19,   19,   19, 0x0a,
     392,   19,   19,   19, 0x0a,
     413,   19,   19,   19, 0x0a,
     437,  431,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ReadSerialPortData[] = {
    "ReadSerialPortData\0\0buff\0"
    "singnalReceiveData(QByteArray)\0"
    "signalBedRoomTempture(QString)\0"
    "signalParlourTempture(QString)\0"
    "signalParlourHumidity(QString)\0"
    "signalKitchenSmoke(QString)\0device,cmd\0"
    "signalBedRoomeLedStatus(quint8,quint8)\0"
    "signalParlourLedStatus(quint8,quint8)\0"
    "signalKitchenLedStatus(quint8,quint8)\0"
    "cmd\0signalCurtainStatus(quint8)\0"
    "signalFinished()\0err\0signalError(QString)\0"
    "slotReadData()\0slotInitSerialPort()\0"
    "slotSendMessage()\0value\0"
    "slotReceiveChildrenValue(quint8)\0"
};

void ReadSerialPortData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ReadSerialPortData *_t = static_cast<ReadSerialPortData *>(_o);
        switch (_id) {
        case 0: _t->singnalReceiveData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->signalBedRoomTempture((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->signalParlourTempture((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->signalParlourHumidity((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->signalKitchenSmoke((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->signalBedRoomeLedStatus((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 6: _t->signalParlourLedStatus((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 7: _t->signalKitchenLedStatus((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 8: _t->signalCurtainStatus((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 9: _t->signalFinished(); break;
        case 10: _t->signalError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->slotReadData(); break;
        case 12: _t->slotInitSerialPort(); break;
        case 13: _t->slotSendMessage(); break;
        case 14: _t->slotReceiveChildrenValue((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ReadSerialPortData::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ReadSerialPortData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ReadSerialPortData,
      qt_meta_data_ReadSerialPortData, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ReadSerialPortData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ReadSerialPortData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ReadSerialPortData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ReadSerialPortData))
        return static_cast<void*>(const_cast< ReadSerialPortData*>(this));
    return QObject::qt_metacast(_clname);
}

int ReadSerialPortData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void ReadSerialPortData::singnalReceiveData(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ReadSerialPortData::signalBedRoomTempture(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ReadSerialPortData::signalParlourTempture(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ReadSerialPortData::signalParlourHumidity(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ReadSerialPortData::signalKitchenSmoke(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ReadSerialPortData::signalBedRoomeLedStatus(quint8 _t1, quint8 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ReadSerialPortData::signalParlourLedStatus(quint8 _t1, quint8 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ReadSerialPortData::signalKitchenLedStatus(quint8 _t1, quint8 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ReadSerialPortData::signalCurtainStatus(quint8 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ReadSerialPortData::signalFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void ReadSerialPortData::signalError(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
