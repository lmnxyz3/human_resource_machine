#ifndef HUMAN_H
#define HUMAN_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <cstring>
#include<QString>
using namespace std;
class Human
{
private:
    int  posx,posy;
    bool Carry;
    QString content;

public:
    Human():posx(0),posy(0),Carry(false),content(""){}

    void setpos(int x,int y);
    void setflag(bool ok);
    void setcontent(QString s);
    QString getcontent();
    bool isCarry();
    int  getx();
    int  gety();
};

#endif // HUMAN_H

