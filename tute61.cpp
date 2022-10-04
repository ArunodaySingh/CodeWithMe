//ifstream use for read operation
//ofstream use for write opearation

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str,str2;
    cout<<"Enter the Name "<<endl;
    cin>>str;
    ofstream obj("NewFile.txt");
    obj<<str; //Take only 1st word
    obj.close();
    ifstream obj2("NewFile.txt");
    obj2>>str2; //Give only  First word either we can use getline() function
    cout<<"Your Name is "<<str2;
    
    return 0;
}