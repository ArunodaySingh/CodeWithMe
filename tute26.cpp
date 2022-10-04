//Friend Functions in C++
#include<iostream>
using namespace std;
class Complex
{
int a,b;
friend Complex sumComplex(Complex o1,Complex o2); //friend  <return_type>  <function_name>(argument/s); 
public:
void setNumber(int n1, int n2)
{
    a=n1;
    b=n2;
}
void printNumber()
{
    cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
}

} ;

Complex sumComplex(Complex o1,Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;

}

int main()
{
Complex c1,c2;
c1.setNumber(3,4);
c1.printNumber();
c2.setNumber(4,5);
c2.printNumber();
Complex sum=sumComplex(c1,c2);
sum.printNumber();

}

// The friend function is invoked like a regular function without using
// the object and is declared in the public or private part.
// It is not in the scope of the class that declares it as a friend.
// It has to use the object name and dot membership operator with the
// member name to access the member names.

//               Advantages of Friend Function in C++
// The friend function allows the programmer to generate more efficient codes.
// It allows the sharing of private class information by a non-member function.
// It accesses the non-public members of a class easily.
// It is widely used in cases when two or more classes contain the
// interrelated members relative to other parts of the program.
// It allows additional functionality that is not used by the class commonly.