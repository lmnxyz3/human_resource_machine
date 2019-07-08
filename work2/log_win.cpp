#include "log_win.h"
#include "ui_log_win.h"
#include <QtSql>
#include <QMessageBox>
#include"operate1_win.h"
#include"log_win.h"
#include"mainwindow.h"
#include"operate2_win.h"
#include"id_control.h"
QString u_id;

log_win::log_win(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::log_win)
{
    ui->setupUi(this);
    if(flag==1||log_flag==1)ui->word3->setText("注册用户");
    else if(flag==2)ui->word3->setText("添加管理员");
    else ui->word3->setText("登录");

    ui->word3->setAlignment(Qt::AlignCenter);
}

log_win::~log_win()
{
    delete ui;
}

int find_user(QString str1,QString str2){
    QSqlQuery m_key;
    QSqlQuery u_key;
    if(flag){
        QString select_sql = "select * from manager where id='"+str1+"'";
        m_key.exec(select_sql);
        select_sql = "select * from user where id='"+str1+"'";
        u_key.exec(select_sql);
        if(m_key.next()||u_key.next())return 1;
        return 0;
    }
    QString select_sql = "select * from manager where id='"+str1+"' and password='"+str2+"'";
    m_key.exec(select_sql);
    if(m_key.next())return 2;
    select_sql = "select * from user where id='"+str1+"' and password='"+str2+"'";
    u_key.exec(select_sql);
    if(u_key.next())return 1;
    return 0;
}
void log_win::on_pushButton_clicked()
{
    QString id,password;
    int find_flag;
    id=ui->word1->toPlainText();
    password=ui->word2->toPlainText();
    find_flag=find_user(id,password);
    if(flag==0){
        if(find_flag!=0){
            if(QMessageBox::information(this, "welcome", "登录成功",QMessageBox::Yes)==QMessageBox::Yes){
                flag=find_flag;
                u_id=id;
                this->close();
                if(find_flag==2){
                    operate1_win *ptr=new operate1_win();
                    ptr->show();
                }
                else {
                    operate2_win *ptr=new operate2_win();
                    ptr->show();
                }

            }
        }
        if(find_flag==0)QMessageBox::information(this, "error", "账户名或密码错误");
    }
    else{
        if(find_flag==1){
            QMessageBox::information(this, "error", "该账户名已存在");
        }
        else{
            QSqlQuery db1;
            if(flag==2)
            {
                QString insert_sql="insert into manager values('"+id+"','"+password+"')";
                db1.exec(insert_sql);
            }
            else
            {
                QString insert_sql="insert into user values('"+id+"','"+password+"')";
                db1.exec(insert_sql);
            }
            if(QMessageBox::information(this, "welcome", "注册成功",QMessageBox::Yes)==QMessageBox::Yes){
                u_id=id;
                this->close();
                if(log_flag==0){
                    MainWindow *ptr=new MainWindow();
                    ptr->show();
                }
            }
        }
    }
}

void log_win::on_pushButton_2_clicked()
{
    this->close();
    if(log_flag==0){
        MainWindow *ptr=new MainWindow();
        ptr->show();
    }
}
