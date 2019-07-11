#ifndef INTERPRETER_H
#define INTERPRETER_H
#include<QVector>
#include<QString>
#include "./common/common.h"

class Interpreter
{
public: 
    common state;
<<<<<<< HEAD
    Interpreter()=default;
=======
    bool ifsuccess;
    Interpreter();
>>>>>>> de1cf0497ff3c131ace210238f7cddf74d47a623
    void Interpreter_All();
    bool Interpreter_Step();
    void Interpreter::init_interpreter();
};

#endif // INTERPRETER_H
