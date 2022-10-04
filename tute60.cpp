// File I/O in C++: Reading and Writing Files |
/*
The useful classes for working with files in c++ are:
1. fstreambase
2. ifstream-> derived from fstreambase
3. ofstream -> derived from fstreambase

In order work with files in c++ you will have to open it, Primarily there are 2 types to open a file:
1. Using a constructor 
2. Using the member function open() of the classes
*/

// << insertion operator
// >> extraction operator
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str2;
    // string str="Arunoday Singh";
    // ofstream obj("Arunoday.txt");  /'write opeartion
    // obj<<str;
    ifstream obj2("Arunoday.txt"); //read operation
    
    //obj2>>str2; // this will only take a single word;
    // to get a full line we need getline(obj,string name) function;
    getline(obj2,str2);
    cout<<str2;

    return 0;
}