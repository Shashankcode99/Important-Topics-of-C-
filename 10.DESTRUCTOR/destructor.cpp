/* 
DESTRUCTOR is mainly used to free the memory from space ocuupied by constructors and 
object creation

DESTRUCTOR never takes an argument nor it returns any value

*/



#include<iostream>
using namespace std;


int count=0;

class LEARN{
    public:
        LEARN() //CONSTRUCTOR
        {  
            count++;
            cout<<"This is the time when constructor is called for object number "<<count<<endl;
        }

        ~LEARN() //DESTRUCTOR
        {
            cout<<"This is the time when my destructor is called for object number"<<count<<endl;
            count--;
        }
};


int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    LEARN n1;  //constructor invoked as object(n1) is created


    //GIVEN BELOW IS A "SCOPE".
    // anything inside the scope gets destroyed as soon as the program comes out of that scope

    { 
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        LEARN n2, n3; //constructor invoked as objects(n2,n3) are created
        cout<<"Exiting this block"<<endl;

    } /*destructor is called 2 times as the program comes out of the scope hence 
      memory gets free from the space occupuied by by creation of two object i.e n2 and n3*/

    cout<<"Back to main"<<endl;
    return 0;

}/*destructor is called again as the program comes out of the scope hence 
      memory gets free from the space occupuied by creation of object n1*/
