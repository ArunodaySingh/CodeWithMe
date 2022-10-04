#include<iostream>
using namespace std;
int main()
{
    int i=0;
    int marks[4]={1,2,3,4};
//     while(i<4)
//     {
//         cout<<"The output of marks is " <<i<<" "<<marks[i]<<endl;
//         i++;
//     }
// do{
//     cout<<"The output of marks is " <<i<<" "<<marks[i]<<endl;
//     i++;
// }while(i<4);
int* p=marks;
cout<<*p+1;
 }