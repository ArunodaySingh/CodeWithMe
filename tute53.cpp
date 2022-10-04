// this Pointer in C++
// This is a keyword which is a pointer which points to the  object which is being created.
/*
As we know that one copy of member function is shared between all object.
The use of “this” pointer helps to points to the object which invokes the member function.

In C++ programming, this is a keyword that refers to the current instance of the class. There can be 3 main usage of this keyword in C++.

It can be used to pass current object as a parameter to another method.
It can be used to refer current class instance variable.
It can be used to declare indexers.

refer https://www.javatpoint.com/cpp-this-pointer
*/

#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void  setData(int a)
    { // yaha basically this ek pointer hai jo object ko point kerta hai jiss
     //  object ka through usne member function ko call kia hai.
           (*this).a = a;
           
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

// The main thing to note here is that the function “setData” is returning an object 
// on which we have used the “getData” function. so we don’t need to call the function “getData” explicitly.

// class A{
//     int a;
//     public:
//          A & setData(int a){
//             this->a = a;
//             return *this;
//         }

//         void getData(){
//             cout<<"The value of a is "<<a<<endl;
//         }
// };


int main()
{
    A a;
    a.setData(4);
    a.getData();
    return 0;
}
