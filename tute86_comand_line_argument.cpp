/*
=> Command line arguments are the arguments which we can pass to the main function. 
=> Important: Command-line arguments are given after the name of the program in
command-line shell of Operating Systems.
=> To pass command line arguments, generally define main() with two arguments : 
first argument is the number of command line arguments and second is list of command-line arguments
*/
//...............................................................................................................................
// int main(int argc, char *argv[]) { /* ... */ }
//...........................................................................................................................................
/*
argc (Argument Count) is int and stores number of command-line arguments passed by the user including the name of the program.
 So if we pass a value to a program, value of argc would be 2 (one for argument and one for program name)
The value of argc should be non negative.
argv(Argument Vector) is array of character pointers listing all the arguments.
If argc is greater than zero,the array elements from argv[0] to argv[argc-1] will contain pointers to strings.
Argv[0] is the name of the program , After that till argv[argc-1] every element is command -line arguments.
*/
//............................................................................................................................................................................................
/*
Note: Command line arguments can be passed being separated by a space, but if argument itself has a space then you can
 pass such arguments by putting them inside double quotes “” or single quotes ”.
*/

#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	cout << "You have entered " << argc
		<< " arguments:" << "\n";

	for (int i = 0; i < argc; ++i)
		cout << argv[i] << "\n";
	return 0;
}