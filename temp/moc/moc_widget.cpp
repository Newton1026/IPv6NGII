/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created: Wed Oct 25 18:15:16 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/mainwidget/widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Widget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,
      28,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      65,   48,    7,    7, 0x08,
      95,    7,    7,    7, 0x08,
     125,  121,    7,    7, 0x08,
     150,    7,    7,    7, 0x08,
     171,    7,    7,    7, 0x08,
     195,    7,    7,    7, 0x08,
     218,    7,    7,    7, 0x08,
     242,    7,    7,    7, 0x08,
     268,    7,    7,    7, 0x08,
     290,    7,    7,    7, 0x08,
     313,    7,    7,    7, 0x08,
     342,    7,    7,    7, 0x08,
     366,    7,    7,    7, 0x08,
     390,    7,    7,    7, 0x08,
     412,    7,    7,    7, 0x08,
     434,    7,    7,    7, 0x08,
     458,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Widget[] = {
    "Widget\0\0signalCloseSystem()\0"
    "returnLoginWidget()\0enum_widget_name\0"
    "setCurrentWidget(enum_widget)\0"
    "slotShowCurrentDataTime()\0err\0"
    "slotErrorString(QString)\0on_tbnHome_clicked()\0"
    "on_tbnBedRoom_clicked()\0on_tbnParlor_clicked()\0"
    "on_tbnKitchen_clicked()\0"
    "on_tbnStatistic_clicked()\0"
    "on_tbnNight_clicked()\0on_tbnSafety_clicked()\0"
    "slot_receiveData(QByteArray)\0"
    "on_tbnControl_clicked()\0on_tbnCurtain_clicked()\0"
    "on_tbnModel_clicked()\0on_tbnMusic_clicked()\0"
    "on_tbnSetting_clicked()\0on_pushButton_clicked()\0"
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Widget *_t = static_cast<Widget *>(_o);
        switch (_id) {
        case 0: _t->signalCloseSystem(); break;
        case 1: _t->returnLoginWidget(); break;
        case 2: _t->setCurrentWidget((*reinterpret_cast< enum_widget(*)>(_a[1]))); break;
        case 3: _t->slotShowCurrentDataTime(); break;
        case 4: _t->slotErrorString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_tbnHome_clicked(); break;
        case 6: _t->on_tbnBedRoom_clicked(); break;
        case 7: _t->on_tbnParlor_clicked(); break;
        case 8: _t->on_tbnKitchen_clicked(); break;
        case 9: _t->on_tbnStatistic_clicked(); break;
        case 10: _t->on_tbnNight_clicked(); break;
        case 11: _t->on_tbnSafety_clicked(); break;
        case 12: _t->slot_receiveData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 13: _t->on_tbnControl_clicked(); break;
        case 14: _t->on_tbnCurtain_clicked(); break;
        case 15: _t->on_tbnModel_clicked(); break;
        case 16: _t->on_tbnMusic_clicked(); break;
        case 17: _t->on_tbnSetting_clicked(); break;
        case 18: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Widget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget,
      qt_meta_data_Widget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Widget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Widget))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void Widget::signalCloseSystem()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Widget::returnLoginWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
