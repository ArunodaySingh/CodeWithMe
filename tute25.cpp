//Array of Objectsin C++
#include<iostream>
using namespace std;

class Employee{
int id;
public:
void setId();
void getId();
} ;
void Employee::setId(void)
{
    cout<<"Enter the ID "<<endl;
    cin>>id;

}

void Employee::getId(void)
{
    cout<<"The id of the User is "<<id<<endl;
}
int main()
{
    Employee ep[3]; //we can make array of objects using thsi syntax;
for (int i = 0; i < 3; i++)
{
   ep[i].setId();
   ep[i].getId();
}

}