// Practical of (tute46)

/*
case 1(Multilevel)
class B:public A {
    //order of execution of constructor -> A() then B() 
}
case 2(Multiple Inheritence)
class A:public B,public C{
    //order of execution of constructor ->B() then C() and then A() 
}
case 3(Special Case)
class A:public B,Virtual public C{
    //order of execution of constructor -> C() then B() and then C() 
}
*/

#include<iostream>
using namespace std;
class Base1{
int data1;
public:

Base1(int x)
{
    data1=x;
    cout<<"Constructor of the Base Class 1 is callled "<<endl;
    cout<<"The value of the data data1 is "<<data1<<endl;
}
};

class Base2{
int data2;
public:
Base2(int y)
{
    data2=y;
    cout<<"Constructor of the Base Class 2 is callled "<<endl;
    cout<<"The value of the data data2 is "<<data2<<endl;
}
};
class Derived:public Base2,public virtual Base1{ //Constructor follow how we inherited the classes.
int data3,data4;
public:
Derived(int a,int b,int c,int d):Base1(a),Base2(b){
    data3=c;
    data4=d;
cout<<"Derived Constructor is called here"<<endl;
cout<<"The value of the data3 and data4 is "<<data3<<" "<<data4<<endl;
}
};

int main()
{
    Derived obj(4,5,6,7);
    return 0;
}
