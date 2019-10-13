/*
The following program asks a user for

1. the number of gallons of gas in their cars tank
2. the fuel efficiency in miles per gallon
3. the price of gas per gallon

and prints out how far the car can go with the gas
in the tank and the cost per 100 miles
*/

#include <iostream>

using namespace std;

int main()
{
    double gallons_gas_in_tank;
    double fuel_efficiency;
    double price_per_gallon;

    cout << "Enter the following information:\n";
    cout << "1. The number of gallons of gas in the tank\n"; //10
    cout << "2. The fuel efficiency in miles per gallon\n"; //2
    cout << "3. The price of gas per gallon\n\n"; //.50
    cin >> gallons_gas_in_tank >> fuel_efficiency >> price_per_gallon;
    cout << "\n";

    cout << "You can go for " << gallons_gas_in_tank * fuel_efficiency << " miles ";
    cout << "at a cost of $" << (price_per_gallon * gallons_gas_in_tank) * (100.00 / (gallons_gas_in_tank * fuel_efficiency)) << " per 100 miles ";

    return 0;
}
