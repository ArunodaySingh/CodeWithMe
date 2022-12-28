#include <bits/stdc++.h>
using namespace std;
class A
{
    int x;
    void outputbase()
    {
        cout<<"I am output of dervied class \n";
    }

public:
    A(int v)
    {
        x = v;
    }
    
    friend class B; // here we declare class B as a friend class
                    // pass the A type that means object is A type.
                    // here we don't need to pass a A inside just like
                    // we do in friend function => friend void output(A)
};

class B
{
public:
    void output(A obj) // Take a A type obj of first class using this we can access the obj variable
    {
        obj.outputbase();
    }
};

int main()
{
    int n;
    cout << "Enter the value of N ";
    cin >> n;
    A obj(n);
    B obj2;
    obj2.output(obj);
    return 0;
}