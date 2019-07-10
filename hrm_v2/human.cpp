#include "human.h"

void Human::setpos(int x,int y){
    this->posx = x;
    this->posy = y;
}

void Human::setflag(bool ok){
    this->Carry = ok;
}
void Human::setcontent(QString s){
    this->content = s;
}

int Human::getx(){
    return this->posx;
}

int Human::gety(){
    return this->posy;
}

QString Human::getcontent(){
    return this->content;
}

bool Human::isCarry(){
    return this->Carry;
}
