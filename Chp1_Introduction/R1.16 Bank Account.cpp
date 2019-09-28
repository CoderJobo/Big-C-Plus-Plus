/*
Write an algorithm to settle the following question: A bank account starts out with $10,000.
Interest is compounded monthly at 6 percent per year (0.5 percent per month).
Every month, $500 is withdrawn to meet college expenses.
After how many years is the account depleted?
*/

#include <iostream>
using namespace std;

int main()
{
    int acc = 10000;
    const double monthly_interest = 0.005;
    int month = 0;
    int year = 0;
    const int monthly_withdrawal = 500;

    while(acc > 0)
    {
        month = month + 1;
        acc = (acc + (monthly_interest * acc)) - monthly_withdrawal;
        cout << "acc = " << acc << "\n";
    }
    year = month / 12;

    cout << "The account depletes after " << year << " years and " << month % 12 << " months\n";
    return year;
}
