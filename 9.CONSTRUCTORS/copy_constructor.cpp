// In copy constructor a copy of another object is passed with the help of reference variable



/*IMP QUESTION:  What happens if the copy constructor is not present in the class?

Answer:--> Even if the copy constructor is not present, 

            "NO ERROR! the porgram will run absolutely fine "

        because when no copy constructor is found compiler supplies its own copy constructor*/


#include<iostream>
using namespace std;

class CPYCNSTR
{
    int num;

    public:
    CPYCNSTR()  //default constructor
    {
        num=0;
    }

     CPYCNSTR(int p) //parameterized constructor
    {
        num=p;
    }

     CPYCNSTR( CPYCNSTR &obj)  // copy constructor with a copy of another object with the help of reference variable
    {
        cout<<"COPY CONSTRUCTOR IS CALLED"<<endl;
        num=obj.num;
    }



void display()
{
    cout<<"The number is: "<<num<<endl;
}
    
};

int main(){
    

    CPYCNSTR obj1,obj2,obj3(77),obj4(555);

    CPYCNSTR obj5(obj3); //copy constructor is called by passing an object


    obj1.display(); // calling default constructor num=0;
    obj2.display(); // calling default constructor num=0;
    obj3.display(); // calling parameterized constructor num=77;
    obj4.display(); // calling parameterized constructor num=99;
    obj5.display(); // calling copy constructor with passing copy of object -->obj3  num=77;

return 0;
}