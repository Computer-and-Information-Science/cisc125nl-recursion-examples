// Print the first N Fibonacci Numbers (to be completed in class)
#include <iostream>
using namespace std;

const int N = 20;

int fibonacci (int n);

int main () {
	for (int i = 1; i <= N; i++)
		cout << ' ' << fibonacci(i);
	cout << endl;
}

int fibonacci (int n) {
	return 1; // stub
}
