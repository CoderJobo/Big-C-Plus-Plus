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
    const int value_of_dollar = 100;
    const int value_of_quarter = 25;
    const int value_of_dime = 10;
    const int value_of_nickel = 5;

    cout << "Enter the amount due and the amount received: ";
    double amount_due;
    double amount_received;
    cin >> amount_due >> amount_received;
    int difference_in_pennies = static_cast<int>((value_of_dollar * (amount_received - amount_due)) + 0.5); // avoid roundoff error

    int change_in_dollars;
    int change_in_quarters;
    int change_in_dimes;
    int change_in_nickels;
    int change_in_pennies;
    int remainder_after_dollars = difference_in_pennies % value_of_dollar;
    int remainder_after_quarters = remainder_after_dollars % value_of_quarter;
    int remainder_after_dimes = remainder_after_quarters % value_of_dime;
    int remainder_after_nickels = remainder_after_dimes % value_of_nickel;

    cout << "Change: " << amount_received - amount_due << "\n";
    cout << "Change in pennies: " << difference_in_pennies << "\n";
    change_in_dollars = difference_in_pennies / value_of_dollar;
    change_in_quarters = remainder_after_dollars / value_of_quarter;
    change_in_dimes = remainder_after_quarters / value_of_dime;
    change_in_nickels = remainder_after_dimes / value_of_nickel;
    change_in_pennies = remainder_after_nickels;

    cout << "Change due = $" << amount_received - amount_due << ":\n";
    cout << change_in_dollars << " dollars\n";
    cout << change_in_quarters << " quarters\n";
    cout << change_in_dimes << " dimes\n";
    cout << change_in_nickels << " nickels\n";
    cout << change_in_pennies << " pennies\n";

    return 0;
}
