#include "returnbook.h"
#include "ui_returnbook.h"
#include"operate1_win.h"
#include"QStandardItemModel"
#include"QtSql"
#include"QMessageBox"
#include"QDebug"
QStandardItemModel *model0 = new QStandardItemModel();
returnbook::returnbook(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::returnbook)
{
    ui->setupUi(this);
}

returnbook::~returnbook()
{
    delete ui;
}

void setheader3(Ui::returnbook *ui){
    QString select_sql;
    select_sql = "select bookname,begin_time from note where u_id='"+u_id+"' and if_return=0";
    model0->setColumnCount(2);
    model0->setHeaderData(0,Qt::Horizontal,"书名");
    model0->setHeaderData(1,Qt::Horizontal,"借书时间");

    int i;
    QSqlQuery m_key;

    m_key.exec(select_sql);
    int num=0;
    do
    {
        QStandardItem* item = 0;
        for(i=0;i<=1;i++){
            item = new QStandardItem(m_key.value(i).toString());
            model0->setItem(num-1,i,item);
        }
        num++;
    }while(m_key.next());
    ui->tableView->setModel(model0);
    ui->tableView->setColumnWidth(0,140);
    ui->tableView->setColumnWidth(1,240);


}

void returnbook::on_pushButton_clicked()
{
    setheader3(ui);
}

void returnbook::on_pushButton_2_clicked()
{
    int num;
    QString num0;
    QSqlQuery book;
    QStandardItem *b_name;
    QStandardItem *b_time;
    QModelIndex index=ui->tableView->selectionModel()->currentIndex();
    int iSel = index.row();
    b_name=model0->takeItem(iSel,0);
    b_time=model0->takeItem(iSel,1);
    QString se_sql="select * from Books where BookName='"+b_name->text()+"';";
    book.exec(se_sql);
    qDebug()<<book.value(8);
    book.next();
    num=book.value(8).toInt()+1;
    qDebug()<<num;
    num0=QString::number(num,10);
    QString update_sql="update Books set Storge = "+ num0 +" where BookName='"+b_name->text()+"';";
    book.exec(update_sql);
    qDebug()<<b_time->text();
    QString remove_sql ="update note set if_return = 1 where bookname='"+b_name->text()+"' and u_id='"+u_id+"';";
    qDebug()<<remove_sql;
    book.exec(remove_sql);
    QMessageBox::information(this, "success", "还书成功");
    setheader3(ui);
}
