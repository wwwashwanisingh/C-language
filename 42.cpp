//this programme is created by me //

#include <iostream>
using namespace std;
class simplecal {
    protected:
    int a ;
    int b ;
    public:
    void setdata(int d, int e){
        d = a;
        e = b;
    }
    void getdata (){
        a = 5;
        b = 6;
    }
};
class scientificcal{
    protected:
    float i;
    float j;
    public :
    void display (float k, float m){
        k= i;
        m= j;
    }
    void print (){
        i= 30.0;
        j= 40.0;
    }
};
class derived :public simplecal,public scientificcal{
    public:
void show(){
        cout <<"the sum of a and b is "<<a+b<<endl;
        cout <<"the subrtact of a and b is "<<a-b<<endl;
        cout <<"the multiply of a and b is "<<a*b<<endl;
        cout <<"the divide of a and b is "<<b/a<<endl;
        cout<<"the area of i and j"<<i*j<<endl;
        cout <<"the sum of i and j "<<i+j<<endl;
}
};
int main (){
    derived der;
    der.getdata();
    der.print();
    der.show ();
    return 0;
}