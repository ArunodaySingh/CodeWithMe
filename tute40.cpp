//Multilevel Inheritance Deep Dive with Code Example in C++ 
#include<iostream>
using namespace std;

class Student{
int roll_no;
public:
long  set_roll_No(long int n);
};
long Student::set_roll_No(long int n)
{
    roll_no=n;
    return roll_no;
}

class Subject:public Student{

public:
string sub1="Maths";
string sub2="Chemistry";

};

class Marks:public Subject{
int marks1=90,marks2=95;
public:

void Display(long int n){
cout<<"Roll Number of the student is "<<set_roll_No(n)<<" And subject is "<<sub1<<" "<<sub2<<" And marks is "<<marks1<<" "<<marks2;
}
} marksobj;

int main()
{
   marksobj.Display(18021);
}