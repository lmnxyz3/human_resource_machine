#include "tips.h"
#include "ui_tips.h"

tips::tips(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tips)
{
    ui->setupUi(this);
}

tips::~tips()
{
    delete ui;
}
