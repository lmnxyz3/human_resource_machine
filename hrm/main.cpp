#include "./view/mainwindow.h"
#include <QApplication>
#include"QDebug"
#include"./view/select_level.h"
#include"./common/common.h"
#include"./viewmodel/interpreter.h"
#include"QMessageBox"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    select_level w0;
    Interpreter preter;
    w0.show();
    a.exec();
    MainWindow w1;
    QColor c,w;
    w.setRgb(255,255,255);
    c.setRgb(0,120,215);
    w1.init_box();
    while(1){
        w1.show();
        if(m_move.size()!=0)
        {
            while(m_move.size()!=0){
                w1.show();
                w1.move_step();
                a.exec();
                if(quit)return 0;
                if(complete==1){
                    while(m_move.size()>1)m_move.pop_front();
                    complete=0;
                }
                if(stop==1){
                    while(m_move.size()>0)m_move.pop_front();
                    stop=0;
                    ifsuccess=0;
                }
            }
            w1.show();
        }
        if(quit)break;
        if(ifsuccess==2){
            ifsuccess=0;
            QMessageBox::information(&w1,"success", "任务成功");
            w1.init_box();
            w1.init_mainwindow();

        }
        else if(ifsuccess==1){
            ifsuccess=0;
            QMessageBox::information(&w1,"error","任务失败");
            w1.init_box();
            w1.init_mainwindow();
        }
        a.exec();

        if(quit)break;
        w1.hide();
        preter.init_interpreter();
        preter.Interpreter_All();
        if(complete==1){
            while(m_move.size()>1)m_move.pop_front();
            complete=0;
        }
    }
    return 0;
}
