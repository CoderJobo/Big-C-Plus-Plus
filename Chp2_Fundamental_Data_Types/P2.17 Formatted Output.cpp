/*
Rewrite the program of the preceding exercise so that the
three columns of the table line up.  Use formatted output.#include <iostream>
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
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = 3.141592653589793;
const double one_degree = PI / 180;

int main()
{
    cout << fixed << setprecision(10);
    cout << setw(12) << "0 degrees: " << setw(12) << sin(0) << " " << setw(12) << cos(0)
        << "\n";
    cout << setw(12) << "30 degrees: " << setw(12) << sin(30 * one_degree) << " " << setw(12)
        << cos(30 * one_degree) << "\n";
    cout << setw(12) << "45 degrees: " << setw(12) << sin(45 * one_degree) << " " << setw(12)
        << cos(45 * one_degree) << "\n";
    cout << setw(12) << "60 degrees: " << setw(12) << sin(60 * one_degree) << " " << setw(12)
        << cos(60 * one_degree) << "\n";
    cout << setw(12) << "90 degrees: " << setw(12) << sin(90 * one_degree) << " " << setw(12)
        << cos(90 * one_degree) << "\n";
    return 0;
}
