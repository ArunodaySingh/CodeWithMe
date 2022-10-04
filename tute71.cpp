// Vector In C++ STL

#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &vec1) //syntax if vector passes as a call by refernce
{
    cout<<"I am called buddy"<<endl;
    for (int j = 0; j < vec1.size(); j++)
    {
        cout << vec1[j] << endl; //instead of this we can use vec1.at(i);
    }
}

int main()
{
    vector<int> vec1; // vector bnaya int type ka vec1 name hai //zero length vector 
    vector<char> vec2(4); //4 element vector
    vec2.push_back('e');
    vector<char> vec3(vec2); //4 element character vector from vec2
    vector<int> vec4(6,3); // 6-elements of 3 
    // for (int i = 0; i < 4; i++)
    // {
    //     int ins;
    //     cout << "Enter an Element which want to enter in your vector " << endl;
    //     cin >> ins;
    //     cout<<endl;
    //     vec1.push_back(ins);
    // }

    // vec1.pop_back(); // it's delete last element
    display(vec4);
    // vector<int>::iterator itr=vec1.begin(); // make a iterator which point to the 1st element
    // vec1.insert(itr,566); // if we want to insert 5 copy of 566 just use display(itr,5,566);
    // cout<<"Called again"<<endl;
    // display(vec1);
    return 0;
}

//Use cplusplus.com to know more about vector method 
