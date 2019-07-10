#include"initial.h"

using namespace std;
void initial(int g)
{
    int size,num,i;
    string fname;
    inbox.clear();
    outbox.clear();
    copybox.clear();
    if(g==1)fname="g1.txt";
    if(g==2)fname="g2.txt";
    if(g==3)fname="g3.txt";
    if(g==4)fname="g4.txt";
    if(g==5)fname="g5.txt";

    ifstream infile;
    infile.open(fname);
    infile>>size;
    for(i=0;i<size;i++){
        infile>>num;
        inbox.push_back(num);
    }
    infile>>size;
    for(i=0;i<size;i++){
        infile>>num;
        outbox.push_back(num);
    }
    infile>>size;
    for(i=0;i<size;i++){
        infile>>num;
        copybox.push_back(num);
    }
    infile>>tips;
    infile.close();
}
