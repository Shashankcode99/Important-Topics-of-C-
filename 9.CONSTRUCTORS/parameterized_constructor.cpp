#include<iostream>
using namespace std;

class learning
{
    int a,b; //by default they are private member of the class

public:

//set of values is passed in parameterized constructor

    learning(int , int); // constructor declaration

void printSum()
{
    cout<<"The sum of A and B is: "<< a+b<<endl;
}
};


//defining constructor outside the class (point to remeber: definition can be done inside class also)
learning:: learning(int x,int y)
{
a=x;
b=y;
}


int main(){
    
learning obj1(50,50);
obj1.printSum();

learning obj2(100,100);
obj2.printSum(); 


learning obj3(200,200);
obj3.printSum();


//different output for different set of values passed by differnet objects

return 0;
}