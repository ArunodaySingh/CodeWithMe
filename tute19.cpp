// What is function overloading C++?
// C++ lets you specify more than one function of the same name in the same scope. 
// These functions are called overloaded functions, or overloads. 
// Overloaded functions enable you to supply different semantics for a function,
// depending on the types and number of its arguments.

#include<iostream>
using namespace std;
int sum(int a , int b , int c)
{
return a+b+c;
}
int sum(int a, int b)
{
return a+b;
}
int main()
{
cout<<sum(3,4,1)<<endl;
cout<<sum(0,2);  
return -1;  
}