#include <iostream>
using namespace std;


int main() {

	/* As long as user enter a non-negative integer, 
	add the value to a sum or running total,
	as soon as a negative number is entered,
	terminate*/

	int sum = 0;
	int input = 0;

	while (input >= 0) {
		cout << "Please enter a non-negative number or enter a negative number to terminate" << endl;
		cin >> input;

		sum += input;

		cout << "Your number is " << input << endl;
		cout << "Your running sum is " << sum << endl;

	}
	cout << "Sum of numbers " << sum;


	return 0;
}