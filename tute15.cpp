#include<iostream>
using namespace std;
int sum(int,int);
void sb();

int main()
{ 
    int n,m;
    cout<<"Enter the value of n";
    cin>>n;
    cout<<"Enter the value of m";
    cin>>m;
    cout<<"The output is "<<sum(n,m);
    sb();
}
int sum(int a,int b)
{
    return a+b;
}
void sb()
{
    cout<<"I am a hero";
}