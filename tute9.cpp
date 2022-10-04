#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    switch (age)
    {
    case 2:
    cout<<"Your age is 2";
        break;
    case 18:
    cout<<"Your age is 18";
    case 22:
    cout<<"Your age is 22";
    default:
    cout<<"You are not in any special cases";
        break;
    }
}