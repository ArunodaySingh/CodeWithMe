// By using Operator Overloading

#include<bits/stdc++.h>
using namespace std;

class Time
{
int min;
int hrs;
public:
Time()
{
    
}
Time(int x,int y)
{
min=x;
hrs=y;
}
operator int();  // Or  operator=(int);
operator float();
};

Time::operator int()
{
 return min*hrs;
}

Time::operator float()
{
 return min*hrs-1;
}

int main()
{
Time t(4,5);
int val=t;
float val2=t;
cout <<val<<" "<<val2;
return 0;
}