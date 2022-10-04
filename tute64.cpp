// Writing our First C++ Template in VS Code

#include <iostream>
using namespace std;

class Vector
{
public:
    int *arr;
    int size;
    Vector(int m)
    {
        size = m;
        arr = new int[size];
    }
    int getDotProduct(Vector *v)
    {
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * ((*v).arr[i]); // idhar this pointer ki maadad se compiler ya jaan rha hai
            // ki this->arr[i] object v1 ka hai aur ((*v).arr[i]) ya v2 object ko jo humne pass kerva hai
            //  function ka sath using
        }
        return d;
    }
};

int main()
{
    Vector v1(3);
    v1.arr[0] = 0;
    v1.arr[1] = 0;
    v1.arr[2] = 5;
    Vector v2(3);
    v2.arr[0] = 0;
    v2.arr[1] = 0;
    v2.arr[2] = 2;
    int a = v1.getDotProduct(&v2);
    cout << a << endl;
    return 0;
}