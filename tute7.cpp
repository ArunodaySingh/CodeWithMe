// #include<iostream>
// using namespace std;
// int c=45;
// int main()
// {
// int a ,b,c;
// cout<<"enter the value of a and b and c";
// cin>>a>>b>>c;
// cout<<a+b;
// cout<<::c; //scope resolution operator ::

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Float double literals
    // float f=34.5;
    // long double ld=34.5;
    // double d=48.6;
    // cout<<sizeof(f)<<endl;
    // cout<<sizeof(34.5l)<<endl;
    // cout<<sizeof(d);

    //*******reference variable
    // rishi-->arun-->hero
    float x = 34.5;
    float *y = &x;
    float *z = &y; // declaration of pointer syntax
    cout << y << endl
         << z << endl; // derefernce operator

    // typecasting
    //  cout<<int(x);
}

// Note 
// *Type Casting are two types Internal or Automatic and External or Manual Internal typecasting done be comiler itself(higher type automatic convert into lower type by compiler) eg.int a;
// a = 5 / 2 5 / 2 = 2.5 but it print 2 compiler 2 only.
// But in the case if i want to store int type data into float then we have to do a manual typecasting

// eg. 
// a=5;
// b=2;
// float c;
// c=float(a)/float(b);
// cout<<c;