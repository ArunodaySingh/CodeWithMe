/*
Templates can be represented in two ways:
Function templates
&
Class templates
*/

// => Function templates

#include<iostream>
using namespace std;

 template<class t1> // if i am using one class here that's means 
 t1 sum(t1 &x , t1 &y)
 {
    return x+y;
 }
 template<class t1,class t2> // if i am using one class here that's means 
 t2 sum(t1 &x , t2 &y)
 {
    return x+y;
    
 }

int main()
{
   int i=6;
   int j=7;
   cout<<"The sum of two number is "<<sum(i,j)<<endl;
    i=6;
   float k=7.5;
   cout<<"The sum of two number is "<<sum(i,k);
    
}


/*
Limitation of Template

Generic functions perform the same operation
for all the versions of a function except the data type differs. 
Now if we want to perform the differnt functionality along with
different data type it's can;t be happened in template because 
it decide the type of the data at run time and it's use same functionality
for differnt type of data
*/