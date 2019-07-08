#include "operate1_win.h"
#include "ui_operate1_win.h"
#include"mainwindow.h"
#include"findbook.h"
#include"addbook.h"
#include"addbooks.h"
#include"log_win.h"
#include"findnote.h"
#include"tips.h"
#include"id_control.h"
#include"returnbook.h"

operate1_win::operate1_win(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::operate1_win)
{
    ui->setupUi(this);

    ui->word1->setText("管理员："+u_id);

}


operate1_win::~operate1_win()
{
    delete ui;
}

void operate1_win::on_pushButton_clicked()
{
    findBook* ptr=new findBook();
    ptr->show();
}

void operate1_win::on_pushButton_2_clicked()
{
    addbook* ptr=new addbook();
    ptr->show();
}

void operate1_win::on_pushButton_3_clicked()
{
    log_win* ptr=new log_win();
    ptr->show();
    flag=2;
}

void operate1_win::on_pushButton_5_clicked()
{
    addbooks* ptr=new addbooks();
    ptr->show();
}

void operate1_win::on_pushButton_4_clicked()
{
    findnote* ptr=new findnote();
    ptr->show();
}

void operate1_win::on_pushButton_6_clicked()
{
    returnbook* ptr=new returnbook();
    ptr->show();
}

void operate1_win::on_pushButton_7_clicked()
{
    id_control* ptr=new id_control();
    ptr->show();
}
