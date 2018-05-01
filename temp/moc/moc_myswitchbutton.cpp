/****************************************************************************
** Meta object code from reading C++ file 'myswitchbutton.h'
**
** Created: Tue Dec 6 15:23:35 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/help/myswitchbutton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myswitchbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mySwitchButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_mySwitchButton[] = {
    "mySwitchButton\0\0ChangeOnOff()\0"
};

void mySwitchButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        mySwitchButton *_t = static_cast<mySwitchButton *>(_o);
        switch (_id) {
        case 0: _t->ChangeOnOff(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData mySwitchButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mySwitchButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_mySwitchButton,
      qt_meta_data_mySwitchButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mySwitchButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mySwitchButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mySwitchButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mySwitchButton))
        return static_cast<void*>(const_cast< mySwitchButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int mySwitchButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
