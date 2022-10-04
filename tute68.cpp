// Member Function Templates & Overloading Template Functions in C++

#include<iostream>
using namespace std;

template<class T1>
class Complex{
    private:
    T1 data;
    public:
    Complex(T1 x){
        data=x;
    }
    void display();
   

};

template<class T1> // if we want to define function (not constructor) outside the class
// then we follow the above syntax

//error: 'obj' does not name a type  obj.display(); if we use different class Type  
void Complex<T1>::display() //syntax
{
    cout<<data;
}

//another concept based on priority
// template<class T1>
// void func(T1 a)
// {
//     cout<<"I am called when exact match not found"<<a<<endl;
// }

// void func(int a) // iget the priority if parameter are int type
// {
//     cout<<"I am called when exact match found "<<a<<endl;
// }


int main()
{
    Complex obj(3.4);
    obj.display();
    // func( 5.5);
    return 0;
}