#ifndef COMMON_H
#define COMMON_H
#include<iostream>
#include"QVector"
#include"QQueue"
#include"string"

#define my_left 0
#define my_mid 1
#define my_right 2

class person
{
    int pos;
    bool carry;
    int content;
public:
    person(){
        pos=0;
        carry=false;
        content=0;
    }
    ~person();
    void setpos(int p){pos = p;}
    void setcarry(bool ok){carry = ok;}
    void setcontent(int s){content = s;}

    int getpos(){return pos;}
    bool getcarry(){return carry;}
    int getcontent(){return content;}
};

class common
{
public:
    int in_box[20];
    int pin;
    int pout;
    int out_box[20];

    bool copybox_flag[6];
    int copybox_item[6];

    person *p=new person;

    int command_ptr;
    common(){
        pin = 0;
        pout = 0;
        command_ptr=0;
        for(int i=0;i<6;i++)copybox_flag[i]=false;
    }
    common(const common &obj);
};
extern QVector<int> inbox;
extern QVector<int> outbox;
extern QVector<int> copybox;
extern QString tips;
extern QVector<QString> stringVector;
extern QQueue< common> m_move;
extern int quit;
extern int begin_quit;
extern int stop;
extern int complete;
extern int ifsuccess;
extern int num_step;
#endif
