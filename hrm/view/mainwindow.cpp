#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"QStandardItemModel"
#include"qinputdialog.h"
#include"QString"
#include"QLabel"
#include <QPropertyAnimation>
#include<qdebug.h>
#include<QScreen>
#include"QVector"

QStandardItemModel *model = new QStandardItemModel();
QVector<QString> stringVector;
int iSel=0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QScreen *screen=QGuiApplication::primaryScreen ();
    QRect mm=screen->availableGeometry() ;


    QPixmap pixmap = QPixmap(":/resource/main0.jpg");
    QPalette  palette (this->palette());
    palette.setBrush(this->backgroundRole(),QBrush(pixmap.scaled(this->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation)));
    this-> setPalette( palette );

    ui->setupUi(this);
    ui->pushButton_2->setStyleSheet("background-image:url(:/resource/button1.png)");

    ui->label->setStyleSheet("background-image:url(:/resource/man1.png);color:rgb(84, 83, 20);");
    ui->label->setContentsMargins(28,0,0,35);
    ui->label->setText("13");
    ui->label->setGeometry(155,420,68,68);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void setheader(Ui::MainWindow *ui){
    model->clear();
    model->setColumnCount(1);
    QColor c;
    c.setRgb(0,120,215);
    model->setHeaderData(0,Qt::Horizontal,"command");
    QStandardItem* item = 0;
    for(int i=0;i<stringVector.size();i++){
        item = new QStandardItem(stringVector.at(i));
        model->setItem(i,0,item);
        model->item(i,0)->setTextAlignment(Qt::AlignCenter);
    }
    if(stringVector.size()!=0)model->item(iSel,0)->setBackground(QBrush(c));
    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth(0,220);
}


void MainWindow::on_pushButton_6_clicked()
{
    QString new_item;
    new_item="inbox";
    stringVector.push_back(new_item);
    iSel=stringVector.size()-1;
    setheader(ui);
}

void MainWindow::on_pushButton_7_clicked()
{
    QString new_item;
    new_item="outbox";
    stringVector.push_back(new_item);
    iSel=stringVector.size()-1;
    setheader(ui);
}

void MainWindow::on_pushButton_8_clicked()
{
    QString new_item;
    new_item="copyto ";
    QInputDialog *qinput=new QInputDialog();
    QString num_s=qinput->getText(this,"input","input copyto pos");
    new_item=new_item+num_s;
    stringVector.push_back(new_item);
    iSel=stringVector.size()-1;
    setheader(ui);
}


void MainWindow::on_pushButton_9_clicked()
{
    QString new_item;
    new_item="copyfrom ";
    QInputDialog *qinput=new QInputDialog();
    QString num_s=qinput->getText(this,"input","input copyfrom pos");
    new_item=new_item+num_s;
    stringVector.push_back(new_item);
    iSel=stringVector.size()-1;
    setheader(ui);
}

void MainWindow::on_pushButton_10_clicked()
{
    QString new_item;
    new_item="add ";
    QInputDialog *qinput=new QInputDialog();

    QString num_s=qinput->getText(this,"input","input add pos");
    new_item=new_item+num_s;
    stringVector.push_back(new_item);
    iSel=stringVector.size()-1;
    setheader(ui);
}


void MainWindow::on_pushButton_11_clicked()
{
    QString new_item;
    new_item="sub ";
    QInputDialog *qinput=new QInputDialog();

    QString num_s=qinput->getText(this,"input","input sub pos");
    new_item=new_item+num_s;
    stringVector.push_back(new_item);
    iSel=stringVector.size()-1;
    setheader(ui);
}

void MainWindow::on_pushButton_12_clicked()
{
    QString new_item;
    new_item="jump ";

    QInputDialog *qinput=new QInputDialog();

    QString num_s=qinput->getText(this,"input","input jump line");
    new_item=new_item+num_s;
    stringVector.push_back(new_item);
    iSel=stringVector.size()-1;
    setheader(ui);
}

void MainWindow::on_pushButton_13_clicked()
{
    QString new_item;
    new_item="jump if zero ";
    QInputDialog *qinput=new QInputDialog();

    QString num_s=qinput->getText(this,"input","input jump line");
    new_item=new_item+num_s;
    stringVector.push_back(new_item);
    iSel=stringVector.size()-1;
    setheader(ui);
}

void MainWindow::on_pushButton_14_clicked()
{
    QString new_item;
    new_item="jump if negative ";
    QInputDialog *qinput=new QInputDialog();

    QString num_s=qinput->getText(this,"input","input jump line");
    new_item=new_item+num_s;
    stringVector.push_back(new_item);
    iSel=stringVector.size()-1;
    setheader(ui);
}

void MainWindow::on_pushButton_17_clicked()
{
    QModelIndex index=ui->tableView->selectionModel()->currentIndex();
    if(index.row()>=0)iSel = index.row();
    stringVector.remove(iSel);
    iSel=0;
    setheader(ui);
}

void MainWindow::on_pushButton_18_clicked()
{
    stringVector.clear();
    iSel=0;
    setheader(ui);
}

void MainWindow::on_pushButton_15_clicked()
{
    QString s1;
    QModelIndex index=ui->tableView->selectionModel()->currentIndex();
    if(index.row()>=0)iSel = index.row();
    if(iSel==0)return;
    swap(stringVector[iSel],stringVector[iSel-1]);
    iSel--;
    setheader(ui);
}

void MainWindow::on_pushButton_16_clicked()
{
    QString s1;
    QModelIndex index=ui->tableView->selectionModel()->currentIndex();
    if(index.row()>=0)iSel = index.row();
    if(iSel>=stringVector.size()-1)return;
    swap(stringVector[iSel],stringVector[iSel+1]);
    iSel++;
    setheader(ui);
}


void MainWindow::on_pushButton_clicked()
{
    QPropertyAnimation *animation = new QPropertyAnimation(ui->label, "geometry");
    animation->setDuration(1000);
        /*  设置动画的起始状态   */

        animation->setStartValue(QRect(155, 420, 68, 68));
        /*  设置动画的结束状态   */
        animation->setKeyValueAt(1, QRect(520, 420, 68, 68));

        /*  设置动画效果  */

        /*  开始执行动画 QAbstractAnimation::DeleteWhenStopped 动画结束后进行自清理(效果就好像智能指针里的自动delete animation) */
        animation->start(QAbstractAnimation::DeleteWhenStopped);
}



void MainWindow::on_pushButton_3_clicked()
{
    this->close();
}
