#include <iostream>
using namespace std;

int main (){
    int marks[4]={23,34,56,56};
    int mathsmarks[4];
    mathsmarks[0] = 5678;
    mathsmarks[1] = 578;
    mathsmarks[2] = 568;
    mathsmarks[3] = 598;
    cout <<"these are maths marks"<<endl;
    cout <<mathsmarks[0]<<endl;
    cout <<mathsmarks[1]<<endl;
    cout <<mathsmarks[2]<<endl;
    cout <<mathsmarks[3]<<endl;
    marks[2] = 456;
    cout<<"these are marks"<<endl;
    //cout<< marks[0]<<endl;
   // cout<< marks[1]<<endl;
   // cout<< marks[2]<<endl;
    //cout<< marks[3]<<endl;
    /*for (int  i = 0; i < 4; i++)
    {
       cout<<"the value of marks "<<i<<"is "<<marks[i]<<endl;
    }
    */
   //while loop 
  /* int i = 0;
   while (i<= 3)
   {
       cout<<"the value of marks "<<i<<"is"<<marks[i]<<endl;
       i++;
   }*/
   //do while loop
  /* int i=0;
   do
   {
       cout <<"the value of mark"<<i<<"is"<<marks[i]<<endl;
       i++;
   } while (i<=3);*/
   int *p = marks;
   cout<<*(p++ )<<endl;
   cout<<*(++p)<<endl;
   cout<<"the value of *(p)[0]"<<*p<<endl;
   cout<<"the value of *(p+1)[0]"<<*(p+1)<<endl;
   cout<<"the value of *(p+2)[0]"<<*(p+2)<<endl;
   cout<<"the value of *(p+3)[0]"<<*(p+3)<<endl;
   
   
    return 0;
}