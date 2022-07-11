//revisiting pointer : new and deleted keyword
#include <iostream>
using namespace std;
int main()
{
    //basic example
    int a = 4;
    int *prt = &a;
    *(prt) = 999;
    cout << "the value of a is " << *(prt) << endl;
    //new keyword
    int *p = new int(40);
    cout << "the value at address p is " << *(p) << endl;

    int *arr = new int[4];
    arr[1] = 10;
    arr[2] = 20;
    arr[3] = 30;
    arr[4] = 40;

    delete[] arr; //deleted operator
    cout << "the value of arr [1] is " << arr[1] << endl;
    cout << "the value of arr [2] is " << arr[2] << endl;
    cout << "the value of arr [3] is " << arr[3] << endl;
    cout << "the value of arr [4] is " << arr[4] << endl;

    return 0;
}