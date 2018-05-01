/****************************************************************************
** Meta object code from reading C++ file 'systemsettingdialog.h'
**
** Created: Tue Dec 13 19:18:52 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/anywidget/systemsettingdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemsettingdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SystemSettingDialog[] = {

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
      21,   20,   20,   20, 0x08,
      40,   20,   20,   20, 0x08,
      66,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SystemSettingDialog[] = {
    "SystemSettingDialog\0\0on_pbnOk_clicked()\0"
    "on_pbnClosePort_clicked()\0"
    "on_tbnMenuClose_clicked()\0"
};

void SystemSettingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SystemSettingDialog *_t = static_cast<SystemSettingDialog *>(_o);
        switch (_id) {
        case 0: _t->on_pbnOk_clicked(); break;
        case 1: _t->on_pbnClosePort_clicked(); break;
        case 2: _t->on_tbnMenuClose_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SystemSettingDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SystemSettingDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SystemSettingDialog,
      qt_meta_data_SystemSettingDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SystemSettingDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SystemSettingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SystemSettingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SystemSettingDialog))
        return static_cast<void*>(const_cast< SystemSettingDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SystemSettingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
