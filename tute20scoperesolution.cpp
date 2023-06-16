#include <iostream>
using namespace std;
int a = 5; // if there's no a present gloablly then compiller through error.
int main()
{
    int a = 10;
    cout << "Value of local a " << a << endl;
    cout << "Value of gloabal a " << ::a; // To access a global variable when there is a local variable with same name:
}
