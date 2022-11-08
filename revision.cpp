// #include<iostream>
// using namespace std;
// int main()
// {
// register int i=1;
// int *ptr=&i;
// int a=i++;
// cout<<*ptr<<" "<<a;
// }
//Flow of constructor and destructor

//Constructor flow & Destructor Flow

#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
    A(){
        cout<<"Constructor of the Base class "<<endl;
    }
    ~A()
    {
        cout<<"Destructor of the Base class "<<endl;
    }
};
class B:public A
{
    public:
    B()
    {
        cout<<"Constructor of the derived class "<<endl;
    }
    ~B()
    {
        cout<<"Destructor of the Derived class "<<endl;
    }
};
int main()
{
    A obj;
 return 0;
}
// constructor top to bottom 
// destructor bottom to up
// output 
/*
Constructor of the Base class
Constructor of the derived class
Destructor of the Derived class
Destructor of the Base class
*/