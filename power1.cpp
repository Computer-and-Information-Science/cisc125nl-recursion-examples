// Power - iterative version
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
	int product = 1;
	for (int i = 0; i < exponent; i++)
		product *= base;
	return product;
}
