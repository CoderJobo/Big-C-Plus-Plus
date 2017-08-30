#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Hello, my name is Hal\n";
	cout << "What is your name?\n";
	string user_name;
	getline(cin, user_name);
	cout << "Hello, "; 
	cout << user_name; 
	cout << ". I am glad to meet you!\n";

	return 0;
}