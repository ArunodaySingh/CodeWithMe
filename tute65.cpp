// C++ Templates: Templates with Multiple Parameter+

#include <iostream>
using namespace std;

/*
template<class T1, class T2>
class  nameofClass{
    //body
}
*/
template<class T1, class T2>
class myclass
{
public:
    T1 data1;
    T2 data2;
    myclass(T1 a , T2 b){
        data1=a;
        data2=b;
    }
    void display()
    {
        cout << data1<<" "<<data2;
    }

};

int main()
{
    myclass<char,int> obj('r',6);
    obj.display();
    return 0;
}