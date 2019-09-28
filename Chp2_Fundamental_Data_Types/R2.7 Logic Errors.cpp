#include <iostream>
using namespace std;

int main()
{
    double total = 0;
    int x1;
    cout << "Please enter a number: ";
    cin >> x1;
    total = total + x1;
    cout << "Please enter another number: ";
    int x2;
    cin >> x2;
    total = total + x2;
    float average = total / 2;
    cout << "The average of the two numbers is " << average << "\n";
    return 0;
}
