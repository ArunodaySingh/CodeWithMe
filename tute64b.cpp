// Writing our First C++ Template in VS Code

#include <iostream>
using namespace std;

template <class T> //Maine apni class se kha kya data type use kerna hai mein tko baad mein bta dunga
// pahle tum T type se declare ho jao
class Vector
{
public:
    T *arr;
    int size;
    Vector(T m)
    {
        size = m;
        arr = new T[size];
    }
    T getDotProduct(Vector *v)
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
    Vector<float> v1(3);
    v1.arr[0] = 0;
    v1.arr[1] = 0;
    v1.arr[2] = 5.1;
    Vector <float> v2(3);
    v2.arr[0] = 0;
    v2.arr[1] = 0;
    v2.arr[2] = 2.5;
    float a = v1.getDotProduct(&v2);
    cout << a << endl;
    return 0;
}