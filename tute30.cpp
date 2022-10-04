//parametrized constructor
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

Complex::Complex(int x1, int x2) // Class Name :: Constructor()
{
    a = x1;
    b = x2;
}
void Complex::Display()
{
    cout << "x_axis is " << a << "\n";
    cout << "y_axis is " << b << "\n";
}
void distanceCount(Complex o1, Complex o2)
{
    int x_axis = o2.a - o1.a;
    int y_axis = o2.b - o1.b;
    cout << x_axis << endl;
    cout << y_axis << endl;

    float diff = sqrt(pow(x_axis, 2) + pow(y_axis, 2));
    cout << diff << endl;
}

int main()
{
    Complex o1(3, 1);
    // this is called implicit call
    // constructor gets called automatically when
    //  we create the object of the class
    o1.Display();

    Complex o2 = Complex(4, 9); // this is called Explicit called
    o2.Display();
    distanceCount(o1, o2);
}