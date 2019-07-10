#include"initial.h"
using namespace std;
void initial(int g)
{
    int size,num,i;
    string fname;
    fname="g";
    fname=fname+to_string(num)+".txt";
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
