#include <iostream>

using namespace std;

int main (){
   // cout <<"my name is ashwani singh";
     int age;
      cout <<"tell me your age";
     cin >>age ;
     /*if ((age<18) &&(age>0)){
     cout <<"you can not come to my party"<<endl;
     }
     else if (age==18){
         cout <<"you are a kid and you will not allow to yhe party"<<endl;
     }
     else if (age <1){
         cout <<"you are not yet born"<<endl;
     }
     else{
         cout<<"you come to the party"<<endl;
     }*/
     switch ( age )
     {
     case 18:
         cout <<"you are in 18"<<endl;
         break;
    case 22:
         cout <<"you are in 22"<<endl; 
         break;
     case 2:
         cout <<"you are in 2"<<endl; 
         break;
     default:
     cout <<" no special cases"<<endl;
         break;
     }

    return 0;
}