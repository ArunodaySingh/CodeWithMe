// Protected Access Modifier in C++ |

/*
for a protacted member
                             Public Derivation | Private Derivation | Protected Derivation
  1.Private                   //not inherited  |   //not inherited  |   //not inherited
  2.Protected                 //Protected      |   //Private        |   //Protected
  3.Public                    //Public         |   //Private        |   //Protected
*/

#include <iostream>
using namespace std;
class Base
{
    public:
    void setData();
    int DisplayA();
private:
    int b; // Bahhot security magta hai koi inherit na kr paye
protected:
    int a; // want security also but inherit ho jaye (not as public variable does)
};
 void Base::setData()
 {
    a=6;
    b=7;
 }
int Base::DisplayA()
{
    return b;
}
class Derived : protected Base
{
public:
void calledsetData();
void Display();
} der;

void Derived::Display()
{
    cout<<a<<endl;
    cout<<DisplayA();
}
void Derived::calledsetData()
{
    setData();
}

int main()
{
 der.calledsetData();
 der.Display(); 
 //display is the public fucntion of the child class we can use this to called DisplayA because
 // we can't directly access protected function or variable from the main function  
}