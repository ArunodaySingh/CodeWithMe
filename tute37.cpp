// Inheritance Syntax & Visibility Mode in C++

/*
->default visibility mode is private
->private visibility mode=Public member of the base class become private member of the derived class
->public visibility mode=public member of the base class becomes public member in the derived class
-> what about private member in base class => it's not inheritable
*/

#include <iostream>
using namespace std;

class Employee // Base class
{
public:
    int id;
    float salary;

    // when object created it's check the constructor also if it's not find it show error.
};

// class {derived-class}:{visibility mode} {base class name}
class programmer : Employee
{
public:
    programmer(int e_id)
    {
        id = e_id;
    }
    void getData()
    {
        cout << id;
    }
};

int main()
{
    programmer harry(121);
    harry.getData();
}