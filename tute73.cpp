//  Map In C++ STL
/*
We are using Map as we used Dictionary store value pair
*/

#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> marksmap;
    marksmap["Arunoday"] = 98;
    marksmap["Aman"] = 100;
    marksmap["Aftab"] = 85;
    marksmap.insert({"Ankit",55});
    map<string, int>::iterator itr;
    for (itr = marksmap.begin(); itr != marksmap.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl;
    }
    return 0;
}