// call by value call by reference

#include <iostream>
using namespace std;

// int swap(int a, int b)
// {
// int temp=a;
// a=b;
// b=temp;
// }
// int main()
// {
// int a,b;
// cout<<"Enter the value of a";
// cin>>a;
// cout<<"Enter the value of b";
// cin>>b;
// swap(a,b);
// cout<<"The swap value of a " <<a<<" and value of b is "<<b;
//}
// call by address using pointer

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    cout << "Enter the value of a";
    cin >> a;
    cout << "Enter the value of b";
    cin >> b;
    swap(&a, &b);
    cout << "The swap value of a " << a << " and value of b is " << b;
    return 0;
}

// call by reference by using reference operator
// void swap(int &a, int &b)
// {
// int temp=a;
// a=b;
// b=temp;
// }

// int main()
// {
// int a,b;
// cout<<"Enter the value of a";
// cin>>a;
// cout<<"Enter the value of b";
// cin>>b;
// swap(a,b);
// cout<<"The swap value of a " <<a<<" and value of b is "<<b;
// }