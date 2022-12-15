//function template overloading

#include<bits/stdc++.h>
using namespace std;

template <class T1,class T2> 

T2 sum(T1 num1,T2 num2)
{
 return num1+num2;
}
template <class T1>
T1 sum(T1 num1)
{
 return num1;
}

int main()
{
 int num1;
 float num2;
 cin>>num1>>num2;
 cout<<sum<int>(num1)<<endl;
 cout<<sum<int,float>(num1,num2);
 return 0;
}