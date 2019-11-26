/*
Write a program that prints the following grid to play tic-tac-toe

+--+--+--+
|  |  |  |
+--+--+--+
|  |  |  |
+--+--+--+
|  |  |  |
+--+--+--+

Of course, you could simply write seven statements of the form

    cout << "+--+--+--+";

You should do it the smart way, though.  Define string variables
to hold two kinds of patterns: a comb-shaped pattern and the bottom
line.  Print the comb three times and the bottom line once.
*/

#include <iostream>

using namespace std;

int main()
{
    string comb = "+--+--+--+\n|  |  |  |\n";
    string bottom = "+--+--+--+";

    cout << comb << comb << comb;
    cout << bottom;

    return 0;
}
