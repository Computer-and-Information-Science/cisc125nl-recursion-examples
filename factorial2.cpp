// Factorial - recursive version (to be completed in class)
#include <iostream>
using namespace std;

int fact (int n);

int main () {
	int x;
	cout << "Enter a number: ";
	cin >> x;
	cout << x << "! = " << fact(x) << endl;
}

int fact (int n) {
	return 1; // stub
}
