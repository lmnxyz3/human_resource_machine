#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<qdebug.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QPixmap pixmap = QPixmap(":/resource/main0.jpg");
    this->resize(1300,930);
    this->setAutoFillBackground(true);
    QPalette  palette (this->palette());
    palette.setBrush(this->backgroundRole(),QBrush(pixmap.scaled(this->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation)));
    this-> setPalette( palette );

    ui->setupUi(this);
    ui->pushButton_2->setStyleSheet("background-image:url(:/resource/button1.png)");
}

MainWindow::~MainWindow()
{
    delete ui;
}
