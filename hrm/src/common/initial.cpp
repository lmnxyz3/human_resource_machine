#include"initial.h"
#include"QDebug"

using namespace std;
void initial(int g)
{
    int size,num,i;
    string fname;
    inbox.clear();
    outbox.clear();
    copybox.clear();
    ifstream infile;
    if(g==1)infile.open("C:\\level\\g1.txt");
    else if(g==2)infile.open("C:\\level\\g2.txt");
    else if(g==3)infile.open("C:\\level\\g3.txt");
    else if(g==4)infile.open("C:\\level\\g4.txt");
    else infile.open("C:\\level\\g5.txt");
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
    infile>>fname;
    tips=QString::fromStdString(fname);
    infile.close();
}
