// ==> When Two Operands are there

//  In this example, we have 3 variables “a1”, “a2” and “a3” of type “class A”.
//  Here we are trying to add two objects “a1” and “a2”, which are of user-defined type
//  i.e. of type “class A” using the “+” operator. This is not allowed,
//   because the addition operator “+” is predefined to operate only on built-in data types.
//   But here, “class A” is a user-defined type, so the compiler generates an error.
//   This is where the concept of “Operator overloading” comes in.
//  Now, if the user wants to make the operator “+” to add two class objects,
//  the user has to redefine the meaning of the “+” operator such that it adds two class objects.
//  This is done by using the concept “Operator overloading”.
//  So the main idea behind “Operator overloading” is to use c++ operators with class variables or class objects.
//   Redefining the meaning of operators really does not change their original meaning;
//   instead, they have been given additional meaning along with their existing ones.

//  A simple and complete example

#include <bits/stdc++.h>
using namespace std;
class A
{
    int x, y;

public:
    void input(int a, int b)
    {
        x = a;
        y = b;
    }
    void output()
    {
        cout << "x=" << x << " & "
             << "y=" << y << endl;
    }
    A operator+(A &obj2) // call by refernce
                        // whatever we can use here(*,/,+,-) it's just use to identify the which opearator
                        // want to call.
    {
        A t;
        obj2.x = 9;
        t.x = x + obj2.x;
        t.y = y + obj2.y;
        return (t);
    }
    A operator-(A obj2) //  if we don't use &(Apperands) then object pass as a call by value but it's not affect the output
                        // whatever we can use here(*,/,+,-) it's just use to identify the which opearator
                        // want to call
    {
        A t;
        obj2.x = 9;
        t.x = x + obj2.x;
        t.y = y + obj2.y;
        return (t);
    }
};
int main()
{
    A obj1, obj2, store;
    obj1.input(3, 4);
    obj2.input(5, 6);
    obj1.output();
    obj2.output();
    store = obj1 + obj2; //    Adding two object
                         //    Note* before operator treas as current instances and after operator treat as
                         //    as argument which we passed
    store.output();

    store = obj1 - obj2; // Just we change the operator and we can treat as unique function

    store.output();

    return 0;
}

/*
=> Dry Run

x=3 & y=4
x=5 & y=6
x=12 & y=10

*/

// refer https://www.geeksforgeeks.org/operator-overloading-c/