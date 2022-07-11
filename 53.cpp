//this pointer in c++

#include <iostream>
using namespace std;
 class A{
     int a;
     public:
     void setdata (int a){
         this -> a=a;
     }
     //A & setdata (int a){
      //   this -> a=a;   //( also use this )
     //    return *this ; 
     //}
     void getdata(){
         cout<<"the value of a is "<<a<<endl;
     }
 };

int main (){
    //this is the key word which is a pointer to the objects which invokes the member function 
    //
    A a;
    a.setdata(4);
    a.getdata();
    return 0;
}