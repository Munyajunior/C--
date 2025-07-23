
#include <iostream>
using namespace std;


int main() 
{
	//Write program to take user input for array of elements and display them.
	//Claculate  sum and average of elements n c++

	cout << "Enter integers in an array" << endl;

	int number[6];

	int i;
	int sum = 0;
	float avg;

	for (i = 0; i < 6; i++)
	{
		cin >> number[i];
	}

	cout << "Number entered are "<<endl;

	for (i = 0;i < 6; i++)
	{
		cout << number[i] << endl;
		sum += number[i];
	}

	avg = sum / i;
	cout << "The sum is " << sum << " and average is " << avg;
	return 0;
}