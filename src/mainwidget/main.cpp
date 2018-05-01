/*************************************************
Copyright:
Author:
Date:2016-12-14
Version:V1.0
Description:主程序，加载配置信息、程序样式，设置编码方式 IPv6 6LoWPAN
**************************************************/
#include <QApplication>
#include "myhelper.h"
#include "myapp.h"
#include "analysisdata.h"
#include "smarthomelogin.h"
#include <QTextCodec>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("utf-8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("utf-8"));

    qRegisterMetaType<MODEL>("MODEL");                    //注册数据类型

   /*
    Myapp::ReadConfig();                                  //读配置文件
    myHelper::setUTF8Code();                              //设置编码方式
    myHelper::setStyle(":/images/css/style.css");         //加载样式表
    myHelper::setChinese(":/images/qt_zh_CN.qm");         //加载中文字符

    QDir dir;
    Myapp::AppPath = dir.currentPath();

    Myapp::ReadConfig();                                  //读配置文件
    */

    myHelper::setUTF8Code();                              //设置编码方式
    myHelper::setStyle(":/images/css/style.css");         //加载样式表
    myHelper::setChinese(":/images/qt_zh_CN.qm"); //加载中文字符

    SmartHomeLogin w;//login ui
    w.show();

    return a.exec();
}
