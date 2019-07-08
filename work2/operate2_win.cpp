#include "operate2_win.h"
#include "ui_operate2_win.h"
#include"mainwindow.h"
#include"findbook.h"
#include"returnbook.h"
#include"operate1_win.h"
#include"findnote.h"
#include"tips.h"

operate2_win::operate2_win(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::operate2_win)
{
    ui->setupUi(this);
    ui->word1->setText("用户："+u_id);
}

operate2_win::~operate2_win()
{
    delete ui;
}

void operate2_win::on_pushButton_2_clicked()
{
    returnbook* ptr=new returnbook();
    ptr->show();
}

void operate2_win::on_pushButton_clicked()
{
    findBook* ptr=new findBook();
    ptr->show();
}

void operate2_win::on_pushButton_3_clicked()
{
    findnote* ptr=new findnote();
    ptr->show();
}

void operate2_win::on_pushButton_4_clicked()
{
    tips*ptr=new tips();
    ptr->show();
}
