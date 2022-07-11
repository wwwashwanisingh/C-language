//templete with default parameter

#include <iostream>
using namespace std;
template <class t1 = int, class t2 = float, class t3 = char>
class ashwani
{
public:
    t1 a;
    t2 b;
    t3 c;
    ashwani(t1 x, t2 y, t3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
    }
};
int main()
{
    ashwani<> A(6, 4.34, 'c');
    A.display();
    cout << endl;
    ashwani<float, char, char> B(6.8, 'd', 'c');
    B.display();
    return 0;
}