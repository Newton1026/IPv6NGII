/****************************************************************************
** Meta object code from reading C++ file 'smarthomelogin.h'
**
** Created: Tue Nov 14 10:22:19 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/anywidget/smarthomelogin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smarthomelogin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SmartHomeLogin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      36,   15,   15,   15, 0x0a,
      59,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SmartHomeLogin[] = {
    "SmartHomeLogin\0\0onClickshowWidget()\0"
    "onClickLabelRegister()\0onClickLabelForget()\0"
};

void SmartHomeLogin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SmartHomeLogin *_t = static_cast<SmartHomeLogin *>(_o);
        switch (_id) {
        case 0: _t->onClickshowWidget(); break;
        case 1: _t->onClickLabelRegister(); break;
        case 2: _t->onClickLabelForget(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SmartHomeLogin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SmartHomeLogin::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SmartHomeLogin,
      qt_meta_data_SmartHomeLogin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SmartHomeLogin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SmartHomeLogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SmartHomeLogin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SmartHomeLogin))
        return static_cast<void*>(const_cast< SmartHomeLogin*>(this));
    return QWidget::qt_metacast(_clname);
}

int SmartHomeLogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
