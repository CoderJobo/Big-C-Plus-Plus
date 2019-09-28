/*
The following program asks a user to input a measurement in meters
and then outputs the measurement in miles, feet and inches
*/

#include <iostream>

using namespace std;

int main()
{
    int meters;
    const double convert_meters_to_miles = 0.000621371;
    const double convert_meters_to_feet = 3.28084;
    const double convert_meters_to_inches = 39.3701;
    double miles;
    double feet;
    double inches;

    cout << "Enter the length of your room in meters: \n";
    cin >> meters;
    cout << "Room length in meters: " << meters << " meters \n";

    miles = meters * 0.000621371;
    feet = meters * 3.28084;
    inches = meters * 39.3701;

    cout << "Room length in miles: " << miles << " miles \n";
    cout << "Room length in feet: " << feet << " feet \n";
    cout << "Room length in inches: " << inches << " inches \n";

    return 0;
}
