#include "findnote.h"
#include "ui_findnote.h"
#include"QtSql"
#include"QStandardItemModel"
#include"mainwindow.h"
#include"operate1_win.h"
findnote::findnote(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::findnote)
{
    ui->setupUi(this);
}

findnote::~findnote()
{
    delete ui;
}
void setheader2(Ui::findnote *ui){
    QString find_str,select_sql;
    QString select_sql2;
    int case_id;
    find_str=ui->word1->toPlainText();
    case_id=ui->comboBox->currentIndex();
    switch(case_id){
        case 0:select_sql = "select * from note";break;
        case 1:select_sql = "select * from note where bookname='"+find_str+"';";break;
        case 2:select_sql = "select * from note where u_id='"+find_str+"';";break;
        case 3:select_sql = "select * from note where if_return='"+find_str+"';";break;

        default:select_sql = "select * from note";break;
    }
    QStandardItemModel *model = new QStandardItemModel();
    model->setColumnCount(4);
    model->setHeaderData(0,Qt::Horizontal,"书名");
    model->setHeaderData(1,Qt::Horizontal,"用户名");
    model->setHeaderData(2,Qt::Horizontal,"借书时间");
    model->setHeaderData(3,Qt::Horizontal,"是否还书");

    int i;
    QSqlQuery m_key;
    m_key.exec(select_sql);

    int num=0;

    do
    {
        QStandardItem* item = 0;
        if(flag==1&&m_key.value(1).toString()!=u_id){num++;continue;}
        for(i=0;i<=3;i++){
            item = new QStandardItem(m_key.value(i).toString());
            model->setItem(num-1,i,item);
        }
        num++;
    }while(m_key.next());
    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth(0,140);
    ui->tableView->setColumnWidth(1,140);
    ui->tableView->setColumnWidth(2,250);
    ui->tableView->setColumnWidth(3,100);

}

void findnote::on_pushButton_clicked()
{
    setheader2(ui);
}
