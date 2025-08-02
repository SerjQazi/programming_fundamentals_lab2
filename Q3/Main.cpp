/* Write an application that finds the smallest of several integers. Assume that the
first value read specifies the number of values to input from the user. */

#include <iostream>
using namespace std;

int main() {
	int count, number, smallest;
	cout << "Enter the number of integers: ";
	cin >> count;
	if (count <= 0) {
		cout << "Invalid count. Please enter a positive integer." << endl;
		return 1; // Exit if count is not positive
	}
	cout << "Enter integer 1: ";
	cin >> number;
	smallest = number; // Initialize smallest with the first number
	for (int i = 2; i <= count; i++) {
		cout << "Enter integer " << i << ": ";
		cin >> number;
		if (number < smallest) {
			smallest = number; // Update smallest if current number is smaller
		}
	}
	cout << "The smallest integer is: " << smallest << endl;
	return 0;
}