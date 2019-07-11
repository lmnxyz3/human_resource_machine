#include "interpreter.h"

void Interpreter::Interpreter_Step(){

    QString s = stringVector.at(state.command_ptr);
    QStringList word = s.split(" ");
    state.command_ptr++;
    if ( word.at(0)=="inbox" ){
        state.p->setpos(left);
        state.p->setcarry(true);
        state.p->setcontent(state.in_box[state.pin++]);
    }
    else if (word.at(0)=="outbox"){
        state.p->setpos(right);
        if (state.p->getcarry()){
            state.out_box[state.pout++] = state.p->getcontent();
            state.p->setcarry(false);
        }
    }
    else if (word.at(0)=="copyto") {
        int temp = word.at(1).toInt();
        state.p->setpos(mid);
        if (state.p->getcarry()){
            state.copybox_item[temp] = state.p->getcontent();
            state.copybox_flag[temp] = true;
        }
    }
    else if (word.at(0)=="copyfrom") {
        int temp = word.at(1).toInt();
        state.p->setpos(mid);
        if (state.copybox_flag[temp]){
           state.p->setcontent(state.copybox_item[temp]);
           state.p->setcarry(true);
        }
    }
    else if (word.at(0)=="add") {
        int temp = word.at(1).toInt();
        int n1 = state.p->getcontent();
        int n2 = 0;
        if (state.copybox_flag[temp])
            n2 = state.copybox_item[temp];
        state.p->setpos(mid);
        if (state.p->getcarry())
            state.p->setcontent(n1+n2);
    }
    else if (word.at(0)=="sub") {
        int temp = word.at(1).toInt();
        int n1 = state.p->getcontent();
        int n2 = 0;
        if (state.copybox_flag[temp])
            n2 = state.copybox_item[temp];
        state.p->setpos(mid);
        if (state.p->getcarry())
            state.p->setcontent(n1-n2);
    }
    else if (word.at(0)=="jump") {
        if (word.at(1)=="if"){
            if (word.at(2)=="zero"){
                if (state.p->getcontent() == 0){
                    state.command_ptr = word.at(3).toInt();
                }
            }
            else if (word.at(2)=="negative"){
                if (state.p->getcontent() < 0){
                    state.command_ptr = word.at(3).toInt();
                }
            }
        }
        else{
            state.command_ptr = word.at(1).toInt();
        }
    }

    move.push_back(state);
}

void Interpreter::Interpreter_All(){
    QVector<QString>::iterator i;
    QVector<int>::iterator  j;
    int k;
    ifsuccess = false;
    for (k=0,j = inbox.begin();j!=inbox.end();k++,j++ ){
        state.in_box[k] = inbox.at(k);
    }

    for (k=0,j = copybox.begin();j!=copybox.end();k++,j++ ){
        state.copybox_item[k] = copybox.at(k);
        if (state.copybox_item[k]!=-1){
            state.copybox_flag[k] = true;
        }
    }

    for ( i=stringVector.begin();i!=stringVector.end();i++){
          Interpreter_Step();
    }

    if (state.pout+1 == outbox.size()){
        for ( k = 0; k < state.pout; k++ ){
            if (state.out_box[k] != outbox.at(k))
                break;
        }
        if ( k == state.pout ){
              ifsuccess = true;
        }
    }

}
