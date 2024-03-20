// Print the first N Fibonacci Numbers
#include <iostream>
using namespace std;

const int N = 20;

int fib (int n);

int main () {
	for (int i = 1; i <= N; i++)
		cout << ' ' << fib(i);
	cout << endl;
}

int fib (int n) {
	if (n == 1 || n == 2)
		return 1;
	return fib(n - 1) + fib(n - 2);
}
