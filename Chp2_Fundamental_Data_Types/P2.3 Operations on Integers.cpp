/*
The following program asks a user to input two integers,
then performs some arithmetic operations on them and
prints out the results
*/

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int num1;
    int num2;
    int sum;
    int difference;
    int product;
    double average;
    int distance;
    int maximum;
    int minimum;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "You entered " << num1 << " and " << num2 << "\n";
    sum = num1 + num2;
    difference = num2 - num1;
    product = num1 * num2;
    average = sum / 2.0;
    maximum = max(num1, num2);
    minimum = min(num1, num2);
    distance = maximum - minimum;

    cout << "Sum: " << sum << "\n";
    cout << "Difference: " << difference << "\n";
    cout << "Product: " << product << "\n";
    cout << "Average: " << average << "\n";
    cout << "Distance: " << distance << "\n";
    cout << "Maximum: " << maximum << "\n";
    cout << "Minimum: " << minimum << "\n";

    return 0;
}
