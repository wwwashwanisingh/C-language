#include <iostream>
using namespace std;
/*
student --> test 
student --> sport 
test --> result 
sport --> result 
*/
class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "your roll no is " << roll_no << endl;
    }
};
class test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_mark(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "your result is here " << endl;
        cout << "maths:" << maths << endl;
        cout << "physics:" << physics << endl;
    }
};

class sport : virtual public student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << " your PT score is " << score << endl;
    }
};

class result : public test, public sport
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "your total score is :" << total << endl;
    }
};
int main()
{
    result ashwani;
    ashwani.set_number(4500);
    ashwani.set_mark(99.5, 94.5);
    ashwani.set_score(9);
    ashwani.display();
    return 0;
}
