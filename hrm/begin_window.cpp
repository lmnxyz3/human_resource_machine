#include "begin_window.h"
#include "ui_begin_window.h"
#include"./common/common.h"
#include"./view/select_level.h"

begin_window::begin_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::begin_window)
{
    ui->setupUi(this);
}

begin_window::~begin_window()
{
    delete ui;
}

void begin_window::on_pushButton_clicked()
{
    this->close();
    select_level *se=new select_level();
    se->show();
}

void begin_window::on_pushButton_3_clicked()
{
    this->close();
    begin_quit=1;
}
