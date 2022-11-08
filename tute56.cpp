// Virtual Functions in C++
/*
Abhi tk humne dekha ki jb hum same class ka pointer banate hai or vo uss class ka
object ko point kerta hai to uska function run hota hai aur agr vo point derived class ko bhi kerta hai
tb bhi run base class ka hi display function hota hai
but jb hum base class ka function ko virtual bna deta hai to vo bolta hai compiler se
bhai pahle tu derived class ka function ko run ker le mko baad mein kerna
*/
// Virtual Function bss default behaviour ko overcome kerta hai


#include<iostream>
using namespace std;
class BaseClass{
public:
int data1;
virtual void Display(int num1){ // Now, virtual keyword make preference are high of derived classA
data1=num1;
cout<<"The data is form Base class "<<data1<<endl;
}
};

class DerivedClass:public BaseClass{ //It's should be inherited
    public:
    int data2;
     void Display(int num1){
        data2=num1;
        cout<<"The data is from Derived Class "<<data2;
    }
};

int main()
{  
    BaseClass * base_class_pointer;
    BaseClass newobj2;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    newobj2.Display(6); //this only can possible when we use store the address of  derived class in base class pointer
    base_class_pointer->Display(5);
    // If i use virtual keryword with the base class
    // function then its overcome the default behaviour 
    // of pointer now pointer called the derived class function 
    //                              which have the same name Display();


    
    return 0;
}

// Note*  There are 2 qus arises here can we base class are inherit by derived class can we use the derived class object to call
//        the base class function which have a same name "No we can't" always give the preference to own class
//        Second qus is if i make a pointer of derived class which point the address of base class can we use that derived class pointer to call
//        the base class function ans is "No".
// Now, Then here the impure virtual function role comes if we add the virtual keyword then its overcome the behaviour of the normal flow.      