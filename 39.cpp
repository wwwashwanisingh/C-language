//protected access modifier 
#include <iostream>
using namespace std;

class base {
    protected:
    int a;
    private:
    int b;
};
/*
For protected member :
                   public derivation     Private derivation     Protected  derivation  
   1. Private      not inherited         not inherited          not inherited 
   2. Protected    protected             private                protected 
   3. Public       public                private                protected
*/
class derived : protected base {

};
int main (){
    base b;
    derived d;
    //cout <<d.a;//will not work since a is protected in both base as well as derived class 
    return 0;
}