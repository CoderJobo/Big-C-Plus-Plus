/*
This program is an exercise in evaluating expressions with respect to
the correct order of calculations and the correct variable type
Author: Joan Hickey
*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double x = 2.5;
    double y = -1.5;
    int m = 18;
    int n = 4;
    string s = "Hello";
    string t = "World";

    double a = x + n * y - (x + n) * y;
    cout << "(a) = " << a << "\n";

    int b = m / n + m % n;
    cout << "(b) = " << b << "\n";

    double c = 5 * x - n / 5;
    cout << "(c) = " << c << "\n";

    int d = sqrt(sqrt(n));
    cout << "(d) = " << d << "\n";

    int e = static_cast<int>(x + 0.5);
    cout << "(e) = " << e << "\n";

    string f = s + t;
    cout << "(f) = " + f + "\n";

    string g = t + s;
    cout << "(g) = " + g + "\n";

    int h = 1 - (1 - (1 - (1 - (1 - n))));
    cout << "(h) = " << h << "\n";

    string i = s.substr(1, 2);
    cout << "(i) = " + i + "\n";

    int j = s.length() + t.length();
    cout << "j = " << j << "\n";

    return 0;
}
