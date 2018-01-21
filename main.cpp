#include <QtGui/QApplication>
#include "picturemap.h"
#include<QTextCodec>
#include <QtGui>
#include "ui_picturemap.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("utf8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf8"));
    QTextCodec::setCodecForTr( QTextCodec::codecForName("utf8"));
    //QTextCodec::setCodecForTr(QTextCodec::codecForName("gb18030"));

    picturemap w;
    w.show();
    
    return a.exec();
}
