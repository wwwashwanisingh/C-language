//vector in STL

#include <iostream>
#include <vector>
using namespace std;
template <class t>
void display(vector<t> &v)
{
    cout << "displaying this vector " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
        //cout<<v.at(i)<<" ";
    }
    cout << endl;
}
int main()
{
    //ways to create a vector
    vector<int> vec1;      //zero length vector
    int element, size = 5; //
    /*cout<<"enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter an element to add to this vector ";
        cin >>element ;
        vec1.push_back(element);
    }*/
    //vec1.pop_back();

    //vector
    //display(vec1);
    //vector<int>::iterator iter = vec1.begin();
    //vec1.insert(iter+1,100, 234);
    //display(vec1);
    vector<char> vec2(4); //4-element character vector
    //vec2.push_back('5');
    //display(vec2);
    vector<char> vec3(vec2); //4-element character vector fron vec2
    //display(vec3);
    vector<int> vec4(4, 13); //6-element vector of 13s
    display(vec4);

    return 0;
}