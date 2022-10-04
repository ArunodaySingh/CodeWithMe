// Initialization list in Constructors in Cpp
/*
Note Jo variable pahle create hoti hai vo pahle initialize hoti hai.
The initialization list in constructors is another concept of initializing the data members of the class. 
The syntax of the initialization list in constructors is shown below.
/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}

*/
#include<iostream>
using namespace std;

class A{
    int b,a; //initialize first then declare should be first.
    public:
    // A(int data1,int data2):a(data1),b(data2)
    A(int data1,int data2):b(data2),a(b+data1)
     {
     cout<<"The value  is "<<a<<" "<<b<<endl;
    }
};
int main()
{
    A a(4,6);
    return 0;
}