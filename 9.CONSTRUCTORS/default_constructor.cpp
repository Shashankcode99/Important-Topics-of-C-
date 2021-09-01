#include<iostream>
using namespace std;

class learning
{
    int a,b; //by default they are private member of the class

public:
    learning(void); // constructor declaration

void printSum()
{
    cout<<"The sum of A and B is: "<< a+b<<endl;
}
};


//defining constructor outside the class (point to remeber: definition can be done inside class also)
learning:: learning(void)
{
a=10;
b=20;
}


int main(){
    
learning obj1, obj2, obj3;
obj1.printSum();
obj2.printSum();
obj3.printSum();


//output will remain same for differnt

return 0;
}