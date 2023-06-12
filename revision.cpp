// Initialization of reference data members

// #include<iostream>
// using namespace std;
// class Test
// {
// 	int t;
// public:
// 	Test(int t):t(t)
//   {
//   } //Initializer list must be used
// 	int *getT() { return &t; }
// };

// int main() {
// 	int x = 20;
// 	Test t1(x);
// 	cout<<*(t1.getT())<<endl;
// 	x = 30;
// 	cout<<*(t1.getT())<<endl;
// 	return 0;
// }
/* OUTPUT:
	20
	30
*/

#include <iostream>
using namespace std;

class base
{
	int arr[10];
	void fun(){};
	static int x;
	static void fun2(){};
};

class b1 : virtual public base
{
};

class b2 : virtual public base
{
};

class derived : public b1, public b2
{
};

int main(void)
{
	cout << sizeof(derived); // give 52
	getchar();
	return 0;
}

// Answer is 48 (for 32 bit machine) :
// 40 bytes for int array and (4+4 bytes for 2 vptr for 2 classes) ,
// total = 48 (ptr corresponds to 4 bytes in 32 bit architecture)
// 2> Answer is 56 for 64 bit machine.
