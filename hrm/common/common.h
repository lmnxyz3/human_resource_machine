#ifndef COMMON_H
#define COMMON_H
#include<iostream>
#include"QVector"
#include"QQueue"
#include"string"

#define left 0
#define mid 1
#define right 2

class person
{
    int pos;
    bool carry;
    QString content;
public:
    person(){
        pos=0;
        carry=false;
        content="";
    }
    ~person();
};
class common
{
    int in_box[20];
    int in_ptr;
    int out_box[20];
    int out_ptr;

    bool copybox_flag[6];
    int copybox_item[6];

    person *p=new person;
    
    int command_ptr;
    common(){
        in_ptr=0;
        out_ptr=0;
        command_ptr=0;
        for(int i=0;i<6;i++)copybox_flag[i]=false;
    }
};
extern QVector<int> inbox;
extern QVector<int> outbox;
extern QVector<int> copybox;
extern std::string tips;
extern QVector<QString> stringVector;
extern QQueue< common> move;
#endif
