#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    /*int a = 34;
    cout <<"the value of a was : "<<a;
    a = 45;
    cout <<"the value of a is : "<<a;
    CONSTANT IN C++*/
    /*const int a = 3;
    cout<<"the value of a was: "<<a;*/
   // a = 45; //you will get an error because a is constants 
   // cout <<"the value of a is :"<<a;
   /*int a =3,b = 43 ,c = 1234;
   cout<< "the value of a without setw is " <<a<<endl;
   cout<< "the value of b without setw is " <<b<<endl;
   cout<< "the value of c without setw is " <<c<<endl;

   cout<< "the value of a is " <<setw(4)<<a<<endl;
   cout<< "the value of b is " <<setw(4)<<b<<endl;
   cout<< "the value of c is " <<setw(4)<<c<<endl;*/
    int a = 3, b= 4;
    int c = ((((a*5)+b)-45)+85);
    cout<<c;
    return 0;
}