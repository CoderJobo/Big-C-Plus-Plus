/*
The purpose of this program in the context of the book is to observe
how C++ deals with input, in particular input in the wrong format

Test data:

James Carter
56

Lyndon Johnson
49

Hodding Carter 3rd
44

Richard M. Nixon
62
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Please enter your name: ";
    string fname, lname;
    cin >> fname >> lname;

    cout << "Please enter your age: ";
    int age;
    cin >> age;

    cout << "Name: " << fname << " " << lname << "\n";
    cout << "Age: " << age;

    return 0;
}
