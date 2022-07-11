//file I/O  read/write inthe same program and closing files

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    //connecting our files with hout stream
    ofstream hout("simple60.txt");

    //creating a new string and filter it with the string entered by the user
    cout << "Enter your name ";
    string name;
    cin >> name;

    //writing a string to the files
    hout << "my name is " + name;
    hout.close();

    string content;
    ifstream hin("simple60b.txt");
    getline(hin, content);
    cout << "the content of this file is :" << content;

    hin.close();
    return 0;
}