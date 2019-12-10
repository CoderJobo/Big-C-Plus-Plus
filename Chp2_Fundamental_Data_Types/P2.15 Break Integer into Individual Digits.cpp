/*
Write in a program that reads in an integer
and breaks it into a sequence of individual
digits.

For example, the input 16384 is displayed as

    1 6 3 8 4

You may assume that the input has no more than
five digits and is not negative.
*/

#include <iostream>

using namespace std;

int main()
{
    string num;
    cout << "Enter a positive number comprised of up to five digits\n";
    cin >> num;
    cout << "The number you entered is comprised of the digits\n\n";
    /*cout << num.substr(0, 1) << " " << num.substr(1, 1) << " " << num.substr(2, 1)
    << " " << num.substr(3, 1) << " " << num.substr(4, 1);*/
    cout << num.substr(0, 1) << " \n";
    cout << num.substr(1, 1) << " \n";
    cout << num.substr(2, 1) << " \n";
    cout << num.substr(3, 1) << " \n";
    cout << num.substr(4, 1) << "\n";

    return 0;
}
