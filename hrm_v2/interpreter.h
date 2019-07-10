#ifndef INTERPRETER_H
#define INTERPRETER_H
#include<QVector>
#include<QString>
#include "human.h"

class Interpreter
{
public: 
    Interpreter();
    Interpreter( QVector<QString> *s,Human* human):sv(s),character(human){}

    QVector<QString> *sv;
    Human *character;
    int currentcode; //current code in sv to interprete
    void Interpreter_All();
    void Interpreter_Step();
};

#endif // INTERPRETER_H
