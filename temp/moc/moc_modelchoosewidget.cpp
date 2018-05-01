/****************************************************************************
** Meta object code from reading C++ file 'modelchoosewidget.h'
**
** Created: Tue Dec 6 15:23:43 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/anywidget/modelchoosewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modelchoosewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ModelChooseWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   19,   18,   18, 0x05,
      52,   19,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      82,   18,   18,   18, 0x08,
     107,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ModelChooseWidget[] = {
    "ModelChooseWidget\0\0model\0"
    "signalControlModel(quint8)\0"
    "signalChangeLedStatus(quint8)\0"
    "on_pbn_key_led_clicked()\0"
    "on_pbn_go_home_clicked()\0"
};

void ModelChooseWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ModelChooseWidget *_t = static_cast<ModelChooseWidget *>(_o);
        switch (_id) {
        case 0: _t->signalControlModel((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 1: _t->signalChangeLedStatus((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 2: _t->on_pbn_key_led_clicked(); break;
        case 3: _t->on_pbn_go_home_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ModelChooseWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ModelChooseWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ModelChooseWidget,
      qt_meta_data_ModelChooseWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ModelChooseWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ModelChooseWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ModelChooseWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModelChooseWidget))
        return static_cast<void*>(const_cast< ModelChooseWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ModelChooseWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ModelChooseWidget::signalControlModel(quint8 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ModelChooseWidget::signalChangeLedStatus(quint8 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
