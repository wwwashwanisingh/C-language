#include <iostream>
using namespace std;
//base class
class employee
{

public:
    int id;
    float salary;
    employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
    employee() {}
};

//derive class syntax
/*
class {{derived - class - name }}: {{visibility - mode }}{{base -class - name}}
{
    members / metod /etc .......
}
notes 
1- default visibility mode is private 
2- public  visibility mode : public member of the base class becomes public  member of the derived class 
3- private visibility mode : public member of the base class becomes private member of the derived class
4- private member are never inhritated 
*/
//creating a programmer class drived from employee base class
class programmer :private employee
{
public:
    programmer(int inpid)
    {
        id = inpid;
    }
    int languagecode = 9;
    void getdata (){
        cout <<id <<endl;
    }
};

int main()
{
    employee ashwani(1), atul(2), priyanshu(3);
    cout << ashwani.salary << endl;
    cout << atul.salary << endl;
    programmer skillF(12);
    cout << skillF.languagecode<<endl;
    skillF.getdata();
    return 0;
}