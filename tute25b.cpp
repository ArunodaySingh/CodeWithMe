//Array of Objects in C++
#include<iostream>
using namespace std;

class Employee{
int a,b;
public:
void setId();
void setObject(Employee o1,Employee o2);
void getId();
} ;
void Employee::setId(void)
{
    cout<<"Enter the Value of A and B "<<endl;
    cin>>a>>b;

}

void Employee::setObject(Employee o1,Employee o2)
{
a=o1.a+o2.a;
b=o1.b+o2.b;
}

void Employee::getId(void)
{
    cout<<a<<"+"<<"i"<<b<<endl;
}


int main()
{
Employee e1,e2,e3;
e1.setId();
e1.getId();
e2.setId();
e2.getId();
e3.setObject(e1,e2);
e3.getId();


}