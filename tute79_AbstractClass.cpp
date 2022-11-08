// Runtime polymorphism can be achieved by virtual class, Abstract class, and Virtual function
// virtual can be two type => pure virtual and impure virtual

/*
In Abstract class we don't define the func'n just declare it. At the time of inheritence 
Derived class define the Abstract class func'n actual functionality
*/

#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    virtual void display()=0; //Syntax for pure virtual declaration
};

class B:public A
{
public:
void display() //function overriding
{
    cout<<"Base class is A and Derived class is B"<<endl;
}
};
class C:public B
{
    public:
    void display()
    {
        cout<<"Base class is B and derived class is C"<<endl;
    }
};

int main()
{
//  A a1; // can't be able to make a object of abstract class
    B obj;
    obj.display();
    C obj1;
    obj1.display();
 
 return 0;
}

// Pure virtual functions can be specified briefly in the Abstract class, which will be shared by all derived classes. 
// You are still unable to construct objects of the Abstract class.
// Furthermore, the Pure Virtual function must be specified separately from the class description.
// The compiler will throw an error if you define it within the class description.
// It's against the law to define pure virtual inline.


// Another real-life example of abstraction is the ATM machine; 
// we all use the ATM machine to conduct operations such as cash withdrawal,
// money transfer, retrieving mini-statements, and so on,
// but we have no access to the ATM's internal information.
// Data abstraction can be used to protect data from being accessed by unauthorized methods

/*
Interface vs Abstract Classes: 
An interface does not have implementation of any of its methods, 
it can be considered as a collection of method declarations. 
In C++, an interface can be simulated by making all methods as pure virtual.
In Java, there is a separate keyword for interface. 

We can think of Interface as header files in C++, 
like in header files we only provide the body of the class that is going to implement it.
Similarly in java in Interface we only provides the body of the class and 
we write the actual code in whatever class implements it.
*/