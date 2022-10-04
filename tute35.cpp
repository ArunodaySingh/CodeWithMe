//Destructor in C++

//Destructor never takes any argument never return any value;
#include<iostream>
using namespace std;
static int count;
class num
{
    // If you initalize count inside the class then everytime it's initialize value '0'
    // to the count
    public:
    num()
    {
    count++;
      cout<<"Constructor is Created "<<endl;
      cout<<"Constructor Value is "<<count<<endl;
    
    }
    ~num()
    {
        count--;
        cout<<"Constructor is Destoryed "<<endl;
        cout<<"Constructor Value is "<<count<<endl;
        
    }

};

int main()
{
    num n1;
    {
        cout<<"This object only available within the scope "<<endl;
        num n2,n3;
    }

}