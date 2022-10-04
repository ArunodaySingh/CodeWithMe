// OOPs - Classes and Objects
// C++ --> initially called --> C with classes by stroustroup
// Structure had limitations
//     ->members are public
//     ->No methods
// Classes --> structures+more
// Classes --> can have methods and properties
// Classes --> can make few member private and few public
// structures in c++ are typedefed
// you can declare objects along with the class declaration like this.
/* class Employee{
   class definition
} harry,rohn,lovish */

// harry.salary=8 makes no sense if salary is private;
// Nesting of member function

#include <iostream>
using namespace std;
class checkbin
{
private:
    string s;
    void checkstring(); // declration
public:
    string k;
    void readstring();

} drivercheck;
void checkbin ::readstring() // using scope resolution opeartor we call readstring function
{
    cout << "Enter the String \n";
    cin >> s;
    drivercheck.checkstring(); // we can't called it directly that's why i called it from here
}

void checkbin ::checkstring() // definition
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0' || s.at(i) == '1')
        {
            cout << "String can't be started from Numeric value";
            exit(0);
//When a user wants to exit a program from this function is used.
//It is a void return type function that calls all functions registered at the exit and terminates the program.
//File buffers are flushed, streams are closed, and temporary files are deleted and hence memory is freed.

//break();
// This function is generally used to come out of a loop at the instant.
// When a break statement is executed it transfers the control to the 
// statements that follow the switch or loop.
        }
    }
    cout << "String is genuine";
}

int main()
{
    drivercheck.readstring(); // calling function
}