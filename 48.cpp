#include <iostream>
using namespace std;

/*case 1;
class B : class A {
    order of excution of construction -> First A() then B()
};
case 2:

class A, class B ,class C{
order  of excution of construction -> B() then C() and A()
};
 case 3 :
 class A:public B , virtul public C{
     order of excutive of construction -> C(), then B() and A()
 };
*/
class  base1 {
    int data1 ;
    public:
    base1 (int i){
        data1 = i;
        cout <<" base1 class constructor called "<<endl;
    }
    void printsdatabase1 (void ){
        cout<<" the value of data1 is "<<data1 <<endl;
    } 
};

class  base2 {
    int data2 ;
    public:
    base2 (int i){
        data2 = i;
        cout <<" base2 class constructor called "<<endl;
    }
    void printsdatabase2 (void ){
        cout<<" the value of data2 is "<<data2 <<endl;
    } 
};
class derived : public base1, public base2{
    int derived1 ,derived2 ;
    public:
    derived (int a,int b,int c,int d): base2 (b),base1(a){
        derived1= c;
        derived2 = d;
        cout <<"derived class constructor called "<<endl;
    }
    void printsdata (void ){
        cout<<" the value of derived 1 is "<<derived1 <<endl;
         cout<<" the value of derived 2 is "<<derived2 <<endl;
    }
};
int main (){
    derived ashwani (1,2,3,4);
    ashwani.printsdatabase1();
    ashwani.printsdatabase2();
    ashwani.printsdata();
    return 0;
}