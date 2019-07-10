#include "select_level.h"
#include "ui_select_level.h"
#include"./common/initial.h"

select_level::select_level(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::select_level)
{
    ui->setupUi(this);
}

select_level::~select_level()
{
    delete ui;
}

void select_level::on_pushButton_clicked()
{
    initial(1);
    this->close();
}

void select_level::on_pushButton_2_clicked()
{
    initial(2);
    this->close();
}

void select_level::on_pushButton_3_clicked()
{
    initial(3);
    this->close();
}

void select_level::on_pushButton_4_clicked()
{
    initial(4);
    this->close();
}

void select_level::on_pushButton_5_clicked()
{
    initial(5);
    this->close();
}
