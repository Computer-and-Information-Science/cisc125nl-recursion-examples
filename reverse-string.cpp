#include <iostream>
#include <string>
using namespace std;

void writeBackward1 (const string& s);
void writeBackward2 (const string& s);

int main () {
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	writeBackward1(str);
	cout << endl;
	writeBackward2(str);
	cout << endl;
}

void writeBackward1 (const string& s) {
	int length = s.size();
	if (length) {
		cout << s.substr(length-1, 1);
		writeBackward1(s.substr(0, length-1));
	}
}

void writeBackward2 (const string& s) {
	int length = s.size();
	if (length) {
		writeBackward2(s.substr(1, length-1));
		cout << s.substr(0, 1);
	}
}
