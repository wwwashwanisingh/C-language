#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void); //constructor decleration
    //creating a constructor
    //constructor is a special member function with same naqme as of the class .
    //it is automitacally invoked (call) whenever an objects of its class .
    //it is used  to initializ the objects of its class
    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
complex ::complex(void)
{
    a = 10;
    b = 12;
}
int main()
{
    complex c;
    c.printnumber();

    return 0;
}