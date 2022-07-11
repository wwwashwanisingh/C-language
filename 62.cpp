//file I/O open() and eof ()function

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ofstream out;
    out.open("simple60.txt");
    out << "I am ashwani singh " << endl;
    out << "this is also me " << endl;
    out << "this is  me also";
    out.close();

    ifstream in;
    string st, st2;
    in.open("simple60.txt");
    //in>>st>>st2;
    //cout<<st<<st2;
    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }
    in.close();
    return 0;
}