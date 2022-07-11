#include <iostream>
using namespace std;

typedef struct employee
{
    int eid;
    char favchar;
    float salary;
} ep ;
union money
{
    int rice;
    char car;
    float pounds;
};

int main (){
    enum meal {lunch ,breakfast , dinner};
    meal m2 = breakfast;
    cout<<breakfast;
    cout <<(m2==3);
    ep ashwani;
    /*struct employee atul;
    union money m1;
    m1. rice= 34;
    m1.car = 'c';
    //cout<<m1.rice;
    cout<<m1.car;
    /*ashwani.eid = 23;
    ashwani. favchar = 'a' ;
    ashwani. salary = 100000000;
    cout <<"the value is "<<ashwani.salary<<endl;
    cout <<"the value is "<<ashwani.eid<<endl;
    cout <<"the value is "<<ashwani.favchar<<endl;*/
    return 0;
}