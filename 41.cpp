//multiple inheritance deep dive
#include <iostream>
using namespace std;
/*
syntax for inheriting in multiple inheritance 
class derived :visibility - base1, visibility - mode base2 
{
    class body of class "derivedC"
}
*/
class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
/*class base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};*/
class derived : public base1, public base2 //,public base3
{
public:
    void show()
    {
        cout << " the value of base1 is  " << base1int << endl;
        cout << " the value of base2 is  " << base2int << endl;
        //cout << " the value of base3 is  " << base3int << endl;
        cout << " the sum of these value  is  " << base1int + base2int /*+base3int */<< endl;
    }
};

/*the inherited derived class will look something like this :
//data member :
    //base1int ---> protected 
    //base2int ---> protected 
    member function :
    set_base1int ()--->public 
     set_base2int ()--->public 
      set_show ()--->public 
*/
int main()
{
    derived ashwani;
    ashwani.set_base1int(25);
    ashwani.set_base2int(5);
    //ashwani.set_base3int(50);
    ashwani.show();
    return 0;
}