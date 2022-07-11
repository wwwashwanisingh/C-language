#include <iostream>
using namespace std;

class point {
    int x,y;
    public : 
    point ( int a, int b){
        x = a;
         y = b;
    }
    void displaypoint (){
        cout <<"the point is ("<<x<<","<<y<<")"<<endl;
    }
};
// create a function (hint : make it a friend function ) which takes 2 point objects and
// computes th distance between those point 
//use these example to check your code :
//distance between (1,1) and (1,1)is 0
//distance between (0,1) and (0,6)is 5
//distance between (1,0) and (70,0)is 69
int main (){
    point p(1,1);
    p.displaypoint();

    point q(4,6);
    q.displaypoint();
    return 0;
}