//initialization list in constructor
#include <iostream>
using namespace std;

/*
syntax for initilization list in constructor :
constructor (arguiment - list ): initilization -section 
{
    assignment +other code;
}
class test {
    int a;
    int b;
    public :
    test (int i, int j):a(i),b(j){constructor body }
};
*/
class test
{
    
    int a;
    int b;

public:
    test (int i, int j):a(i),b(j)
    //test (int i, int j):a(i),b(i+j)
    //test (int i, int j):a(i),b(a+j)
    //test(int i, int j) : b(j), a(i +a)
    //test(int i, int j) : b(j),a(i+b)//---> red flsg this will create problem becouse a will be initialized first 
    {
        cout << "constructor executed" << endl;
        cout << "value of a is " << a << endl;
        cout << "value of b is" << b << endl;
    }
};
int main()
{
    test t(4, 6);

    return 0;
}