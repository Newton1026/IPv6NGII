/****************************************************************************
** Meta object code from reading C++ file 'parlourwidget.h'
**
** Created: Tue Dec 13 21:04:36 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/anywidget/parlourwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parlourwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Parlourwidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   15,   14,   14, 0x05,
      43,   15,   14,   14, 0x05,
      66,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      90,   14,   14,   14, 0x08,
     107,   14,   14,   14, 0x08,
     122,   14,   14,   14, 0x08,
     138,   14,   14,   14, 0x08,
     156,   14,   14,   14, 0x08,
     174,   14,   14,   14, 0x08,
     192,   14,   14,   14, 0x08,
     210,   14,   14,   14, 0x08,
     234,   14,   14,   14, 0x08,
     268,  257,   14,   14, 0x08,
     303,   14,   14,   14, 0x08,
     330,  323,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Parlourwidget[] = {
    "Parlourwidget\0\0cmd\0signalLightMain(quint8)\0"
    "signalLightTop(quint8)\0signalLightHelp(quint8)\0"
    "slot_lightMain()\0slotLighttop()\0"
    "slotLighthelp()\0slotAddTempture()\0"
    "slotSubTempture()\0slotAddHumidity()\0"
    "slotSubHumidity()\0slotUpdataTemp(QString)\0"
    "slotUpdataHum(QString)\0device,cmd\0"
    "slotUpdataLedStatus(quint8,quint8)\0"
    "slotSaveLedStatus()\0status\0"
    "slotChangeLedStatus(quint8)\0"
};

void Parlourwidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Parlourwidget *_t = static_cast<Parlourwidget *>(_o);
        switch (_id) {
        case 0: _t->signalLightMain((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 1: _t->signalLightTop((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 2: _t->signalLightHelp((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 3: _t->slot_lightMain(); break;
        case 4: _t->slotLighttop(); break;
        case 5: _t->slotLighthelp(); break;
        case 6: _t->slotAddTempture(); break;
        case 7: _t->slotSubTempture(); break;
        case 8: _t->slotAddHumidity(); break;
        case 9: _t->slotSubHumidity(); break;
        case 10: _t->slotUpdataTemp((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->slotUpdataHum((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->slotUpdataLedStatus((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 13: _t->slotSaveLedStatus(); break;
        case 14: _t->slotChangeLedStatus((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Parlourwidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Parlourwidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Parlourwidget,
      qt_meta_data_Parlourwidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Parlourwidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Parlourwidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Parlourwidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Parlourwidget))
        return static_cast<void*>(const_cast< Parlourwidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Parlourwidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void Parlourwidget::signalLightMain(quint8 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Parlourwidget::signalLightTop(quint8 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Parlourwidget::signalLightHelp(quint8 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
