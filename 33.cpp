
#include <iostream>
using namespace std;

class bankdeposit
{
    int principal;
    int year;
    float interestrate;
    float returnvalue;

public:
    bankdeposit() {}
    bankdeposit(int p, int y, float r); //r canbe a value likr 0.04
    bankdeposit(int p, int y, int r);   //r canbe a value likr 14
    void show();
};
bankdeposit ::bankdeposit(int p, int y, float r)
{
    principal = p; 
    year = y;
    interestrate = r / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
bankdeposit ::bankdeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    interestrate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
void bankdeposit ::show()
{
    cout << endl
         << "principal amount was " << principal << endl
         << ".return value after " << year
         << " is " << returnvalue << endl;
}
int main()
{
    bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    bd3.show();
    cout << " enter the value of p,yand r" << endl;
    cin >> p >> y >> r;
    bd3 = bankdeposit(p, y, r);

    bd1.show();
    cout << " enter the value of p,yand r" << endl;
    cin >> p >> y >> R;
    bd1 = bankdeposit(p, y, R);

    bd2.show();
    return 0;
}