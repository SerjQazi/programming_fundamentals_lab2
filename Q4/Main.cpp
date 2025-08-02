/* Factorials are used frequently in probability problems. The factorial of a
positive integer n (written n! and pronounced “n factorial”) is equal to the product
of the positive integers from 1 to n. Write an application that calculates the
factorials of 1 through 20. Use type long. Display the results in tabular format. */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	long long factorial = 1; // Use long long for larger range
	cout << fixed << setprecision(0); // Set output format for integers
	cout << "Number\tFactorial" << endl;
	cout << "-------------------" << endl;
	for (int i = 1; i <= 20; i++) {
		factorial *= i;
		cout << i << "\t" << factorial << endl;
	}
	return 0;
}
