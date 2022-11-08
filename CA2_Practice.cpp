// Topcic which we have to covered today

/*
1.
1.1 Friend Function
1.2 Friend Class
2. Polymorphism
2.1 Compile time polymorphism
2.1.1 Function Overloading
2.1.2 Operator Overloading
2.2 Run time polymorphism
2.2.1 Virtual Function
2.2.1.1 Impure Virtual Function => Virtual Fucntion & Virtual Class
2.2.1.2 Pure Virtual Function => Abstract Class
3. This pointer
4. Exception Handling
4.1 Pre-defind handler
4.2 user-defined handler
*/

// #include<bits/stdc++.h>
// using namespace std;

// class A
// {
//     // yaha bhi likh du to koi fark nhi padega
//     int x; // private member
//     //  friend void use_outside_the_class(A); // friend function declaration
//     public:
//     friend  void setdata(A);
//     friend void use_outside_the_class(A);  //public

// };

// void use_outside_the_class(A obj)
// {
// cout<<obj.x;
// }
// void setdata(A obj)
// {
//     obj.x=5;
// }

// int main()
// {
//     A obj;
//     setdata(obj);
//     use_outside_the_class(obj);
//
//  return 0;
// }

// Friend class
// #include<bits/stdc++.h>
// using namespace std;

// class A
// {
// int x=6;
// int a=6;
// void setdata()
// {
// a=a++;
// }
// friend class B;
// };

// class B
// {
// public:
// void output(A obj)
// {

//     cout<<obj.x<<obj.a;
// }
// };

// int main()
// {
//  A obj;
//  B obj2;
//  obj2.output(obj);
//  return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class A
// {
//     public:
//     int num1,num2;
//     void setinput(int x,int y)
//     {
//         num1=x;
//         num2=y;
//     }
//     void output()
//     {
//         cout<<num1<<" "<<num2;
//     }
// };

// int main()
// {
//  int num1,num2;

//  cin>>num1>>num2;
//  A obj;
//  obj.setinput(num1,num2);
//  try{

//     if(obj.num2==0) throw (num2);
//  }
//  catch(int x)
//  {
//  cerr<<"Always give zero";
//  }
//  try{
//      if(obj.num1==0) throw(num1);
//  }
//   catch(int y) // we can also use catch(...)
//  {
//     cerr<<"Always give zero";
//  }
//  obj.output();

// return 0;
//  }

// #include<bits/stdc++.h>
// using namespace std;

// class base
// {
// public:
// virtual void output() //It just overcome the default behaviour of preference
// {
//     cout<<"I am base class";
// }

// };

// class derived: public base
// {
// public:
// void output() //function overriding
// {
//     cout<<"I am derived class";
// }
// };

// int main()
// {
//  base * meinhupointer;
//  derived obj;
//  meinhupointer =&obj;
//  meinhupointer->output();
//  return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// class A
// {
// public:
//     void fun()
//     {
//         cout << "Hey A";
//     }
// };
// class B: virtual public A
// {
// public:
//     void fun()
//     {
//         cout << "Hey B";
//     }
// };
// class C:virtual public B
// {
// public:
//     void fun()
//     {
//         cout << "Hey C";
//     }
// };

// int main()
// {
//     B obj;
//     obj.fun();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class A
// {
// public:
//     virtual void function_name()=0;
// };
// class B:  public A
// {
//  void function_name()
//  {
//     cout<<"hey";
//  }
// };
// int main()
// {
//    B obj;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Amarjeet
// {
// public:
//     int x;
   
//     void setdata(int x)
//     {
//         this->x = x; // *this pointer always triigerd the current instances not the pass by value instances and its passed through the object 
//     }
   
//     void getdata()
//     {
//         cout << x;
//     }
// };
// int main()
// {
//     Amarjeet obj;
//     obj.setdata(5);
//     obj.getdata();
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
class A
{
    int x,y;
    public:
 void input(int a,int b)
 {
x=a;
y=b;
}
void output()
{
    cout<<x<<" "<<y;
}
A operator+(A &obj);
};
A A::operator+(A &obj)
{
    A obj4;
    obj4.x=x+obj.x;
    obj4.y=-y+obj.y;
    return (obj4);
}
int main()
{
A obj1;
A obj2;
A obj3;
obj1.input(4,5);
obj2.input(5,6);
obj3 = (obj1 + obj2);
obj3.output();
return 0;
}
