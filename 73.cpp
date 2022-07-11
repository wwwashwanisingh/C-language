//map in c++ STL

#include <iostream>
#include <map>
#include <string>
using namespace std;
//map is a associative array
int main()
{
    map<string, int> marksmap;
    marksmap["ashwani"] = 99;
    marksmap["atul"] = 93;
    marksmap["priyanshu"] = 95;

    marksmap.insert({{"pankaj", 90}, {"ravi", 85}});
    map<string, int>::iterator iter;
    for (iter = marksmap.begin(); iter != marksmap.end(); iter++)       
    {
        cout << (*iter).first << "  " << (*iter).second << "\n";
    }
    cout << "the size is :" << marksmap.size() << endl;
    cout << "the max size is :" << marksmap.max_size() << endl;
    cout << "the empty's return value is :" << marksmap.empty() << endl;
    return 0;
}