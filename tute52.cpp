// Array of Objects Using Pointers in C++ |

#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};

int main()
{
    int a;
    float p;
    Shop *ptr = new Shop; //create a object and using pointer(shop type) triggered that object address;
    Shop *ptr2 = new Shop;
    ptr2 = ptr;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the value of Id "<<i<<" and Price " << endl;
        cin >> a >> p;
        ptr->setData(a, p);
        ptr++;
    }
    ptr = ptr2;
    for (int j = 0; j < 3; j++)
    {
        ptr->getData();
        ptr++;
    }
    return 0;
}