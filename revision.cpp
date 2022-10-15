#include<iostream>
using namespace std;
class A{
  public:
  A() {cout<<"1st"<<endl;}
  ~A() {cout<<"1st des"<<endl;}
};
class B:public A
{
  public:
  B(){cout<<"Base class Constructor "<<endl;}
  ~B(){cout<<"Base class Destructor"<<endl;}
};

int main()
{
B obj;
return 0;
}

