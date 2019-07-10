#include "./view/mainwindow.h"
#include <QApplication>
#include"QDebug"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    a.exec();


    return 0;
}
