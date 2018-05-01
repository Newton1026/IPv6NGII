/****************************************************************************
** Meta object code from reading C++ file 'kitchenwidget.h'
**
** Created: Tue Feb 21 19:43:43 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/anywidget/kitchenwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kitchenwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_KitchenWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   14,   14,   14, 0x08,
      69,   14,   14,   14, 0x08,
     110,   99,   14,   14, 0x08,
     145,   14,   14,   14, 0x08,
     172,   14,   14,   14, 0x08,
     199,   14,   14,   14, 0x08,
     226,  219,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_KitchenWidget[] = {
    "KitchenWidget\0\0model\0signalLight(quint8)\0"
    "on_pbn_light_main_clicked()\0"
    "slotUpdataSmokeValue(QString)\0device,cmd\0"
    "slotUpdataLedStatus(quint8,quint8)\0"
    "on_tbn_smoke_sub_clicked()\0"
    "on_tbn_smoke_add_clicked()\0"
    "slotSaveLedStatus()\0status\0"
    "slotChangeLedStatus(quint8)\0"
};

void KitchenWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        KitchenWidget *_t = static_cast<KitchenWidget *>(_o);
        switch (_id) {
        case 0: _t->signalLight((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 1: _t->on_pbn_light_main_clicked(); break;
        case 2: _t->slotUpdataSmokeValue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->slotUpdataLedStatus((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 4: _t->on_tbn_smoke_sub_clicked(); break;
        case 5: _t->on_tbn_smoke_add_clicked(); break;
        case 6: _t->slotSaveLedStatus(); break;
        case 7: _t->slotChangeLedStatus((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData KitchenWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject KitchenWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_KitchenWidget,
      qt_meta_data_KitchenWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &KitchenWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *KitchenWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *KitchenWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_KitchenWidget))
        return static_cast<void*>(const_cast< KitchenWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int KitchenWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void KitchenWidget::signalLight(quint8 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
