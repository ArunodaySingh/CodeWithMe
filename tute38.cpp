// Single Inheritance Deep Dive: Examples + Code

#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    int MakeItPublic();
    void setData();
} bas;
class Derived : public Base
{
    int data3;

public:
    void process();
    void display();
} der;
void Base::setData()
{
    data2 = 4;
}
int Base::MakeItPublic() // data 1 is a private type we can't inherit it but we can inherit the
// function which is public and using that function we can set the value of data1;
{
    data1 = 8;
    return data1;
}

void Derived::process()
{
    data3 = data2 * MakeItPublic();
}
void Derived::display()
{
    cout << data3;
}
int main()
{
    der.setData(); // object should be same (otherwise every object have their own variable value)
    der.process();
    der.display();
}