//C++ Objects Memory Allocation & using Arrays in Classes
#include<iostream>
using namespace std;
class Employee
{
int Empid[100];
int Empsalary[100];
int counter;
public:
void initialiseCounter();
void setEmpID();
void displayEmpsalary();
} e1;
void Employee::initialiseCounter(void)
{
counter=0;
}
void Employee::setEmpID()
{
cout<<"Enter Employee Id ";
cin>>Empid[counter];
cout<<"Enter the Employee Salary ";
cin>>Empsalary[counter];
counter++;
}
void Employee::displayEmpsalary()
{
    for(int i=0;i<counter;i++)
    {
        cout<<"The Employee ID is "<<Empid[i]<<" And salary is "<<Empsalary[i]<<endl;
    }
}

int main()
{
e1.initialiseCounter();
e1.setEmpID();
e1.setEmpID();
e1.setEmpID();
e1.displayEmpsalary();

}