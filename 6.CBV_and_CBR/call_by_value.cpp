
//**MUST READ**
/* In call by value a copy of values is passed to the function, so even after execution of the
function and values being chnaged, there will be no changes in the actual values */



#include<iostream>
using namespace std;

void swap(int,int); //function prototyping


void swap(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main()
{

int a=10;
int b=40;

cout<<"Value before calling swap function:"<<endl;
cout<<"Value of A="<<a<<endl;
cout<<"Value of B="<<b<<endl;

swap(a,b);


cout<<"Value after calling swap function:"<<endl;
cout<<"Value of A="<<a<<endl;
cout<<"Value of B="<<b<<endl;


//NO CHANGES IN THE VALUE

return 0;
}