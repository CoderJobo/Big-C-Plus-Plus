/*
The following program asks a user for the length of
two sides of a triangle and the size of the angle
between the two sides

It then prints out the length of all sides and the size
in radians and degrees of all angles of the triangle

Author: Joan Hickey
Date: 30th August 2019
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

    cout << "Enter the length of two of the sides of a triangle and the size of the angle between them in degrees: ";
    cin >> a >> b >> C;
    cout << "\n";
    cout << "Triangle length of side a: " << a << "\n";
    cout << "Triangle length of side b: " << b << "\n";

    //Law of Cosines: c^2 = a^2 + b^2 - 2ab cos(C)
    C = degrees_to_radians * C;
    c = sqrt(((a * a) + (b * b)) - ((2 * a * b) * cos(C))) ;
    C = radians_to_degrees * C;

    cout << "Triangle length of side c: " << c << "\n";
    cout << "\n";

    /*
    a^2 = b^2 + c^2 - 2bc Cos(A)
    2bc Cos(A) = -a^2 + b^2 + c^2
    Cos(A) = (-a^2 + b^2 + c^2) / (2bc)
    A = Cos^-1((-a^2 + b^2 + c^2) / (2bc))
    */
    A = acos((-(a * a) + b * b + c * c) / (2 * b * c)) * radians_to_degrees;

    /*
    b^2 = a^2 + c^2 - 2ac Cos(B)
    2ac Cos(B) = a^2 - b^2 + c^2
    Cos(B) = (a^2 - b^2 + c^2) / (2ac)
    B = Cos^-1((a^2 - b^2 + c^2) / (2ac))
    */
    B = acos((a * a + c * c - b * b) / (2 * a * c)) * radians_to_degrees;

    cout << "Radians\n";
    cout << "-------\n";
    cout << "Triangle size of angle C: " << C << "\n";
    cout << "Triangle size of angle A: " << A << "\n";
    cout << "Triangle size of angle B: " << B << "\n";
    cout << "\n";
    cout << "A + B + C = " << A + B + C << " radians = 2pi radians!\n";
    cout << "\n";

    cout << "Degrees\n";
    cout << "-------\n";
    cout << "Triangle size of angle C: " << C << "\n";
    cout << "Triangle size of angle A: " << A << "\n";
    cout << "Triangle size of angle B: " << B << "\n";
    cout << "\n";
    cout << "A + B + C = " << A + B + C << " degrees = the sum of the angles in degrees of all triangles!\n";

    return 0;
}
