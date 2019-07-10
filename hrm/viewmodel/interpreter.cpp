#include "interpreter.h"

void Interpreter::Interpreter_Step(){
    QString s = sv->at(currentcode);
    QStringList word = s.split(" ");
    currentcode++;
    if ( word.at(0)=="inbox" ){

    }
    else if (word.at(0)=="outbox"){

    }
    else if (word.at(0)=="copyto") {

    }
    else if (word.at(0)=="copyfrom") {

    }
    else if (word.at(0)=="add") {
        QString temp = character->getcontent();
        int t = temp.toInt();
        int incre = word.at(1).toInt();
        character->setcontent(QString::number(t+incre));
    }
    else if (word.at(0)=="sub") {
        QString temp = character->getcontent();
        int t = temp.toInt();
        int decre = word.at(1).toInt();
        character->setcontent(QString::number(t-decre));
    }
    else if (word.at(0)=="jump") {
        if (word.at(1)=="if"){
            if (word.at(2)=="zero"){
                if (character->getcontent().toInt()==0){
                    currentcode = word.at(3).toInt();
                }
            }
            else if (word.at(2)=="negative"){
                if (character->getcontent().toInt()<0){
                    currentcode = word.at(3).toInt();
                }
            }
        }
        else{
            currentcode = word.at(1).toInt();
        }
    }

}

void Interpreter::Interpreter_All(){
      QVector<QString>::iterator i;
    for (i=sv->begin();i!=sv->end();i++){
          Interpreter_Step();
    }
}
