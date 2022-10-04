// Static Data Members & Methods in C++ OOPS
// Static member ek hota hai jisko sbhi object access kerta hai
#include <iostream>
using namespace std;
class Employee
{
    int id;
    float salary;
    static int uid; // uid is the static data member of the class Employee
public:
    void setId();
    void setSalary();
    void getInfo();
    static void count(); // static method declaration
} ep, ep2, ep3;

int Employee::uid; 
// default value is 0; we  have to declare it outside the class
// static memeber can't be  dependent on objects is based on class and their lifecycle is through the whole program

void Employee::setId()
{
    cout << "Please Enter your ID " << endl;
    cin >> id;
    uid++;
    cout << uid << endl;
}

void Employee::setSalary()
{
    cout << "Please Enter your salary " << endl;
    cin >> salary;
}

void Employee::count()
// A static member function can be called even if no objects of the class
// exist and the static functions are accessed using only the class name and the scope
// resolution operator "::" . A static member function can only access static data member,
// other static member functions and any other functions from outside the class.
{
    cout << "Id is the " << uid;
}

void Employee::getInfo()
{
    cout << "Employee Uid is " << uid << endl; // uid is a static member in the class that's why it's value never be change by
                                               // using different object
    cout << "Employee Id is " << id << endl;
    cout << "Employee salary is " << salary << endl;
}

int main()
{
    ep.setId();
    ep.setSalary();
    Employee::count(); // we can call this fucntion using class Name with scope resolution operator;
    ep.getInfo();
    ep2.setId();
    ep2.setSalary();
    ep2.getInfo();
    ep3.setId();
    ep3.setSalary();
    ep3.getInfo();
}