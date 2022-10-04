// Virtual Base Class in C++
// refer https://www.geeksforgeeks.org/virtual-base-class-in-c/
/*
To resolve this ambiguity when class A is inherited in both class B and class C,
it is declared as virtual base class by placing a keyword virtual as :
*/

#include <iostream>
using namespace std;

class A
{
public:
    int a;
    A() // constructor
    {
        a = 10;
    }
};

class B : public virtual A
{
};

class C : public virtual A
{
};

class D : public B, public C
{
};

int main()
{
    D object; // object creation of class d
    cout << "a = " << object.a << endl;

    return 0;
}
// Explanation :The class A has just one data member a which is public.
// This class is virtually inherited in class B and class C.
// Now class B and class C becomes virtual base class and no duplication of data member a is done.

//When a class is specified as a virtual base class, it prevents duplication of its data members. 
//Only one copy of its data members is shared by all the base classes that use the virtual base class.