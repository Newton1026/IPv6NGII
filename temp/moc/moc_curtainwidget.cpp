/****************************************************************************
** Meta object code from reading C++ file 'curtainwidget.h'
**
** Created: Tue Feb 21 19:43:43 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/anywidget/curtainwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'curtainwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CurtainWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   14,   14,   14, 0x08,
      76,   14,   14,   14, 0x08,
     105,   14,   14,   14, 0x08,
     133,   15,   14,   14, 0x08,
     165,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CurtainWidget[] = {
    "CurtainWidget\0\0cmd\0signalControlCurtain(quint8)\0"
    "on_pbnOpenCurtain_clicked()\0"
    "on_pbnCloseCurtain_clicked()\0"
    "on_pbnStopCurtain_clicked()\0"
    "slotUpdataCurtainStatus(quint8)\0"
    "slotSaveCurtainStatus()\0"
};

void CurtainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CurtainWidget *_t = static_cast<CurtainWidget *>(_o);
        switch (_id) {
        case 0: _t->signalControlCurtain((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 1: _t->on_pbnOpenCurtain_clicked(); break;
        case 2: _t->on_pbnCloseCurtain_clicked(); break;
        case 3: _t->on_pbnStopCurtain_clicked(); break;
        case 4: _t->slotUpdataCurtainStatus((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 5: _t->slotSaveCurtainStatus(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CurtainWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CurtainWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CurtainWidget,
      qt_meta_data_CurtainWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CurtainWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CurtainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CurtainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CurtainWidget))
        return static_cast<void*>(const_cast< CurtainWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CurtainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CurtainWidget::signalControlCurtain(quint8 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
