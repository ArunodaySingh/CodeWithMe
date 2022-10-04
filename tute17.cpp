//C++ inline function is powerful concept that is commonly used with classes.
 //If a function is inline,the compiler places a copy of the code of that function at each point where the function is called at compile time.
//Any change to an inline function could require all clients of the function to be recompiled because compiler would need to replace all the code once again otherwise it will continue with old functionality.

#include<iostream>
using namespace std;
 inline int product(int k,int c=1)  //here we used the default argument
    {
        return (k*c);
    }
char modified(char* a)
{
*a='z';
return *a;
}

char notmodified( const char* a) //it shown error because modification not posssible when we use const argument
{
*a='z';
return *a;
}

int main()
{
//    for(int i=0;i<5;i++)
//     {
        char a='v';
    //   static int j=0; //when we use static this will execute only once;
    //   j=j+1;
    //   cout<<"The product value of j and i is "<<product(j)<<endl;
      
      cout<<"Value is modified "<<modified(&a)<<endl;
      cout<<"Value is not modified  "<<notmodified(&a)<<endl;
     
    // }
}



//inline function means the function instead of repeated the whole procedure function will copied in the statement and directly compiled which will save the time in compilation.
//static variable means the variable will just used one time  in the function.
//factor=1.04 in the code is the default argument which will used in the function when there is no given argument in the statement.default argument should  be written at the right side in the function.
//costant arguments are used to fix a value so the value will not change accidently.