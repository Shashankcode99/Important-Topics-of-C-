

/* UNION is a almost same as STRUCT datatype which is used to 
merge different types of datatypes*/

/*In union only one out of the given datatype variables is used at a time in terms of
memory management*/

/*Memory allocation will be according to the datatype variables you have used at that moment.
In example given below if you have used "int ric_exchange" then only 4 bytes of 
memory will be allocatd. But if after that you have used "char car_exchange" then
memory allocated will be overriden by 1 byte */
    

#include<iostream>
using namespace std;   

union money
{
    int rice_exchange;
    char car_exchange;
    float pounds ;
};

int main(){

union money m1;


m1.car_exchange='D';
m1.rice_exchange=80;


cout<<m1.rice_exchange<<endl; //value of rice_exchange is now will be in the memory 
                             //  because of overidding

cout<<m1.car_exchange<<endl;//garbage value will be printed


return 0;
}




// We can give our union a specific name also
// Example

/*

struct money
{
    int rice_exchange;
    char car_exchange;
    float pounds ;
} money;  */                //"money" is the name of the union