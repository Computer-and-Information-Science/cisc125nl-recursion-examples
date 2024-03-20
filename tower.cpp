#include <iostream>
using namespace std;

void tower (int n, char source, char destination, char interim);

int main () {
	int ndisks;
	cout << "Enter number of disks: ";
	cin >> ndisks;

	tower(ndisks, 'A', 'C', 'B');
}

void tower (int n, char source, char destination, char interim) {
	if (n > 0) {
		tower(n - 1, source, interim, destination);
		cout << "Move disk " << n << " from " << source <<
			" to " << destination << endl;
		tower(n - 1, interim, destination, source);
	}
}
