
//solution to exercise
#include <iostream>
#include <math.h>
using namespace std;

class simplecalculator
{
    int a, b;

public:
    void getdatasimple()
    {
        cout << "enter the value of a " << endl;
        cin >> a;
        cout << "enter the value of b " << endl;
        cin >> b;
    }
    void performoperationsimple (){
        cout << "the value of a+b is "<<a+b<<endl;
        cout << "the value of a-b is "<<a-b<<endl;
        cout << "the value of a*b is "<<a*b<<endl;
        cout << "the value of a/b is "<<a/b<<endl;
    }
};

class scientificcalculator
{int a, b;

public:
    void getdatascientific()
    {
        cout << "enter the value of a " << endl;
        cin >> a;
        cout << "enter the value of b " << endl;
        cin >> b;
    }
    void performoperationscientific (){
        cout << "the value of cos (a) is "<<cos (a)<<endl;
        cout << "the value of sin(a) is "<<sin(a)<<endl;
        cout << "the value of exp(a) is "<<exp(a)<<endl;
        cout << "the value of tan (a) is "<<tan (a)<<endl;
    }

};
class hybridcalculator : public simplecalculator ,public scientificcalculator{

};
int main()
{
   /* simplecalculator calc;
    calc.getdata();
    calc.performoperation();*/
    hybridcalculator calc;
    calc.getdatascientific();
    calc.performoperationscientific();
    calc.getdatasimple();
    calc.performoperationsimple();
    return 0;
}