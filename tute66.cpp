// C++ Templates: Class Templates with Default Parameters

#include<iostream>
using namespace std;

template <class T1=int,class T2=float , class T3=string> //As we provide a function default value same thing we can do here also
// but when we passed the different type  using called template it's override it;
class Student{
T1 marks1;
T2 marks2;
T3 Name;
public:
void setData(T1 a,T2 b,T3 c){
marks1=a;
marks2=b;
Name=c;
}
void getData()
{
    cout<<"The value of marks 1 is "<<marks1<<" & "<<marks2<<" The name of the Student is "<<Name<<endl;
}

};
int main()
{
    Student<string , int , int>obj;
    obj.setData("Arun",87,97);
    obj.getData();

    return 0;
}