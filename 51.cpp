//pointer to object and arrow  operater 
#include <iostream>
using namespace std;

class complex {
    int real , imiginary;
    public :
    void getdata (){
        cout <<"the real part is "<<real<<endl;
        cout <<"the imiginary part is "<<imiginary<<endl;
    }
    void setdata (int a, int b){
        real = a;
        imiginary = b;
    }
};
int main (){
    //complex c1;
    //complex *prt = &c1;
    complex *prt = new complex;
    //(*prt).setdata(1,54);//is exacty same as  
    prt->setdata(1,54);
    //(*prt).getdata(); is a good as 
    prt->getdata();

    //array of objects
     complex *prt1 = new complex[4];
    prt1->setdata(1,4);
    prt1->getdata(); 
    return 0;
}