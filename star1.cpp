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
	cout << '*';
	if (n > 1)
		print_stars(n - 1);
	else
		cout << endl;
}
