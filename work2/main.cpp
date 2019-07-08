#include "mainwindow.h"
#include"tips.h"
#include <QApplication>
#include <QtSql>

QSqlDatabase database;
int main(int argc, char *argv[])
{
    if (QSqlDatabase::contains("qt_sql_default_connection"))
    {
        database = QSqlDatabase::database("qt_sql_default_connection");
    }
    else
    {
        database = QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName("MyDataBase.db");
        database.setUserName("minnix");
        database.setPassword("123456");
    }
    database.open();
    QSqlQuery m_key;
    QString select_sql = "select id, password from manager";
    if(!m_key.exec(select_sql))
    {
        qDebug()<<m_key.lastError();
    }
    else
    {
        while(m_key.next())
        {
            QString id = m_key.value(0).toString();
            QString name = m_key.value(1).toString();
            qDebug()<<QString("id:%1    name:%2").arg(id).arg(name);
        }
    }
    QSqlQuery u_key;
    select_sql = "select id, password from user";
    if(!u_key.exec(select_sql))
    {
        qDebug()<<u_key.lastError();
    }
    else
    {
        while(m_key.next())
        {
            QString id = u_key.value(0).toString();
            QString name = u_key.value(1).toString();
            qDebug()<<QString("id:%1    name:%2").arg(id).arg(name);
        }
    }
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

