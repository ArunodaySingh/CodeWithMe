// special function scope throught the program;
// declare and define inside the class like member function(but isn't)


// For single operands are there (uniary operands);

#include <bits/stdc++.h>
using namespace std;
class A
{
   int x, y;

public:
   void input(int a, int b)
   {
      x = a;
      y = b;
   }
   void output()
   {
      cout << "x=" << x <<" & "<< "y=" << y<<endl;
   }
   void operator*()
    // whatever we can use here(*,/,+,-) it's just use to identify the which opearator  
    // want to call.
   {
      x = -x+y;
      y = -y+x;
   }
};
int main()
{
   A obj;
   obj.input(3,4);
   obj.output();
   *obj; //{calling the operator function} 
   obj.output();

   return 0;
}

/*
Why we need operator overloading
=> we use operators to perform some operations on operands but
   these operation can only be perform  on primitve types for eg
   if i want to do sum two different object we can't do by using
   operator but it can be achieve via operator overloading
   it's comes under compile time polymorphisn.
=> Operator overloading can be achieve by using function with operator keyword
=> we treat operator in two ways uniary and binary
=> for unary syntax are different
Syntax: void operator-() // operator is a keyword subtract identify the function role
{

}
};
int main()
{
   A a1;
   -a1{calling the opeartor function}
}

*/