#include <iostream>
#include <array>

using namespace std;

int main() {
	/*Create an integer array object of size 10
	Use a regular for loop to intialize the array elements to
	mltiples of 2 for the integers 0 through 9
	Big Hint: consider using the loop control varaible to your advantage
	Also, use the size() member function (method) to your advantage when using regular for loop
	Use ranged based for loop to print out stored elements of the array*/


	const int ARRAY_SIZE = 10; //Declare array size
	array<int, ARRAY_SIZE> myIntArray{}; //Declare array Object myIntArray and initiate empty array {}

	//for (int i = 0;i < ARRAY_SIZE;i++) { //Populate array with multiples of 2 for integers 0 - 9
	//	myIntArray[i] = i * 2;
	//}

	for (int i = 0;i < myIntArray.size();i++) {
		myIntArray[i] = i * 2;
	}
	cout << "Elements in array are " << endl;
	for (int elementsInArray : myIntArray) {
		cout << elementsInArray << endl;
	}
	cout << "Array size " << myIntArray.size();

	return 0;
}