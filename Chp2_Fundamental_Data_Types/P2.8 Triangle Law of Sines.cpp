/*
The following program asks a user for the length of a side of a triangle
and the size in degrees of the two angles adjacent to that side

It prints out the length of all of the sides of the triangle as integers
and the size in degrees of all of the angles
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double pi = 3.141592654;
    const double degrees_to_radians = pi / 180;
    const double radians_to_degrees = 180 / pi;
    double a;
    double b;
    double c;
    double A;
    double B;
    double C;

    cout << "Enter the length of a side of a triangle and the sizes in degrees of the angles adjacent to that side: ";
    cin >> a >> B >> C;
    cout << "\n";
    A = (180 - (B + C));

    /*
    Law of Sines:
    -------------
    a/Sin(A) = b/Sin(B) = c/Sin(C)
    => b = Sin(B)(a/Sin(A))
    => c = Sin(C)(a/Sin(A))
    */

    b = static_cast<int>((sin(B * degrees_to_radians) * (a / sin(A * degrees_to_radians))) + 0.5); // round to nearest integer
    c = static_cast<int>((sin(C * degrees_to_radians) * (a / sin(A * degrees_to_radians))) + 0.5); // round to nearest integer

    cout << "Triangle length of side a: " << a << "\n";
    cout << "Triangle length of side b: " << b << "\n";
    cout << "Triangle length of side c: " << c << "\n";
    cout << "\n";
    cout << "Triangle size of angle A: " << A << "\n";
    cout << "Triangle size of angle B: " << B << "\n";
    cout << "Triangle size of angle C: " << C << "\n";

    return 0;
}
