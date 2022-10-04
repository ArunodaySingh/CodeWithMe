// Constructors With Default Arguments In C++ 
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
    
};

Complex::Complex(int x1, int x2=7) //default argument
{
    a = x1;
    b = x2;
}

void Complex::Display()
{
    cout << "x_axis is " << a << "\n";
    cout << "y_axis is " << b << "\n";
}


int main()
{
    Complex o1(3); //if is passed two parameter here its override the x2=7 with what we give
    o1.Display();
  
}