// Run time polymorphism using Virtual class
#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
    void display()
    {
        cout<<"Display form A";
    }
};
class B:virtual public A
{

};
class C:virtual public B
{
    
};
class D:virtual public C
{
    
};


int main()
{
 D obj;
 obj.display();
 return 0;
}

// Not in this compiler but actually when we inherit same function 
// Compiler get confuse on which function we talking about to resolve
// this ambiguity we use virtual keyword 
// when we use virtual keyword with the access specifier 
// Compiler get to know the same copy of the function share with all
//  the classes.