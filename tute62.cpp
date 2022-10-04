// open is function which present int the ofstream class
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream out;
    out.open("NewFile.txt");
    out << "This is Arunoday ";
    out << "Singh , Today Data is";
    out << " is 11-Sep-2022 and we are in ";
    out << " the Central Library ";
    out.close();

    ifstream in;
    string str1, str2;
    in.open("NewFile.txt");
    // in>>str1>>str2; //here in str1 it takes 'This' and in str2 it takes 'is' .
    // cout<<str1<<" "<<str2;
    // Now we can use eof(end of file) function to read all words.
    while (in.eof() == 0) // at the end of the file we eof character and then eof not ==o anymore, loop get close
    {
        getline(in, str2);
        cout << str2 << endl;
    }
    return 0;
}