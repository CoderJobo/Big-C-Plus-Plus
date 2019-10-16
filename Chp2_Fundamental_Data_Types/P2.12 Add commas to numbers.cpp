/*
The following program prompts a user to input a number greater or
equal to 1,000 but less than 1,000,000 and then prints out the number
with a comma inserted into the correct position
*/

#include <iostream>

using namespace std;

int main()
{
    string num;

    cout << "Please enter an integer >= 1000: ";
    cin >> num;
    cout << num.substr(0, num.length()-3) + "," + num.substr(num.length()-3, num.length());

    return 0;
}
