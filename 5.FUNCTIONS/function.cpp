/*Functions are basically a dedicated piece of code which is performing a specific task.
To make an optimized solution for a problem, it is to be divided into small parts and 
functions are implemented to solve an individual part of the problem and at the end everything 
somes up as single solution*/

#include <iostream>
using namespace std;

//Function prototyping i.e letting the compiler know that our program has a function of soem name

int sum(int, int);
void finish();

// function 1
int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

//function 2
void finish()
{
    cout << "Programn Finished Properly";
}

int main()
{
    int a, b;

    cout << "Enter the value of A:" << endl;
    cin >> a;
    cout << "Enter the value of B:" << endl;
    cin >> b;

    cout << "Sum of the number is:" << add(a, b)<<endl; //calling function 1

    finish(); //function 2
    return 0;
}