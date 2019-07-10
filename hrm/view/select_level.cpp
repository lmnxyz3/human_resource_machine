#include "select_level.h"
#include "ui_select_level.h"

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
