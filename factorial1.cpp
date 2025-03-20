// Factorial - iterative version
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
	int factorial = 1;
	for (int i = 1; i <= n; i++)
		factorial *= i;
	return factorial;
}
