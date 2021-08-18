

/* STRUCT is a user defined datatype which is used to 
merge different types of datatypes*/



/*Memory allocation will be according to the sum of size of all the datatypes in the struct.
In example given below total memory allocated will be 4(int)+8(double)+1(char)= 13 bytes */
    

#include<iostream>
using namespace std;   

struct employee
{
    int e_id;
    double salary;
    char post;
};

int main(){

struct employee Shashank;
struct employee Karan;
struct employee Pranav;

Shashank.e_id=001;
Shashank.salary=1000000.07;
Shashank.post='E';



Karan.e_id=002;
Karan.salary=600000;
Karan.post='A';



Pranav.e_id=003;
Pranav.salary=400000;
Pranav.post='I';




cout<<"Salary of Shashank: "<<Shashank.salary<<endl;
cout<<"Post of Karan: "<<Karan.post<<endl;
cout<<"Employee Id of Pranav: "<<Pranav.e_id<<endl;

return 0;
}




// We can give our struct a specific name also
// Example

/*

struct employee
{
    int e_id;
    double salary;
    char post;
} emp;  */                //"emp" is the name of the struct