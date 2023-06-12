#include <iostream>
using namespace std;
int main() // userdefined function
{
    int a = 5;
    int *b = &a;
    int **c = &b;
    int ***d = &c;

    cout << a << endl;
    cout << *b << endl;
    cout << &c << endl;
    cout << d << endl;
    return 0;
}