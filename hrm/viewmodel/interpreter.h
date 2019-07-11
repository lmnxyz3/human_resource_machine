#ifndef INTERPRETER_H
#define INTERPRETER_H
#include<QVector>
#include<QString>
#include "./common/common.h"

class Interpreter
{
public: 
    common state;
    Interpreter()=default;
    void Interpreter_All();
    bool Interpreter_Step();
    void Interpreter::init_interpreter();
};

#endif // INTERPRETER_H
