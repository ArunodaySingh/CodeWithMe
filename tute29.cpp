// Constructors In C++?

// Constructor in C++ is a special method that is invoked automatically at the time of object creation. 
// It is used to initialize the data members of new objects generally.
// The constructor in C++ has the same name as the class or structure.
// Constructor is invoked at the time of object creation.
// It constructs the values i.e. provides data for the object
// which is why it is known as constructors.
// Constructor does not have a return value, hence they do not have a return type.
// Should be return in the public section;
// As many as object you make constructor invoked at that many times.
// It can have default value
// We cannot refer their address //extra hai <-

#include<iostream>
using namespace std;
class Complex
{
int a,b;
public:
void Display();
Complex(); //Initalise The constructor & this is the default Constructor
};

// Constructor does not have a return value, hence they do not have a return type
Complex::Complex() //Class Name :: Constructor() 
{
    a=5;
    b=6;
}
void Complex::Display()
{
    cout<<"A value is "<<a<<"\n";
    cout<<"B value is "<<b<<"\n";
}


int main()
{
    Complex o1;
    //constructor gets called automatically when
    // we create the object of the class
    o1.Display();

}