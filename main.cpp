#include "mainwindow.h"
#include <calc_types.h>
#include <QApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    CalcType::Number num("40",5);
    qDebug()<<num.toString();
    qDebug()<<num.toInt();
    return a.exec();
}
