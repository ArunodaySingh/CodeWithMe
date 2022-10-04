// Ambiguity Resolution in Inheritance in C++

#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "Good Morning " << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Suprabhat " << endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    void greet()
    {
        Base2::greet(); // using this compiler get to know ok i have to call the base2 greet() function
    }
};

int main()
{
    // Ambiguity 1
    //   Derived obj;
    //  obj.greet(); //Derived show an error greet is ambigous

    return 0;
}

// Ambiguity resolve
/*
When we have a same function in a base class and derived class
then compiler execute the base class function to resoolve the ambiguity rather then
inherited class function
*/