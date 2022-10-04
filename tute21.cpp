#include<iostream>
using namespace std;

class Employee
  {
      private:
      int a,b,c;
      public:
      int e,d;
      void getData(int a,int b,int c); //function declaration
      void setData(){
        cout<<"The value of a is"<<a<<endl;
        cout<<"The value of b is"<<b<<endl;
        cout<<"The value of c is"<<c<<endl;
        cout<<"The value of d is"<<d<<endl;
        cout<<"The value of e is"<<e<<endl;
      }
  };

// program to show that scope resolution operator :: is used
// to define a function outside a class  

void Employee::getData(int a1 ,int b1 ,int c1)
{
a=a1;
b=b1;
c=c1;
}


int main()
{
  Employee e1;
  e1.getData(1,2,3);
  e1.d=121;
  e1.e=234;
  e1.setData();
}