#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "word";
    string first_char = s.substr(0, 1);
    string last_char = s.substr(s.length() - 1, s.length());
    cout << "The first letter is " << first_char << "\n";
    cout << "The last letter is " << last_char << "\n";

    cout << "\n";

    string remove_first = s.substr(1, s.length());
    string remove_last = s.substr(0, s.length() - 1);
    cout << "Without the first letter is " << remove_first << "\n";
    cout << "Without the last letter is " << remove_last << "\n";

    return 0;
}
