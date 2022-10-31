/*
One of the advantages of C++ over C is Exception Handling.
Exceptions are runtime anomalies or abnormal conditions that a program encounters during its execution.
There are two types of exceptions: a)Synchronous, b)Asynchronous (i.e., exceptions which are beyond the program’s control, such as disc failure, keyboard interrupts etc.).
C++ provides the following specialized keywords for this purpose:
try: Represents a block of code that can throw an exception.
catch: Represents a block of code that is executed when a particular exception is thrown.
throw: Used to throw an exception. Also used to list the exceptions that a function throws but doesn’t handle itself.

C++ Exceptions:

When executing C++ code, different errors can occur: coding errors made by the programmer, errors due to wrong input, or other unforeseeable things.

When an error occurs, C++ will normally stop and generate an error message. The technical term for this is: C++ will throw an exception (error).

C++ try and catch:

Exception handling in C++ consists of three keywords: try, throw and catch:

The try statement allows you to define a block of code to be tested for errors while it is being executed.

The throw keyword throws an exception when a problem is detected, which lets us create a custom error.

The catch statement allows you to define a block of code to be executed if an error occurs in the try block.

The try and catch keywords come in pairs:

We use the try block to test some code: If the value of a variable “age” is less than 18, we will throw an exception, and handle it in our catch block.

In the catch block, we catch the error if it occurs and do something about it. The catch statement takes a single parameter. So, if the value of age is 15 and that’s why we are throwing an exception of type int in the try block (age), we can pass “int myNum” as the parameter to the catch statement, where the variable “myNum” is used to output the value of age.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numerator, denomeratore, result;
    cout << "Enter the value of Numerator And Denomnator " << endl;
    cin >> numerator >> denomeratore;
    try
    {
        if (denomeratore == 0)
        {
            throw denomeratore;
        }
        result = numerator / denomeratore;
    }
    catch(int e)
    {
        cout<<"Divide with 0 not possible "<<endl;
    }
    return 0;
}
