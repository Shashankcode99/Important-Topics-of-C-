
// '&'(address of) operator
// '*' (value at) dereference operator



#include<iostream>
using namespace std;

int main(){
    int a=10; //normal integer variable 
     
    int* b=&a; //pointer variable 'b' storing address of pointed variable a;

cout<<"Address of variable 'a' is:"<<b<<endl;

cout<<"Value of variable 'a' is:"<<*b;
return 0;
}