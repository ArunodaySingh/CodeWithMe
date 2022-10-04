// Pointers to Derived Classes in C++
/*
Note=> Agr pointer base class ko derived class se point kera bhi dia to bhi
       agr aap uss pinter ka use kerka display function run kroge tb bhi vo base class k hi function
       run krega. (That's called late binding)
*/

#include<iostream>
using namespace std;
class BaseClass{
public:
int data1;
void Display(int num1){
data1=num1;
cout<<"The data is form Base class "<<data1;
}
};

class DerivedClass:public BaseClass{ //It's should be inherited
    public:
    int data2;
    void Display(int num1){
        data2=num1;
        cout<<"The data is from Derived Class "<<data2;
    }
};

int main()
{  
     BaseClass * base_class_pointer;
     DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    DerivedClass * DerivedClass_pointer;
    BaseClass obj_Base;
    // DerivedClass_pointer=&obj_Base; //(why?)
    DerivedClass_pointer=&obj_derived;
    DerivedClass_pointer->Display(101);
    return 0;
}