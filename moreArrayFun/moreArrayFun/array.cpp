#include <iostream>
using namespace std;

int main() {
	//use a regular loop to populate an array
	//array size 10
	//populate the array with the number 1 to 10
	//don't cheat do it manually using a loop
	//with a seperate range for loop, print out the values for the array you just populated

	const int ARRAY_SIZE = 10;
	int arr[ARRAY_SIZE];

	for (int i = 0;i < ARRAY_SIZE;i++)
	{
		arr[i] = i +1 ;
	}

	/*for (int i =0;i<ARRAY_SIZE;i++)
	{
		cout << arr[i] << endl;
	}*/

	for (int array:arr)
	{
		cout << array << endl;
	}

	return 0;
}