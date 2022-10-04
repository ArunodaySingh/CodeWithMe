#include<iostream>
using namespace std;
class Employee
{ 
    public:
    void display(char *s)
    {
      cout<<*s;
    }
    
} ep;


int main()
{
char character='s';
 ep.display(&character);
}

