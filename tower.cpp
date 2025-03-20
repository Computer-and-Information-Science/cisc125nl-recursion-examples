// The Tower of Hanoi Puzzle (to be completed in class)
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
	// stub
	cout << "Move disk " << n << " from " << source << " to " << destination << endl;
}
