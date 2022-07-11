//destuctor in c++


#include <iostream>
using namespace std;
int count = 0;
//destructor never takes an argument nor does it return any value
class num
{
public:
    num()
    {
        count++;
        cout << "this is the time when constuctor is called for object number  " << count << endl;
    }
    ~num()
    {
        cout << "this is the time when my destructor is called for object number" << count << endl;
        count--;
    }
};
int main()
{
    cout << "we are inside our main function " << endl;
    cout << "creating first objects n1" << endl;
    num n1;
    {
        cout << " entering this block "<<endl;
        cout << " creating two more object " << endl;
        num n2, n3;
        cout << " exiting this block "<<endl;
    }
    cout << "back to main " << endl;
    return 0;
}