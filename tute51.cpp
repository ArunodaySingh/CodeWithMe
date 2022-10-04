// Pointers to Objects and Arrow Operator in CPP

#include <iostream>
using namespace std;
class Complex
{
    int real, imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getData()
    {
        cout << "The real value is " << real << endl;
        cout << "The imaginary value is " << imaginary << endl;
    }
};
int main()
{
    // Complex c1;
    // Complex *ptr=&c1;  This is the one way to use pointer with object
    // (*ptr).setData(4,5);
    // (*ptr).getData();
/* Complex *ptr = new Complex; // It's create a pointer of complex type which reference the Complex object;
        (*ptr).setData(4, 5);
        (*ptr).getData();
*/
    // What if i don't want to use derefernce opeartor;
    // Then we can use arrow opearotr which tells the compiler
    // Bhai iss pointer ko derefernce krdo or saath mein function ko call bhi krodo(basically arrow opeator we use with pointer)

/*   ptr->setData(11, 51);
     ptr->getData();
*/
    Complex *ptr = new Complex[4]; // It's create a pointer of complex type which reference the Complex object;
//  All are do the same work
   (ptr[1]).setData(4, 5);
    (*(ptr+1)).setData(4,5);
    (ptr+1)->getData();

    return 0;
}