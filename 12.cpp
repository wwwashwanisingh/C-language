#include <iostream>
using namespace std;

int main (){
    int a=3;
    int*b = &a;
    cout<<"the adress of is "<<&a<<endl;
    cout<<"the adress of is "<<b<<endl;
    cout<<"the value at adress b is "<<*b<<endl;
    int ** c= &b;
    cout<<"the adress of b is "<<&b<<endl;
    cout<<"the adress of b is "<<c<<endl;
    cout<<"the value at address c is "<<*c<<endl;
    cout<<"the value at address value at (value at|(c)) is "<<**c<<endl;
    
    return 0;
}