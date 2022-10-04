// Function Objects (Functors) In C++ STL

/*
Function object :Function wrapped in a class so that
it available like an object.

Ye ek object hai jo function jaisa kaam krega that's it
*/

#include <iostream>
// sare functional objection (functor bhi bolte hai) functional header files ka ander hote hai
#include <functional>
#include <algorithm> // ismein sort function hota hai
using namespace std;
int main()
{
    int arr[] = {111, 22, 3, 4, 34, 56, 78};
    sort(arr, arr + 5, greater<int>()); // this greater<int>() is called a functional object
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
// This basically used in STL algorithms.

// Still not covered topic

/*
1. Exception Handling
2. Multi-threading
3. Operator Overloading
4. Lambda Function
*/