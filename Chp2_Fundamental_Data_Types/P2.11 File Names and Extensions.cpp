/*
The following program asks a user for the following information:

1. Drive letter
2. Path
3. File name
4. File extension

and then prints out the complete file path
*/

#include <iostream>

using namespace std;

int main()
{
    string drive;
    string path;
    string file_name;
    string extension;

    cout << "Enter the following information:\n";
    cout << "1. Drive letter\n";
    cout << "2. Path\n";
    cout << "3. File name\n";
    cout << "4. Extension\n";
    cin >> drive >> path >> file_name >> extension;

    cout << drive + ":" + path + "\\" + file_name + "." + extension;

    return 0;
}
