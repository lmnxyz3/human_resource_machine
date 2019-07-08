#include "findbook.h"
#include "ui_findbook.h"
#include <QTableWidget>
#include"QStandardItemModel"
#include<QtSql>
#include"QDebug"
#include"QDateTime"
#include"operate1_win.h"
#include"QMessageBox"
#include"QString"
QStandardItemModel *model = new QStandardItemModel();
findBook::findBook(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::findBook)
{
    ui->setupUi(this);
}

findBook::~findBook()
{
    delete ui;
}
void setheader(Ui::findBook *ui){
    model->clear();
    QString find_str;
    model->setColumnCount(9);
    model->setHeaderData(0,Qt::Horizontal,"书号");
    model->setHeaderData(1,Qt::Horizontal,"类别");
    model->setHeaderData(2,Qt::Horizontal,"书名");
    model->setHeaderData(3,Qt::Horizontal,"出版社");
    model->setHeaderData(4,Qt::Horizontal,"年份");
    model->setHeaderData(5,Qt::Horizontal,"作者");
    model->setHeaderData(6,Qt::Horizontal,"价格");
    model->setHeaderData(7,Qt::Horizontal,"书量");
    model->setHeaderData(8,Qt::Horizontal,"库存");
    int i;
    QSqlQuery m_key;
    int case_id;
    case_id=ui->comboBox->currentIndex();
    qDebug()<<case_id;
    QString select_sql;
    find_str=ui->word1->toPlainText();
    switch(case_id){
        case 0:select_sql = "select * from Books";break;
        case 1:select_sql = "select * from Books where BookType='"+find_str+"';";break;
        case 2:select_sql = "select * from Books where BookName='"+find_str+"';";break;
        case 3:select_sql = "select * from Books where Publisher='"+find_str+"';";break;
        case 4:select_sql = "select * from Books where Year="+ find_str +";";break;
        case 5:select_sql = "select * from Books where Author='"+find_str+"';";break;
        case 6:select_sql = "select * from Books where Price="+ find_str +";";break;
        default:select_sql = "select * from Books";break;
    }
    m_key.exec(select_sql);
    int num=0;
    do
    {
        QStandardItem* item = 0;
        for(i=0;i<=8;i++){
            item = new QStandardItem(m_key.value(i).toString());
            model->setItem(num-1,i,item);
        }
        num++;
    }while(m_key.next());
    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth(0,55);
    ui->tableView->setColumnWidth(1,105);
    ui->tableView->setColumnWidth(2,140);
    ui->tableView->setColumnWidth(3,100);
    ui->tableView->setColumnWidth(4,80);
    ui->tableView->setColumnWidth(5,100);
    ui->tableView->setColumnWidth(6,90);
    ui->tableView->setColumnWidth(7,80);
    ui->tableView->setColumnWidth(8,80);
}

void findBook::on_pushButton_clicked()
{
    setheader(ui);

}




void findBook::on_push2_clicked()
{
    int num;
    QString num0;
    QStandardItem *b_name,*b_id;
    QDateTime current_date_time =QDateTime::currentDateTime();
    QString current_date =QDateTime::currentDateTime().toString();
    QModelIndex index=ui->tableView->selectionModel()->currentIndex();
    int iSel = index.row();
    b_name=model->takeItem(iSel,2);
    b_id=model->takeItem(iSel,0);
    num=model->takeItem(iSel,8)->text().toInt();
    if(num<=0){
        QMessageBox::information(this, "error", "书余量不足");
        setheader(ui);
        return;
    }
    num--;
    num0=QString::number(num,10);
    QSqlQuery book;
    QString update_sql="update Books set Storge = "+ num0 +" where BookNo='"+b_id->text()+"'";
    book.exec(update_sql);
    QString insert_sql ="insert into note values('"+b_name->text()+"','"+u_id+"','"+current_date+"',0)";
    book.exec(insert_sql);
    QMessageBox::information(this, "success", "借书成功");
    setheader(ui);
}
