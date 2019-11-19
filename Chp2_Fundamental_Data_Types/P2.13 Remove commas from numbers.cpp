/*
The following program prompts a user to enter a number between
1,000 and 999,000 including commas, then prints out that number
without the commas
*/
#include <iostream>

using namespace std;

int main()
{
    string num;
    string part1;
    string part2;

    cout << "Enter a number between 1,000 and 999,999 including a comma in the appropriate position\n";
    cin >> num;
    part1 = num.substr(0, num.length()-4);
    part2 = num.substr(num.length()-3, num.length());
    cout << part1 + part2;

    return 0;
}
