#-------------------------------------------------
#
# Project created by QtCreator 2016-01-17 T17:07:36
#
#-------------------------------------------------
QT  += core gui
QT  += printsupport
QT  += sql
QT  +=network
#QT  += phonon
CONFIG  += debug
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SmartHome1.0
TEMPLATE = app
TRANSLATIONS += images/qt_zh_CN.ts

include(src/mainwidget/mainwidget.pri)
include(src/help/help.pri)
include(src/Serialport/serialport.pri)
include(src/anywidget/anywidget.pri)
include(src/module/module.pri)
include(src/qcustomplot/qcustomplot.pri)      #µÚÈý·½»æÍ¼Í¼
include(src/database/database.pri)
include(src/protocol/protocol.pri)
include(src/login/loginwidget.pri)

INCLUDEPATH += $$PWD/src/Serialport
INCLUDEPATH += $$PWD/src/mainwidget
INCLUDEPATH += $$PWD/src/help
INCLUDEPATH += $$PWD/src/anywidget
INCLUDEPATH += $$PWD/src/module
INCLUDEPATH += $$PWD/src/qcustomplot
INCLUDEPATH += $$PWD/src/database
INCLUDEPATH += $$PWD/src/protocol
INCLUDEPATH += $$PWD/src/login

MOC_DIR = temp/moc
RCC_DIR = temp/rccr
OBJECTS_DIR = temp/obj
UI_HEADERS_DIR = temp/ui
DESTDIR = bin

win32:RC_FILE = SmartHome.rc
RESOURCES += \
    image.qrc
