//member function templete & overloading templete function

#include <iostream>
using namespace std;
template <class t>
class harry
{
public:
    t data;
    harry(t a)
    {
        data = a;
    }
    void display();
};
template <class t>
void harry<t>::display()
{
    cout << data;
}
void func(int a)
{
    cout << " I am first func " << a << endl;
}
template <class t>
void func(t a)
{
    cout << " I am templetised func " << a << endl;
}
template <class t>
void func1(t a)
{
    cout << " I am templetised func " << a << endl;
}
int main()
{
    //harry<float>h(4.3);
    //cout<<h.data<<endl;
    //h.display();
    func(4);  //exact match takes the higest priority
    func1(4); //exact match takes the higest priority
    return 0;
}