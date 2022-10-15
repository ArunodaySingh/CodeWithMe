#include<iostream>
using namespace std;
int main()
{
register int i=1;
int *ptr=&i;
int a=i++;
cout<<*ptr<<" "<<a;
}
//Flow of constructor and destructor


