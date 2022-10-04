//Constructor Overloading In C++ using Multiple Constructor
//We can make multiple Constructor in c++
#include <iostream>
#include <cmath>
using namespace std;
class Complex
{
    int a, b;
    friend void distanceCount(Complex o1, Complex o2);

public:
    void Display();
    Complex(int, int); // Initalise The constructor & this is the parametrized Constructor
    Complex(int);
};

Complex::Complex(int x1, int x2) // Class Name :: Constructor()
{
    a = x1;
    b = x2;
}

Complex::Complex(int x1) // Class Name :: Constructor()
{
    a = x1;
    b = 10;
}
void Complex::Display()
{
    cout << "x_axis is " << a << "\n";
    cout << "y_axis is " << b << "\n";
}


int main()
{
    Complex o1(3, 1);
    o1.Display();
    Complex o2(3);
    o2.Display();
    
    
}