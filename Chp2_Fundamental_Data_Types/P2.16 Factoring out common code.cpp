/*
The following program prints the values of sine and
cosine for 0 degrees, 30 degrees, 45 degrees, 60 degrees
and 90 degrees.

Rewrite the program for greater clarity by factoring
out common code.

#include <iostream>

using namspace std;

const double PI = 3.141592653589793;

int main()
{
    cout << "0 degrees: " << sin(0) << " " << cos(0)
        << "\n";
    cout << "30 degrees: " << sin(30 * PI / 180) << " "
        << cos(30 * PI / 180) << "\n";
    cout << "45 degrees: " << sin(45 * PI / 180) << " "
        << cos(45 * PI / 180) << "\n";
    cout << "60 degrees: " << sin(60 * PI / 180) << " "
        << cos(60 * PI / 180) << "\n";
    cout << "90 degrees: " << sin(90 * PI / 180) << " "
        << cos(90 * PI / 180) << "\n";
    return 0;
}
*/

#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.141592653589793;
const double one_degree = PI / 180;

int main()
{
    cout << "0 degrees: " << sin(0) << " " << cos(0)
        << "\n";
    cout << "30 degrees: " << sin(30 * one_degree) << " "
        << cos(30 * one_degree) << "\n";
    cout << "45 degrees: " << sin(45 * one_degree) << " "
        << cos(45 * one_degree) << "\n";
    cout << "60 degrees: " << sin(60 * one_degree) << " "
        << cos(60 * one_degree) << "\n";
    cout << "90 degrees: " << sin(90 * one_degree) << " "
        << cos(90 * one_degree) << "\n";
    return 0;
}
