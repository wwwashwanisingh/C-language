//multilevel inheidence deep dive  
#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void student ::set_roll_number(int r)
{
    roll_number = r;
}
void student ::get_roll_number()
{
    cout << "the roll number is " << roll_number << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void exam :: set_marks(float m1 ,float m2){
    maths = m1; 
    physics = m2;
}
void exam :: get_marks(){
    cout <<" the marks obatined in maths are :"<<maths <<endl;
    cout <<" the marks obatined in physics are :"<<physics <<endl;
}
class result :public exam {
    float percentage ;
    public :
    void display_result (){
        get_roll_number();
        get_marks();
        cout <<"your percentage is "<<(maths+physics)/2<<"%"<<endl;
    }
};
int main()
{/*
notes :::::
     if we are inheriting B from A and C from B;[A--->B--->C]
     1.  A is the base class for B and B is the base class for C
     2.  A--> B--->C-->is called Inheritance path 
*/
    result ashwani ;
    ashwani.set_roll_number(420);
    ashwani.set_marks(99.0,90.0);
    ashwani.display_result();
    return 0;
}