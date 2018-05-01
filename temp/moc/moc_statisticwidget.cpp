/****************************************************************************
** Meta object code from reading C++ file 'statisticwidget.h'
**
** Created: Wed Dec 14 16:20:13 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/anywidget/statisticwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statisticwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StatisticWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      36,   16,   16,   16, 0x08,
      55,   16,   16,   16, 0x08,
      76,   71,   16,   16, 0x08,
     104,   71,   16,   16, 0x08,
     138,   71,   16,   16, 0x08,
     166,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StatisticWidget[] = {
    "StatisticWidget\0\0loadPlotTempture()\0"
    "loadPlotHumidity()\0loadPlotSmoke()\0"
    "arg1\0on_ckMove_stateChanged(int)\0"
    "on_ckBackground_stateChanged(int)\0"
    "on_ckText_stateChanged(int)\0"
    "slotUpdataData()\0"
};

void StatisticWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StatisticWidget *_t = static_cast<StatisticWidget *>(_o);
        switch (_id) {
        case 0: _t->loadPlotTempture(); break;
        case 1: _t->loadPlotHumidity(); break;
        case 2: _t->loadPlotSmoke(); break;
        case 3: _t->on_ckMove_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_ckBackground_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_ckText_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotUpdataData(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StatisticWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StatisticWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_StatisticWidget,
      qt_meta_data_StatisticWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StatisticWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StatisticWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StatisticWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StatisticWidget))
        return static_cast<void*>(const_cast< StatisticWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int StatisticWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
