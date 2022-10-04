//Dynamic Initialization of Objects Using Constructors

//Dynamic initialization of object refers to initializing the objects at a run time i.e.,
//the initial value of an object is provided during run time.
//It can be achieved by using constructors and by passing parameters to the constructors.
//This comes in really handy when there are multiple constructors of the same class with different inputs.

#include<iostream>
using namespace std;
class BankDeposit{
    int principal_Value;
    int years;
    int rate;
    float Rate;
    int returnAmount;
    public:
    BankDeposit();
    BankDeposit(int pV , int y , int r );
    BankDeposit(int pV , int y , float r);
    void show();
};
BankDeposit::BankDeposit()
{
cout<<"You didn't Enter any Value";
}
BankDeposit::BankDeposit(int pV , int y , int r)
{
principal_Value=pV;
years=y;
rate=float(r/100);
returnAmount=principal_Value;
for(int i=0;i<=y;i++)
{
    returnAmount=pV*r;
}

}
BankDeposit::BankDeposit(int pV , int y , float r)
{
principal_Value=pV;
years=y;
Rate=r/100;
returnAmount=principal_Value;
for(int i=0;i<=y;i++)
{
    returnAmount=pV*r;
}
}
void BankDeposit::show()
{
     cout<<"You Invested "<<principal_Value<<" for "<<years<<" Final Amount is "<<returnAmount <<endl;
}

int main()
{
    
    int pV,y,R;
    float r;
    cout<<"Enter the value of pV y and r "<<endl;
    cin>>pV>>y>>R;
    BankDeposit bd1=BankDeposit(pV,y,R); //initialization a run time;
    bd1.show();
    cout<<"Enter the value of pV y and r "<<endl;
    cin>>pV>>y>>R;
    BankDeposit bd2=BankDeposit(pV,y,R);
    bd2.show();
    BankDeposit bd3=BankDeposit();
    
}
