// Initialization of reference data members
#include<iostream>
using namespace std;

class Test 
{
	int &t;
public:
	Test(int &t):t(t) 
  {
    cout<<&t<<endl;
  } //Initializer list must be used
	int *getT() { return &t; }
};

int main() {
	int x = 20;
	Test t1(x);
	cout<<t1.getT()<<endl;
	x = 30;
	cout<<t1.getT()<<endl;
	return 0;
}
/* OUTPUT:
	20
	30
*/
