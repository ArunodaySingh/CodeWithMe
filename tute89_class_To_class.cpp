// class to class conversion
// 1 For Constructor we use  i1 
// 2 For operator we use p1 
#include <bits/stdc++.h>
using namespace std;
class product
{
    int n;
    int m;

public:
    void setdata(int x, int y)
    {
        n = x;
        m = y;
    }
    int getN()
    {
        return n;
    }
    int getM()
    {
        return m;
    }
};

class Item
{
private:
    int a;
    int b;

public:
    Item(){}
    Item(product p)
    {
        a = p.getM();
        b = p.getN();
    }
    void showdata()
    {
        cout << a << " " << b;
    }
};

int main()
{
    product p1;
    p1.setdata(3, 4);
    Item I1;
    I1 = p1;
    I1.showdata();

    return 0;
}