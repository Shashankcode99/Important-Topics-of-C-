
//syntax for inheritance
// ------------------------

//class Derived_class_name : visibility_mode Base_class_name

/* IMPORTANT

visibility modes are as follows:
---------------------------------


1. public---> if Visibility is 'public' then public members of base class
                are public members of derived class

2. private---> if Visibility is 'private' then public members of base class
                are private members of derived class.

                --------------------------------------
                By-default visibility mode is "PRIVATE".
                --------------------------------------
*/

#include<iostream>
using namespace std;

class Employee //BASE CLASS
{

public:
int e_id;
float salary;

Employee()  
{}

Employee(int id,float sal)
{
    e_id = id;
    salary = sal;
}
};




class TECHY: public Employee   //DERIVED CLASS i.e TECHY
{

public:
char language;

TECHY(int id,char lang, float sal1)
{
    e_id = id;
    language=lang;
    salary=sal1;

}
void display()
{
    cout<<"Employee :"<<e_id<<" works on "<<language<<" with salary "<<salary<<endl;
}


};



int main()
{
Employee Shanky(1,100000.0f);
cout<<"E_id: "<<Shanky.e_id<<" has salary= "<<Shanky.salary<<endl;  

Employee Daljeet(3,80000.0f);
cout<<"E_id: "<<Daljeet.e_id<<" has salary= "<<Daljeet.salary<<endl;  

TECHY Nikunj(2,'C', 60000.0f);
Nikunj.display();



return 0;
}