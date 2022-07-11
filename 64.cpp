//writing our first c++ : templete

#include <iostream>
using namespace std;
template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    //vector v1(3);
    //v1.arr[0] = 4;
    //v1.arr[1] = 31;
    //v1.arr[2] = 15;
    //vector v2(3);
    //v2.arr[0] = 3;
    //v2.arr[1] = 2;
    //v2.arr[2] = 5;
    vector<double> v1(3);
    v1.arr[0] = 4.0;
    v1.arr[1] = 3.1;
    v1.arr[2] = 1.5;
    vector<double> v2(3);
    v2.arr[0] = .3;
    v2.arr[1] = 2.55;
    v2.arr[2] = 5.89;
    double a = v1.dotproduct(v2);
    cout << a << endl;
    return 0;
}