#include<iostream>
using namespace std;

class learning
{
    int a,b,c; //by default they are private member of the class

public:
    learning(int, int, int); // constructor declaration

void printSum()
{
    cout<<"The sum of A, B and C is: "<< a+b+c<<endl;
}
};


//defining constructor outside the class (point to remeber: definition can be done inside class also)
learning:: learning(int x, int y, int z=10)
{
a=x;
b=y;
c=z;
}


int main(){
    
learning obj1(5,20); //we are passing value of x and y only and for z default value will be used
obj1.printSum();

//5+20+10= 35

learning obj2(5,10,50); //we are passing value of x,y and z as well and now the passed value of z will be used
obj2.printSum();

//5+10+50=65
return 0;
}