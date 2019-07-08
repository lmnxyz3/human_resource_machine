#include "id_control.h"
#include "ui_id_control.h"
#include"QtSql"
#include"QStandardItemModel"
#include"operate2_win.h"
#include"log_win.h"
#include"mainwindow.h"
#include <QMessageBox>

QStandardItemModel *model2 = new QStandardItemModel();
QStandardItemModel *null_model = new QStandardItemModel();
int log_flag;
id_control::id_control(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::id_control)
{
    ui->setupUi(this);
}

id_control::~id_control()
{
    delete ui;
}

void setheader4(Ui::id_control *ui){
    QString select_sql;

    select_sql = "select * from user";
    model2->clear();
    model2->setColumnCount(2);
    model2->setHeaderData(0,Qt::Horizontal,"用户名");
    model2->setHeaderData(1,Qt::Horizontal,"密码");
    int i;
    QSqlQuery m_key;
    m_key.exec(select_sql);

    int num=0;

    do
    {
        QStandardItem* item = 0;
        for(i=0;i<=1;i++){
            item = new QStandardItem(m_key.value(i).toString());
            model2->setItem(num-1,i,item);
        }
        num++;
    }while(m_key.next());
    ui->tableView->setModel(model2);
    ui->tableView->setColumnWidth(0,140);
    ui->tableView->setColumnWidth(1,140);

}
void id_control::on_pushButton_clicked()
{
    setheader4(ui);
}

void id_control::on_pushButton_3_clicked()
{
    log_flag=1;
    flag=1;
    log_win *ptr=new log_win();
    ptr->show();
}

void id_control::on_pushButton_2_clicked()
{
    int num;
    QString num0;
    QSqlQuery book;
    QStandardItem *b_name;
    QModelIndex index=ui->tableView->selectionModel()->currentIndex();
    int iSel = index.row();
    b_name=model2->takeItem(iSel,0);

    QString se_sql="select * from note where u_id='"+b_name->text()+"' and if_return = 0;";
    book.exec(se_sql);
    QString ud_sql;
    while(book.next()){
        ud_sql="update Books set Storge=Storge+1 where BookName='"+book.value(0).toString()+"';";
        book.exec(ud_sql);
    }
    ud_sql="update note set if_return=1 where if_return=0 and u_id='"+b_name->text()+"';";
    book.exec(ud_sql);
    QString de_sql="delete from user where id='"+b_name->text()+"'";
    book.exec(de_sql);
    setheader4(ui);

    QMessageBox::information(this, "success", "删除借书证成功");
}
