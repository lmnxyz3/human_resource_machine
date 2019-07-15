#include "help_window.h"
#include "ui_help_window.h"
#include"begin_window.h"

help_window::help_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::help_window)
{
    ui->setupUi(this);
}

help_window::~help_window()
{
    delete ui;
}

void help_window::on_pushButton_clicked()
{
    this->close();
    begin_window *begin_w=new begin_window();
    begin_w->show();
}
