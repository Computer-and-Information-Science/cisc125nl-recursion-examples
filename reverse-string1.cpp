// Reverse a String - iterative version
#include <iostream>
#include <string>
using namespace std;

string reverse (const string& s);

int main () {
	string str;
	cout << "Enter a string...\n";
	getline(cin, str);
	cout << reverse(str) << endl;;
}

string reverse (const string& s) {
	string r;
	for (int i = s.size() - 1; i >= 0; i--)
		r += s[i];
	return r;
}

