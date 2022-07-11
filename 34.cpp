//copy constructor in c++//

#include <iostream>
using namespace std;

class number
{
    int a = 0;

public:
    number() {}
    number(int num)
    {
        a = num;
    }

    //when no copy constructor is found , compiler supplies its own copy constuctor //
    number(number &obj)
    {
        cout << "copy constructor called" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "the number for this object is " << a << endl;
    }
};
int main()
{
    number x, y, z(46), z2;
    x.display();
    y.display();
    z.display();
    //z1 should exactly resamble z or x or y
    number z1(z); //copy constuctor invoke
    z1.display();
    z2 = z; //copy constuctor not called

    number z3 = y; //copy constuctor invoke

    return 0;
}