
//**MUST READ**
/* In call by refernce, a reference of values is passed to the function, so after execution of the
function and values being changed, the actual values will also gets changed*/



#include<iostream>
using namespace std;

void swap(int,int); //function prototyping
void swapByReference(int&,int&);


//call by reference using pointers
void swap(int* a, int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}





//call by reference using reference variable
void swapByReference(int &c, int &d)
{
    int temp=c;
    c=d;
    d=temp;
}


int main()
{

//code for swap()

int a=10;
int b=40;


cout<<"Value before calling swap function:"<<endl;
cout<<"Value of A="<<a<<endl;
cout<<"Value of B="<<b<<endl;

swap(&a,&b);

cout<<"Value after calling swap function:"<<endl;
cout<<"Value of A="<<a<<endl;
cout<<"Value of B="<<b<<endl;





//code for swapByReference()
int c=7;
int d=9;

cout<<"Value before calling swap_by_reference function:"<<endl;
cout<<"Value of C="<<c<<endl;
cout<<"Value of D="<<d<<endl;

swapByReference(c,d);

cout<<"Value after calling swap_by_reference function:"<<endl;
cout<<"Value of C="<<c<<endl;
cout<<"Value of D="<<d<<endl;


return 0;
}