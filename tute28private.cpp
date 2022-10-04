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
class Derived : private Base //inherit as a private class
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
    setData(); //we can call it inside the public memeber function 
    data3 = data2 * MakeItPublic(); //inside public function we can called privare member but can't by using object(direct through main function)
}
void Derived::display()
{
    cout << data3;
}
int main()
{
   // der.setData(); we can't called it through object because now it become private
    der.process();
    der.display();
}