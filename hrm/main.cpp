#include "./view/mainwindow.h"
#include <QApplication>
#include"QDebug"
#include"./view/select_level.h"
#include"./common/common.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    select_level w0;
    w0.show();
    a.exec();

    MainWindow w1;
    w1.show();

    a.exec();


    return 0;
}
