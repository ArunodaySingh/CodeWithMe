// concept of random access file

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    string line;
    fin.open("sample.txt");
    if (!fin)
        cerr << "sample.txt empty";
    cout << fin.tellg() << endl;     // it's give the index where current pointer point out
    cout << char(fin.get()) << endl; // It's give the output as integer format where current pointer point out.
    cout << fin.tellg() << endl;
    cout << char(fin.get()) << endl;
    fin.seekg(0);
    cout << fin.tellg() << endl;
    fin.seekg(5,ios_base::beg);
    getline(fin,line);
    cout<<line;
    return 0;
}

// everything same also for seekp by it's for write operations