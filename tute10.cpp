/*There are 3 types of loop 
for loop 
while loop 
do while loop */

#include<iostream>
using namespace std;
int main()
{    
    //initialisation condition updation
    for(int i=0;i<=3;printf("i am post increment %d\n",i++))
    {
        cout<<i<<"\n";
    }
cout<<"I am check for loop flow control"<<endl;
     for(int i=0;i<=4;printf("i am pre increment %d\n",++i))
    {
        cout<<i<<"\n";
    }
}


/*while(condition)
{
    statements
}*/

/*do{
statement //at least execute one time
}while(condition)
*/