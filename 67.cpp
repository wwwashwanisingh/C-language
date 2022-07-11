//function templete

#include <iostream>
using namespace std;
/*float funcaverage(int a, int b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
float funcaverage2(int a, int b)
{
    float avg = (a + b) / 2.0;
    return avg;
}*/
template <class t>
void swapp(t &a, t &b)
{
    t temp = a;
    a = b;
    b = temp;
}
template <class t1, class t2>
float funcaverage(t1 a, t2 b)
{
    float avg = (a + b) / 2.0;

    return avg;
}
int main()
{
    float a;
    a = funcaverage(5, 5.8);
    printf("the average of these number is %.4f\n", a);
    int x = 5, y = 8;
    swapp(x, y);
    cout << x << endl
         << y;
    return 0;
}