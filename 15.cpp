#include <iostream>
using namespace std;
int sum (int,int);
void g();

int main (){
    int num1,num2;
    cout<<"enter first value"<<endl;
    cin>>num1;
    cout<<"enter second value"<<endl;
    cin>>num2;
    cout <<"the sun is"<<sum (num1,num2);
    g();
    return 0;
}
int sum (int a,int b){
    int c=a+b ;
    return c;
}
void g(){
    cout <<"\nhello Ashwani ,good morning";
}