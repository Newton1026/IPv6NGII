/****************************************************************************
** Meta object code from reading C++ file 'sqlhelp.h'
**
** Created: Tue Dec 6 15:23:46 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/database/sqlhelp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sqlhelp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SqlHelp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      26,    8,    8,    8, 0x08,
      46,    8,    8,    8, 0x08,
      62,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SqlHelp[] = {
    "SqlHelp\0\0slot_FirstPage()\0slot_PreviousPage()\0"
    "slot_NextPage()\0slot_LastPage()\0"
};

void SqlHelp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SqlHelp *_t = static_cast<SqlHelp *>(_o);
        switch (_id) {
        case 0: _t->slot_FirstPage(); break;
        case 1: _t->slot_PreviousPage(); break;
        case 2: _t->slot_NextPage(); break;
        case 3: _t->slot_LastPage(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SqlHelp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SqlHelp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SqlHelp,
      qt_meta_data_SqlHelp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SqlHelp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SqlHelp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SqlHelp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SqlHelp))
        return static_cast<void*>(const_cast< SqlHelp*>(this));
    return QObject::qt_metacast(_clname);
}

int SqlHelp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
