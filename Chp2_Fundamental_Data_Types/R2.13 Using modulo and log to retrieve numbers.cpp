#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    int n = 23456;
    float logn = log10(n);
    cout << logn << "\n";
    float remainder = logn - static_cast<int>(logn + 0.5);
    cout << remainder << "\n";
    float first = static_cast<int>(pow(10, remainder));
    int last = n % 10;
    cout << "The first digit is " << first << "\n";
    cout << "The last digit is " << last << "\n";
    return 0;
}
