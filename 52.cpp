#include <iostream>
using namespace std;

class shopitems
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "code of this item is" << id << endl;
        cout << "price of this item is" << price << endl;
    }
};
//            1       2       3
//                            ^
//                            \
//                            \
//                            prt
//          prttemp
int main()
{
    int size = 3;
    //int *prt = &size ;
    //int *prt = new int[34];
    //generalstore items
    //veggies items
    //hardware items
    shopitems *prt = new shopitems[size];
    shopitems *prttemp = prt;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "enter Id and price of items " << i + 1 << endl;
        cin >> p >> q;
        (*prt).setdata(p, q);
        prt++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Item number:" << i + 1 << endl;
        prttemp->getdata();
        prttemp++;
    }

    return 0;
}