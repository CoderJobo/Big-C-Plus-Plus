/*
The following program prints out the square, cube
and fourth power of the numbers 1 to 5
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int square = 2;
    int cube = 3;
    int fourth_power = 4;

    cout << "Squares: \n";
    cout << pow(1, square) << "\n";
    cout << pow(2, square) << "\n";
    cout << pow(3, square) << "\n";
    cout << pow(4, square) << "\n";
    cout << pow(5, square) << "\n";
    cout << "\n";

    cout << "Cubes: \n";
    cout << pow(1, cube) << "\n";
    cout << pow(2, cube) << "\n";
    cout << pow(3, cube) << "\n";
    cout << pow(4, cube) << "\n";
    cout << pow(5, cube) << "\n";
    cout << "\n";

    cout << "Fourth powers: \n";
    cout << pow(1, fourth_power) << "\n";
    cout << pow(2, fourth_power) << "\n";
    cout << pow(3, fourth_power) << "\n";
    cout << pow(4, fourth_power) << "\n";
    cout << pow(5, fourth_power) << "\n";

    return 0;
}
