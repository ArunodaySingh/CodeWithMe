/*
Conversion of primitive data type to user-defined type: 2 ways using constructor and operator overloading 
To perform this conversion, the idea is to use the constructor to perform type conversion during the object creation. 
Below is the example to convert int to user-defined data type:
*/

// Using constructor

#include<bits/stdc++.h>
using namespace std;

class timech
{
int x;
int y;
public:
timech()
{
    x=0;
    y=0;
}
timech(int t) // declare constructor to conversion basic to class type
{
    x=t/60;
    y=t%60;
}

void display()
{
cout<<x<<"/t"<<y;
}

};

int main()
{
 timech obj;
 int value=5;
 obj=value; // It's not possible becuase we can't pass the integer value to the object type at this time we 
 // have to call a constructor which used to convert the integer value to object
 return 0;
}

// Using Operator Overloading

#include<iostream>
using namespace std;

class Time
{
private:
int hrs;
int min;
public:
Time()
{
    hrs=0;
    min=0;
}
void operator=(int); //overloading function 
void display();
};

void Time::operator=(int t) // declaration
{
hrs=t/60;
min=t%60;
}

void Time::display()
{
cout<<hrs<<" "<<min;
}

int main()
{
    int t;
    Time t1;
    t1=6;
    t1.display();
}
