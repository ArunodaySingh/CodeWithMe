// C++ Function Templates & Function Templates with Parameters 

#include<iostream>
using namespace std;

template< class T1,class T2>

// float funcAverage(T1 a,T2 b)   // Via using function template we can use different data type input same as we do
// // in class 
// {
//     float avg=(a+b)/2.0;
//     return avg;
// }

void swap(T1 &a,T2 &b)
{
int temp=a;
a=b;
b=temp;
}

int main()
{
    int a=5;
    int b=7;
    // float avg=funcAverage(5.2,2.5);
    swap(a,b);
    cout<<a<<" "<<b;
    // cout<<avg;
    return 0;
}