#include <iostream>
using namespace std;
int sum(int a, int b){
    int c= a+b;
    return c;
} 
void swap(int a, int b){
    int temp=a;
    a=b;
    b= temp;
}
void swappointer (int *a, int* b){
    int temp=*a;
    *a=*b;
    *b= temp;
} 
int & swapreferncevar(int &a, int &b){
    int temp=a;
    a=b;
    b= temp;
    return a;
}  
/*int main (){        (((ess koo use naa kare )))
    int x=4, y=5;
    cout<<"the value of x is "<<x<<"and the value of y is "<<y<<endl;
    //swap (x,y);
    //swappointer(&x,&y);
    swapreferncevar(x,y) = 789;
    cout<<"the value of x is "<<x<<"and the value of y is "<<y<<endl; 
    return 0;
}*/
int main (){
    int x=4, y=5;
    cout<<"the value of x is "<<x<<"and the value of y is "<<y<<endl;
    //swap (x,y);
    //swappointer(&x,&y);
    swapreferncevar(x,y);
    cout<<"the value of x is "<<x<<"and the value of y is "<<y<<endl; 
    return 0;
}