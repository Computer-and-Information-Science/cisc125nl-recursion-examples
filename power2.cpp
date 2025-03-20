// Power - recursive version (to be completed in class)
#include <iostream>
using namespace std;

int power (int base, int exponent);

int main () {
	int base, exp;
	cout << "Enter base and exponent: ";
	cin >> base >> exp;
	cout << base << "^" << exp << " = " << power(base, exp) << endl;
}

int power (int base, int exponent) {
	// Assumes power is non-negative
	return 1; // stub
}
