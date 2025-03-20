// Print Star Pattern
//
// Example: The "3 Star" pattern
// ***
// **
// *
// **
// ***
//
// In general, the "N Star" pattern
//	- Top and bottom rows print N stars
//	- Between top and bottom rows, print the N-1 Star Pattern
//	- Middle row prints 1 star, only one row with 1 star
//	- Use recursion only, NO LOOPS
#include <iostream>
using namespace std;

void print_pattern (int n);
void print_stars (int n);

int main() {
	int n;
	cout << "Enter n: ";
	cin >> n;
	print_pattern(n);
}

void print_pattern (int n) {
	print_stars(n);
	if (n > 1) {
		print_pattern(n - 1);
		print_stars(n);
	}
}

void print_stars (int n) {
	if (n > 0) {
		cout << '*';
		print_stars(n - 1);
	}
	else
		cout << endl;
}
