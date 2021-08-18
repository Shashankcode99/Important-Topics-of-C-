#include<iostream>
using namespace std;

int main(){


 int marks[5];

    cout<<"Enter values of array marks3"<<endl;

       for (int i = 0; i <5 ; i++)
            {
                cin>>marks[i];
            }


//pointer to array

int* p=marks;  //stores the address of the arrays first block


cout<<"First values is :"<<*p <<endl;
cout<<"Second values is :"<<*(p+1)<<endl;
cout<<"Third values is :"<<*(p+2)<<endl;
cout<<"Fourth values is :"<<*(p+3)<<endl;
cout<<"Fifth values is :"<<*(p+4)<<endl;

return 0;
}