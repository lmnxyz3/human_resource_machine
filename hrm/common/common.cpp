#include<iostream>
#include"QVector"
#include"QQueue"
#include"string"
#include"common.h"
QVector<int> inbox;
QVector<int> outbox;
QVector<int> copybox;
QString tips;
QVector<QString> stringVector;
QQueue<common> m_move;
int quit,complete,stop;
int ifsuccess=0;
common::common(const common &obj)
{
    pin = obj.pin;
    pout = obj.pout;
    command_ptr=obj.command_ptr;
    for(int i=0;i<20;i++){
        in_box[i]=obj.in_box[i];
        out_box[i]=obj.out_box[i];
    }
    for(int i=0;i<6;i++){
        copybox_flag[i]=obj.copybox_flag[i];
        copybox_item[i]=obj.copybox_item[i];
    }
    p->setpos(obj.p->getpos());
    p->setcarry(obj.p->getcarry());
    p->setcontent(obj.p->getcontent());

}
