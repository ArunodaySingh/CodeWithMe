// Copy Constructor in C++

#include<iostream>
using namespace std;
class Number
{
private:
   int n;
public:
Number();
Number(int num){
    n=num;
}

Number(Number &obj){  //Define copy constructor here
    n=obj.n;
}

void show()
{
    cout<<"I am Invoked "<<endl;
    cout<<"Value is "<<n<<endl;
}  
};

int main()
{
Number n1(46);
n1.show();
Number n2(n1); //copy constructor invoked
n2.show();
Number n3=n1; // this is the also way to make a Constructor invoked
n3.show();
}

//Notes
// If we don't declare the constructor , Compiller done it by itself
// So you doesn't get any kind of error