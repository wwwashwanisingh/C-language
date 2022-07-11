//list in STL

#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1; //list of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(2);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);
    //removing element from list
    //list1.pop_back();
    //display(list1);
    //list1.remove(9);
    //display(list1);

    //shorting the list
    //list1.sort();
    //display(list1);

    //reversing the list
    //list1.reverse();
    //display(list1);
    list<int> list2(3); //emptylist of size 7
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 10;
    iter++;
    *iter = 8;
    iter++;
    display(list2);
    list1.merge(list2);
    cout << "list1 after merging ";
    display(list1);

    return 0;
}