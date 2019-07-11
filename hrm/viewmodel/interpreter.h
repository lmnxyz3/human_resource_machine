#ifndef INTERPRETER_H
#define INTERPRETER_H
#include<QVector>
#include<QString>
#include "./common/common.h"

class Interpreter
{
public: 
    common state;
    bool ifsuccess;
    Interpreter();
    void Interpreter_All();
    void Interpreter_Step();
};

#endif // INTERPRETER_H
