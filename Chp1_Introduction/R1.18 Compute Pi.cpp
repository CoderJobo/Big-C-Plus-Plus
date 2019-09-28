#include <iostream>
using namespace std;

int main()
{
    double pi = 0.0;
    double numerator = 1.0;
    double denominator = 1.0;

    //pi = 4 * (1 - (1 / 3) + (1 / 5) - (1 / 7) + (1 / 9));

    //cout << "Pi = " << pi << "\n";

    double num = 0.0;
    int increment = 0;

    do
    {
        cout << "inc\n";
        num = num + (numerator / denominator);
        cout << "num = " << num << "\n";
        numerator = numerator * (-1.0);
        cout << "numerator = " << numerator << "\n";
        denominator = denominator + 2.0;
        cout << "denominator = " << denominator << "\n";
        increment = increment + 1.0;
        cout << "increment = " << increment << "\n";
    }
    while(increment <= 4000);

    cout << "Pi = " << 4.0 * num << "\n";

    return 0;
}
