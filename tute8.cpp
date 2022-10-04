//contant

//use const keyword to fixed the value
#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    //setw manipulator in iomnip
    int x=1;
    int y=12;
    int z=123;
    // cout<<x<<endl<<y<<endl<<z;
   
    cout<<setw(5)<<x<<endl<<setw(3)<<y<<endl<<setw(3)<<z;
}

//precedence operator 

// which operator have more precedence than other operator
//eg multiplication have more precedence compare to add/sub and if precedence match than 
// we go to check for associativity