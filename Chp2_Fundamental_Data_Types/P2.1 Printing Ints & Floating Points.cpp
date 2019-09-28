/*
The following program prints out the numbers 1 to 100000000000
in increments of 10 first as integers and then as doubles

It demonstrates why doubles should be used to store large numbers
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Printing as integers: \n";
    cout << static_cast<int>(1) << "\n";
    cout << static_cast<int>(10) << "\n";
    cout << static_cast<int>(100) << "\n";
    cout << static_cast<int>(1000) << "\n";
    cout << static_cast<int>(10000) << "\n";
    cout << static_cast<int>(100000) << "\n";
    cout << static_cast<int>(1000000) << "\n";
    cout << static_cast<int>(10000000) << "\n";
    cout << static_cast<int>(100000000) << "\n";
    cout << static_cast<int>(1000000000) << "\n";
    cout << static_cast<int>(10000000000) << "\n";
    cout << static_cast<int>(100000000000) << "\n";
    cout << "\n";

    cout << "Printing as floating point numbers: \n";
    cout << static_cast<double>(1) << "\n";
    cout << static_cast<double>(10) << "\n";
    cout << static_cast<double>(100) << "\n";
    cout << static_cast<double>(1000) << "\n";
    cout << static_cast<double>(10000) << "\n";
    cout << static_cast<double>(100000) << "\n";
    cout << static_cast<double>(1000000) << "\n";
    cout << static_cast<double>(10000000) << "\n";
    cout << static_cast<double>(100000000) << "\n";
    cout << static_cast<double>(1000000000) << "\n";
    cout << static_cast<double>(10000000000) << "\n";
    cout << static_cast<double>(100000000000) << "\n";

    return 0;
}
