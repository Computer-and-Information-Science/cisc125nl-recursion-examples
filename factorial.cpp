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
	if (n == 0)
		return 1;
	return n * fact(n - 1);
}
