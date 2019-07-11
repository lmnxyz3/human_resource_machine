#include "interpreter.h"

bool Interpreter::Interpreter_Step(){

    QString s = stringVector.at(state.command_ptr);
    QStringList word = s.split(" ");
    if ( word.at(0)=="inbox" ){
        if(state.pin>=inbox.size())return false;
        state.p->setpos(my_left);
        state.p->setcarry(true);
        state.p->setcontent(state.in_box[state.pin++]);
    }
    else if (word.at(0)=="outbox"){
        state.p->setpos(my_right);
        if (state.p->getcarry()){
            state.out_box[state.pout++] = state.p->getcontent();
            state.p->setcarry(false);
        }
    }
    else if (word.at(0)=="copyto") {
        int temp = word.at(1).toInt();
        state.p->setpos(my_mid);
        if (state.p->getcarry()){
            state.copybox_item[temp] = state.p->getcontent();
            state.copybox_flag[temp] = true;
        }
    }
    else if (word.at(0)=="copyfrom") {
        int temp = word.at(1).toInt();
        state.p->setpos(my_mid);
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
        state.p->setpos(my_mid);
        if (state.p->getcarry())
            state.p->setcontent(n1+n2);
    }
    else if (word.at(0)=="sub") {
        int temp = word.at(1).toInt();
        int n1 = state.p->getcontent();
        int n2 = 0;
        if (state.copybox_flag[temp])
            n2 = state.copybox_item[temp];
        state.p->setpos(my_mid);
        if (state.p->getcarry())
            state.p->setcontent(n1-n2);
    }
    common new_state=common(state);
    m_move.push_back(new_state);
    if (word.at(0)=="jump") {
        if (word.at(1)=="if"){
            if (word.at(2)=="zero"){
                if (state.p->getcontent() == 0){
                    state.command_ptr = word.at(3).toInt()-1;
                }
                else state.command_ptr++;
            }
            else if (word.at(2)=="negative"){
                if (state.p->getcontent() < 0){
                    state.command_ptr = word.at(3).toInt()-1;
                }
                else state.command_ptr++;
            }
        }
        else{
            state.command_ptr = word.at(1).toInt()-1;
        }
    }
    else
        state.command_ptr++;

    return true;
}

void Interpreter::Interpreter_All(){
    int num=0;
    bool flag;
    flag=true;
    QVector<int>::iterator  j;
    int k;
    ifsuccess = 1;
    for (k=0,j = inbox.begin();j!=inbox.end();k++,j++ ){
        state.in_box[k] = inbox.at(k);
    }

    for (k=0,j = copybox.begin();j!=copybox.end();k++,j++ ){
        state.copybox_item[k] = copybox.at(k);
        if (state.copybox_item[k]!=-1){
            state.copybox_flag[k] = true;
        }
    }

    while(state.command_ptr<stringVector.size()&&state.pout<outbox.size()&&flag&&num<=100){
          flag=Interpreter_Step();
          num++;
    }

    if (state.pout == outbox.size()){
        for ( k = 0; k < state.pout; k++ ){
            if (state.out_box[k] != outbox.at(k))
                break;
        }
        if ( k == state.pout ){
              ifsuccess = 2;
        }
    }

}
void Interpreter::init_interpreter()
{
    state.pin=0;
    state.pout=0;
    state.p->setpos(my_left);
    state.p->setcarry(false);
    state.p->setcontent(0);
    state.command_ptr=0;
    for(int i=0;i<6;i++)state.copybox_flag[i]=false;
}
