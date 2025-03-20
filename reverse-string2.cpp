// Reverse a String - recursive version (to be completed in class)
#include <iostream>
#include <string>
using namespace std;

string reverse (const string& s);

int main () {
	string str;
	cout << "Enter a string...\n";
	getline(cin, str);
	cout << reverse(str) << endl;
}

string reverse (const string& s) {
	return s; // stub
}
