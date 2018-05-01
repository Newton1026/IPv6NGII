/****************************************************************************
** Meta object code from reading C++ file 'tcpclient.h'
**
** Created: Tue Dec 13 10:50:59 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/protocol/tcpclient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tcpClient[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   11,   10,   10, 0x05,
      55,   10,   10,   10, 0x25,

 // slots: signature, parameters, type, tag, flags
      85,   10,   10,   10, 0x08,
     104,   10,   10,   10, 0x08,
     123,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tcpClient[] = {
    "tcpClient\0\0,isLogin\0"
    "showConnectionStatus(QString,bool)\0"
    "showConnectionStatus(QString)\0"
    "connectionClosed()\0connectionCreate()\0"
    "dispalyError(QAbstractSocket::SocketError)\0"
};

void tcpClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tcpClient *_t = static_cast<tcpClient *>(_o);
        switch (_id) {
        case 0: _t->showConnectionStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->showConnectionStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->connectionClosed(); break;
        case 3: _t->connectionCreate(); break;
        case 4: _t->dispalyError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tcpClient::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tcpClient::staticMetaObject = {
    { &QTcpSocket::staticMetaObject, qt_meta_stringdata_tcpClient,
      qt_meta_data_tcpClient, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tcpClient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tcpClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tcpClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tcpClient))
        return static_cast<void*>(const_cast< tcpClient*>(this));
    return QTcpSocket::qt_metacast(_clname);
}

int tcpClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void tcpClient::showConnectionStatus(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
