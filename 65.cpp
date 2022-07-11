//writing our first c++ : templete with multiple parameter 

#include <iostream>
using namespace std;
/*
class templete with multiple parameter (one,two or more than two)
templete <class t1, class t2.........(comma seperated)>
class nameofclass{
    body
}
*/
template<class t1,class t2>
class myclass{
    public:
    t1 data1;
    t2  data2 ;
    myclass (t1 a, t2 b){
        data1 =a;
        data2 =b;
    }

    void display (){
        cout<<this->data1<<endl<<this->data2;
    }
};
int main (){

    myclass <int , float >obj(1, 1.93);
    obj.display();
    return 0;
}