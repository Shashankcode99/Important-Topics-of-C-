/*
CLASS is similar to STRUCT, but the major diffrence is of data privacy.
Data inside a structure can be accessed from any part of the program and at point of time,
so it is not considered safe.
Also, structure are not efficient to store functions inside them.


But class is a safer data type with the help of which data provacy can be controlled using
access modifiers */


#include<iostream>
using namespace std;

void setData(int,int);  //Function Prototyping
void showData();

class Employee
{

    private:
    int a;
    int b;

    public:
    int c;
    int d;

    void setData(int a1,int b1); //function declaration

    void showData()
    {
        cout<<"Value of A is: "<<a<<endl;
        cout<<"Value of B is: "<<b<<endl;
        cout<<"Value of C is: "<<c<<endl;
        cout<<"Value of D is: "<<d<<endl;

    }
};

void Employee:: setData(int a1,int b1) //Defining function outside the class using "::" 
{
    a=a1;
    b=b1;
}

int main()
{
Employee emp;  //object creation

emp.c=10;  //we can directly set values of "public" items
emp.d=20;

emp.setData(60,70);  //we cannot directly set values of "private" items, so we have to call a function to do so

emp.showData();  // displaying data

return 0;
}