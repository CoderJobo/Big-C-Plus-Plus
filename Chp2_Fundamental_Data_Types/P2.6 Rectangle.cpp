/*
The following program asks the user for the length of sides of
a rectangle and then prints out the area, perimeter and diagonal
length of the rectangle
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int length;
    int breadth;
    int area;
    int perimeter;
    double diagonal;

    cout << "Enter the length and breadth of a rectangle: ";
    cin >> length >> breadth;
    cout << "\n";
    cout << "Rectangle length: " << length << " units\n";
    cout << "Rectangle breadth: " << breadth << " units\n";

    area = length * breadth;
    perimeter = 2 * (length + breadth);
    diagonal = sqrt((length * length) + (breadth * breadth));

    cout << "Rectangle area: " << area << " units\n";
    cout << "Rectangle perimeter: " << perimeter << " units\n";
    cout << "Rectangle diagonal: " << diagonal << " units\n";

    return 0;
}
