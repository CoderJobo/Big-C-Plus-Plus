/*
The following program asks the user for a radius length and then
calculates the area and circumference of a circle and the
volume and surface area of a sphere with that radius length
*/

#include <iostream>

using namespace std;

int main()
{
    const double pi = 3.141592654;
    int radius;
    double circle_area;
    double circle_circumference;
    double sphere_volume;
    double sphere_area;

    cout << "Enter radius length: ";
    cin >> radius;
    cout << "Radius length: " << radius << "\n";

    circle_area = pi * radius * radius;
    circle_circumference = 2 * pi * radius;
    sphere_volume = (4.0/3.0) * pi* (radius * radius * radius);
    sphere_area = 4 * pi * radius * radius;

    cout << "Area of the circle with that radius: " << circle_area << "\n";
    cout << "Circumference of the circle with that radius: " << circle_circumference << "\n";
    cout << "Volume of the sphere with that radius: " << sphere_volume << "\n";
    cout << "Area of the sphere with that radius:" << sphere_area << "\n";

    return 0;
}
