// List In C++ STL

/* When we store data in array there is a contigous memory location
   And if i need to delete any random data then after i have to replace all the other data posiiton
   6 7 8 9    if i delete 7 then we need to shift 8 and 9
*/
// In this type of question we use list here we use linkedlist

#include <iostream>
#include <list>
using namespace std;

void display(list<int> &v1)
{
    list<int>::iterator itr;
    for (itr = v1.begin(); itr != v1.end(); itr++)
    {
        cout << *itr << endl;
    }
    cout << "!ENd" << endl;
}

int main()
{
    list<int> list1;
    list<int> list2(3); // Empty list of size 7
    list1.push_back(4);
    list1.push_back(9);
    list1.push_back(6);
    // Different removing element from the list
    list1.push_back(7);
    //  list1.pop_front(); delete from front
    //   list1.remove(9); remove whatever value you give

    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 121;
    iter++;
    *iter = 122;
    iter++;
    *iter = 123;
    // display(list1);

    list2.merge(list1); //merge list1 with list2
    list2.sort();
    display(list2);
    return 0;
}