#include<iostream>
using namespace std;

int main(){
    

//ARRAY DECLARATION

//type 1
int marks1[4]={97,98,99,100};
cout<<"Marks in array 1 are as follows:"<<endl;
cout<<marks1[0]<<endl;
cout<<marks1[1]<<endl;
cout<<marks1[2]<<endl;
cout<<marks1[3]<<endl;


//type 2
int marks2[4];
marks2[0]=50;
marks2[1]=60;
marks2[2]=70;
marks2[3]=80;

cout<<"Marks in array 2 are as follows:"<<endl;
cout<<marks2[0]<<endl;
cout<<marks2[1]<<endl;
cout<<marks2[2]<<endl;
cout<<marks2[3]<<endl;




//type 3
int marks3[4];

//user input values
cout<<"Enter values of array marks3"<<endl;
for (int i = 0; i <4 ; i++)
{
    cin>>marks3[i];
}

//printing values
for (int i = 0; i <4 ; i++)
{
    cout<<"Value at index "<<i<<" is:"<<marks3[i]<<endl;
}

return 0;
}