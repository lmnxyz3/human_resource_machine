#include "addbooks.h"
#include "ui_addbooks.h"
#include"QDebug"
#include"QtSql"
#include <QMessageBox>
#include"operate1_win.h"

addbooks::addbooks(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::addbooks)
{
    ui->setupUi(this);
}

addbooks::~addbooks()
{
    delete ui;
}

void addbooks::on_pushButton_clicked()
{
    QString str1;
    QString str[9];
    QChar c;
    int j,i,error=0;
    int c_begin;
    str1=ui->word1->toPlainText();

    j=-1;
    while(1){
        for(i=1;i<=8;i++){
            c_begin=j+1;
            j++;
            while(j<=str1.length()-1&&str1[j]!=','&&str1[j]!='\n'&&str1[j]!='，'){

                j++;
            }
            str[i]=str1.mid(c_begin,j-c_begin);

        }
        QSqlQuery book;
        QString add_sql = "insert into Books values('"+str[1]+"','"+str[2]+"','"+str[3]+"','"+str[4]+"', "+ str[5] +" ,'"+str[6]+"',"+ str[7] +","+ str[8] +","+ str[8] +");";
        qDebug()<<add_sql;
        if(!book.exec(add_sql)){
            error=1;break;
        }
        if(j>=str1.length()-1)break;

    }
    if(error)QMessageBox::information(this, "error", "插入失败");
    else QMessageBox::information(this, "success", "插入成功");
}

void addbooks::on_pushButton_2_clicked()
{
    this->close();

}
