#include "./view/mainwindow.h"
#include <QApplication>
#include"QDebug"
#include"./common/common.h"
#include"./common/initial.h"
int main(int argc, char *argv[])
{
    initial(1);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    a.exec();


    return 0;
}
