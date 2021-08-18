/*ENUMS are basically reading values as integers
*/ 

#include<iostream>
using namespace std;

int main()
{


    enum MEAL
    {
        breakfast,
        lunch,
        dinner
    };


//printing the actual value read by the system of the  variables used inside enum, 
    cout<<"Value of breakfast :"<<breakfast<<endl;  //0
     cout<<"Value of lunch :"<<lunch<<endl;        //1
      cout<<"Value of dinner :"<<dinner<<endl;    //2


// checking the output after storing it in another object;
      MEAL m1=lunch;
      cout<<m1<<endl;  //1

// checking condition to be true or false

      cout<<(m1==2);  //false




return 0;
}