#include <iostream>
using namespace std;

class employee
{
    int id ;
    static int count;
public:
void setdata (void)
{
    cout <<"enter the id"<<endl;
    cin>>id;
    count++;
}
void getdata(void)
{
    cout <<"the id of this employee is "<<id<<"and this is employee number"<<count<<endl;
}
static void getcount(void){
    cout <<"the value of count is"<<count<<endl;
}
};
int employee :: count ;
int main (){
    employee ashwani ,atul,priyanshu;
    ashwani.setdata();
    ashwani.getdata();

    atul.setdata();
    atul.getdata();

    priyanshu.setdata();
    priyanshu.getdata();
    return 0;
}