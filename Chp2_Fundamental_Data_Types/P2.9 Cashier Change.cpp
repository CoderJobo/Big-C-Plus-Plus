/*
The following program asks for an amount due for an item
and an amount received by the customer

It calculates the change due and prints out that amount in
dollars, quarters, dimes, nickels and pennies
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the amount due and the amount received: ";
    double amount_due;
    double amount_received;
    cin >> amount_due >> amount_received;

    int difference;
    int dollars;
    int quarters;
    int dimes;
    int nickels;
    int pennies;

    difference = 100 * (amount_received - amount_due); // difference in pennies
    dollars = difference / 100;
    quarters = (difference % 100) / 25;
    dimes = ((difference % 100) % 25) / 10;
    nickels = (((difference % 100) % 25) % 10) / 5;
    pennies = (((difference % 100) % 25) % 10) % 5;

    cout << "Change due = $" << amount_received - amount_due << ":\n";
    cout << dollars << " dollars\n";
    cout << quarters << " quarters\n";
    cout << dimes << " dimes\n";
    cout << nickels << " nickels\n";
    cout << pennies << " pennies\n";

    return 0;
}
