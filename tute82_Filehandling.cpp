// using seekg and seekp we can move pointer cursor anywhere in the file
// inf.seekg(-10,ios,cur) where inf is a ifstream object
// tellg function tell us pointer point which character and its return it's index
// using get() function we read the character it's also caleed using ifstream class and get pointer also update after every cout

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
 ofstream fout;
 string line;
 fout.open("sample.txt");
 
 // Execute a loop If file successfully opened
while (fout) {
// Read a Line from standard input
getline(cin, line);
// Press -1 to exit
if (line == "-1")
break;
// Write line in file
fout << line << endl;
}
// Close the File
 fout.close();
 ifstream inf{ "sample.txt" }; //constructor method use here;
 // If we couldn't open the input file stream for reading
 if (!inf)
 {
 // Print an error and exit
 cerr << "Sorry!! could not find the file!\n";
 return 1;
 }
 inf.seekg(5); // move to 5th character
 // Get the rest of the line and print it, moving to line 2
 getline(inf, line); // jo content inf mein hai usko line string mein daal do
 cout << line << '\n';
 inf.seekg(8, ios::cur); // move 8 more bytes into file
 // Get rest of the line and print it
 getline(inf, line);
 cout << line << '\n';
 inf.seekg(-14, ios::end); // move 14 bytes before end of file
 // Get rest of the line and print it
 getline(inf, line);
 cout << line << '\n';
 return 0;
}