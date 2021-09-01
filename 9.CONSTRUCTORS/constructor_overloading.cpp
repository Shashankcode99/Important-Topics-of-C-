/*
CONSTRUCTOR OVERLOADING is a concept of using the same name for more tyhan one constructor
but they differ by two things:

1. types of arguments passed
2. number of arguments passed
*/


#include<iostream>
using namespace std;

class learning
{
    int a,b,c; //by default they are private member of the class
    float f; 
public:

//set of values is passed in parameterized constructor

    learning(void); // constructor 1 declaration --->  example wrt number of arguments
    learning(int , int); // constructor 2 declaration  --->  example wrt number of arguments
    learning(int , int , int); // constructor 3 declaration  --->  example wrt number of arguments
    learning(int,float); // constructor 4 declaration  --->  example wrt type of arguments

void print_Sum_Of_Two()
{
    cout<<"The sum of A and B is: "<< a+b<<endl;
}

void print_Sum_Of_Three()
{
    cout<<"The sum of A, B and C is: "<< a+b+c<<endl;
}

void print_Sum_Of_INT_FLOAT()
{
    cout<<"The sum of A and B is: "<< a+f<<endl;
}
};


//defining constructor 1
learning:: learning(void)
{
a=10;
b=20;
}

//defining constructor 2
learning:: learning(int x,int y)
{
a=x;
b=y;
}


//defining constructor 3
learning:: learning(int p,int q,int r)
{
a=p;
b=q;
c=r;
}


//defining constructor 4
learning:: learning(int s,float t)
{
a=s;
f=t;
}


int main(){
    
learning obj1;
obj1.print_Sum_Of_Two();

learning obj2(100,100);
obj2.print_Sum_Of_Two(); 


learning obj3(100,200,300);
obj3.print_Sum_Of_Three();

learning obj4(45,45.50f);
obj4.print_Sum_Of_INT_FLOAT();
//different output for different set of values passed by differnet objects

return 0;
}