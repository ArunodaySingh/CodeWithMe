#include <iostream>
using namespace std;
// //jb hko kaam kerna padega sbhi data type ka saath tb hum
// //use krenga struct jo user defined data type hoga or hum uska use
// //kerka sbhi premitive data type ko merge kre denga ek saath.
// struct employee   //here also  add typedef then we cam denote as a ep
// {
//     int e_id;
//     string e_name;
//     float salary;
// }; //instead of the we can also write this as }ep; that's means ep represent
// // employee user defined data type as ep;

typedef union money // union is basically used for memory management its shared the memory
// between all type and we can only used one type at once;
{
    int rice;
    float car;
    char name;
} m1;

int main()
{
    // struct employee Arun;  // here instead of struct employee Arun; just write ep Arun;
    // Arun.e_id=101;
    // Arun.e_name="Arunoday";
    // Arun.salary=10125.5;
    // cout<<Arun.e_id<<"\n";
    // cout<<Arun.e_name<<"\n";
    // cout<<int(Arun.salary)<<"\n";

    m1 buy;
    buy.car = 101;
    buy.name = 'c'; // it's override the previous data
    // cout<<buy.car;
    cout << buy.name;

    // enum
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    cout << breakfast << endl;
    Meal m1 = dinner;
    cout << m1;
}