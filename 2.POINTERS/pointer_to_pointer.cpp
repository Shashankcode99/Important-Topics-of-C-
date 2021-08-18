
// '&'(address of) operator
// '*' (value at) dereference operator



#include<iostream>
using namespace std;

int main(){
    int a=10; //normal integer variable 
     
    int* b=&a; //pointer variable 'b' storing address of pointed variable a;

    int**c= &b;  //POINTER c TO POINTER b

cout<<"Address of variable 'a' is:"<<b<<endl;

cout<<"Value of variable 'a' is:"<<*b<<endl;


cout<<"Address of variable 'b' is:"<<&b<<endl; 
//gives address of var 'b'



cout<<"Address of variable 'b' is:"<<c<<endl;
//it will also gives address of var 'b'


cout<<"Value at address 'c' is:"<<*c<<endl;
//it will give the address of 'a' as dereferencing is done one time i.e "c" conatins address
 //of "b" value at that address is actually storing adress of "a" 

//value at c--->address 0f b---> value at b (i.e address of a)



cout<<"Value at address value_at(value_at(c)) is:"<<**c<<endl;
//two time dereferencing is being done

////value at c--->address 0f b---> value at b (i.e address of a)---> value at a(i.e 10)

return 0;
}