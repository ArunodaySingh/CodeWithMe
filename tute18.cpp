//recursion
#include<iostream>
using namespace std;

int fab(int n) //understand it later
{
    if(n<=2)
    {
        return 1;
    }
    return fab(n-1)+fab(n-2);
}

int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

int main()
{
    int n;
    cout<<"enter tha value of no. ";
    cin>>n;
    cout<<factorial(n);
    cout<<"The term in fibonacci sequence at position "<<fab(n);
    return 0;
    
}