// Revisiting Pointers: new and delete Keywords in CPP

#include <iostream>
using namespace std;
int main()
{
    // Basic Example
    int a = 4;
    int *ptr = &a;
    cout << "It's not dynamically allotes memory " << *(ptr) << endl;

    // new keyword
    //  The new operator is an operator which denotes a request for memory allocation on the Heap.
    // If sufficient memory is available, new operator initializes the memory and returns the address of
    // the newly allocated and initialized memory to the pointer variable.


    int *p = new int(277);
    cout << "It's dynamically alloted memory " << *(p) << endl;

    int *arr = new int[4]; // syntax for initializing array using new keyword
    // cout<<arr It's return the address of arr
    
    *(arr) = 121; // Here we use the dereference operator
    *(arr + 1) = 122;
    *(arr + 2) = 123;
    *(arr + 3) = 124;
    delete arr; // delete opearator delete the allocated memory.
    for (int i = 0; i < 4; i++)
    {
        cout << (arr[i]) << endl; // here we use the index
    }

    return 0;
}

   
    // When you create an object of class using new keyword(normal new).
    // The memory for the object is allocated using operator new from heap.
    // The constructor of the class is invoked to properly initialize this memory.
    // Syntax is A *a1 = new A;
    // new create a memory of A type & this memory should be refer by pointer *a1 which
    // also have a A type.

    // We can't use 'a1.input()' because it is a refernce of a object.we have to use a1->input() like that first
    // derefernce then point the function. 