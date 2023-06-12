// pointer is data type which hold the address of another data type
//& --> address of operator  ->reference operator
//* --> Dereference operator
#include <iostream>
using namespace std;
int main()
{
    // Pointer declaration
    string food = "Pizza"; // Variable declaration
    string *ptr = &food;
    // Reference: Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";
    // Dereference: Output the value of food with the pointer (Pizza)
    cout << *ptr << "\n";
    // pointer to pointer
    string **ptr2 = &ptr;
    cout << ptr2 << endl;
    cout << *ptr2 << endl;
    cout << **ptr2;
}
