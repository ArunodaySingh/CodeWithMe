#include <iostream>
using namespace std;

class Student
{
    // data member
    int a;
    int b;

public:
    // Student() {}
    Student(int a, int b) // argument
    {
        this->a = a;
        this->b = b;
    }
};

int main() // userdefined function
{
    Student obj2;
    Student obj(4, 5);
    obj2 = obj;
    return 0;
}
