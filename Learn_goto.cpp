#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    label:
    for (int i = 1; i <= n; i++)
    {
        
        cout << "break "<<n<<endl;
    }
    n =n-1;
    if(n<1)
        {
            exit(0);
        }
    goto label;
}