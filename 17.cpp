#include <iostream>
using namespace std;

inline int product (int a, int b){
    return a*b ;
}
float moneyrecevied (int currentmoney,float factor = 1.04){
      return currentmoney*factor;
}
//int strlen(const char *p){            (((do not use this )))
//    return p;
//}
int main (){
    int a;int b;int c=1;
    int money= 100000;
    /*cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    cout<<"the product of a and b is "<<product(a,b)<<endl;*/
    cout<<"If you have "<<money<<"rs in 1 your bank account will recived "<<moneyrecevied(money )<<"Rs after 1 year"<<endl;
    cout<<"FOR VIP:If you have "<<money<<"rs in 1 your bank account will recived "<<moneyrecevied(money,1.1 )<< "Rs after 1 year"<<endl;
    return 0;
}