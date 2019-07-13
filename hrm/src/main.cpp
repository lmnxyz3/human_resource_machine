#include "./view/mainwindow.h"
#include <QApplication>
#include"QDebug"
#include"./view/select_level.h"
#include"./common/common.h"
#include"./viewmodel/interpreter.h"
#include"QMessageBox"
#include"begin_window.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    begin_window w0;
    select_level w2;
    Interpreter preter;
    w0.show();
    a.exec();
    if(begin_quit==1)return 0;
    MainWindow w1;
    w1.init_box();
    while(1){
        while(1){
            w1.show();
            if(m_move.size()!=0)
            {
                while(m_move.size()!=0){
                    w1.show();
                    w1.move_step();
                    a.exec();
                    if(quit)break;
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
                if(!quit)w1.show();
            }
            if(quit)break;

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
        quit=0;
        w1.init_box();
        m_move.clear();
        w2.show();
        a.exec();
        if(begin_quit==1)return 0;
        w1.init_box();
    }
    return 0;
}
