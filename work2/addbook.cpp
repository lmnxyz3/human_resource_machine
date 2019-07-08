#include "addbook.h"
#include "ui_addbook.h"
#include<QtSql>
#include <QMessageBox>
addbook::addbook(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::addbook)
{
    ui->setupUi(this);
}

addbook::~addbook()
{
    delete ui;
}

void addbook::on_pushButton_clicked()
{
    QString str[9];

    str[1]=ui->word1->toPlainText();
    str[2]=ui->word2->toPlainText();
    str[3]=ui->word3->toPlainText();
    str[4]=ui->word4->toPlainText();
    str[5]=ui->word5->toPlainText();
    str[6]=ui->word6->toPlainText();
    str[7]=ui->word7->toPlainText();
    str[8]=ui->word8->toPlainText();
    QSqlQuery book;
    QString add_sql = "insert into Books values('"+str[1]+"','"+str[2]+"','"+str[3]+"','"+str[4]+"', "+ str[5] +" ,'"+str[6]+"',"+ str[7] +","+ str[8] +","+ str[8] +");";
    qDebug()<<add_sql;
    if(!book.exec(add_sql)){
        QMessageBox::information(this, "error", "插入失败");
    }
    else QMessageBox::information(this, "success", "插入成功");
}

void addbook::on_pushButton_2_clicked()
{
    this->close();
}
