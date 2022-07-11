#include <iostream>
using namespace std;
 
class complex;
class calculator 
{
public:
    int add(int a, int b){
        return (a + b);
    }
    int sumrealnumber(complex, complex);
    int sumcompnumber(complex, complex);
};
class complex
{
    int a, b;
    friend int calculator :: sumrealnumber( complex, complex);
    friend int  calculator :: sumcompnumber(complex, complex);

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};
int calculator ::sumrealnumber(complex o1, complex o2){
 return (o1.a + o2.a);
}
int calculator ::sumcompnumber(complex o1, complex o2){
return (o1.b + o2.b);
 }
int main()
{
    complex o1, o2;
    o1.setnumber(1, 4);
    o2.setnumber(5, 7);
    calculator calc ; 
    int res = calc.sumrealnumber(o1, o2);
    cout << "the sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumcompnumber(o1, o2);
    cout << "the sum of complex  part of o1 and o2 is " << resc << endl;
    return 0;
}