//file I/O (reading and writing)

#include <iostream>
#include <fstream>

/*the use full class for working with files in c++ are:
1. fstreambase
2. ifstream --> derived from fstreambase 
3. ofstream --> derived from fstreambase 

in order work with files in c++ , you will have to  open it ,primarily ,there are 2 way to open a files :
1. using the constractor 
2. using the number function open () of the class 
*/
using namespace std;

int main (){
    string st = "ashwani singh ";
    string st2;
   //opening files using  constractor and writing it 
    ofstream out ("simple60.txt");
    out<<st;

    //opening files using  constractor and reading it 
    ifstream in  ("simple60b.txt");
    //in>>st2;
    getline(in,st2);
    cout<<st2;
    return 0;
}