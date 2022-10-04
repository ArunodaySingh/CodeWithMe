// Multiple Inheritance Deep Dive with Code Example in C++
/*
class Name:visibility-mode class A,visibility mode class B
*/

#include <iostream>
using namespace std;

class A
{
protected:
    int marks1 = 15;
};
class B
{
protected:
    int marks2 = 25;
};
class C : private A, private B
{
    int marks3 = 35;

public:
    void sum()
    {
        cout << "Sum of the marks is " << (marks1 + marks2 + marks3);
    }
};
/*
     marks2 is private because we inherited both class via private visibility mode;
Here marks1 is private because we inherited both class via private visibility mode;
However Sum is a public memeber function and it can use the marks2 and marks1 because all in a same class

*/

int main()
{
    C obj;
    obj.sum();
}