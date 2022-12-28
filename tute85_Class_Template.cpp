/*
Class Template can also be defined similarly to the Function Template.
When a class uses the concept of Template, then the class is known as generic class.
Syntax
template<class Ttype>  
class class_name  
{  
//statement 
} 
*/

#include <bits/stdc++.h>
using namespace std;

template <class T1, class T2>
class sum
{
private:
    T1 x;
    T2 y;

public:
    // sum()
    // {
    //    this->x=x;
    //    this->y=y;
    // }
    T1 add(T1 x , T2 y)
    {
        cout << x << " " << y;
    }
    T1 sub(T1 x , T2 y);
};

// T1 sum<class T1,class T2>::sub() //syntax
// {
//     cout<<data;
// }

int main()
{
    sum<int,int> obj;
    obj.add(3,5);
    // obj.sub(3,5);
    return 0;
}