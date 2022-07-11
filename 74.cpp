#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    //function object(functor) : function wrapped in a class so that it available like an object
    int arr[] = {81, 22, 3, 43, 5, 6, 77};
    sort(arr, arr + 7);
    sort(arr, arr + 7, greater<int>());
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}