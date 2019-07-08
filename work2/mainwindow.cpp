#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "string"
#include "log_win.h"
#include <QDockWidget>
#include<QLabel>
#include <QResizeEvent>
#include<QDebug>
#include"id_control.h"
#include"tips.h"
int flag;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    this->close();
    flag=0;
    log_flag=0;
    log_win *ptr=new log_win();
    ptr->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    this->close();
    flag=1;
    log_flag=0;
    log_win *ptr=new log_win();
    ptr->show();
}

void MainWindow::on_pushButton_3_clicked()
{

    tips *ptr=new tips();
    ptr->show();
}
