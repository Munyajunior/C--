#include <iostream>
using namespace std;

int main(){
	/* promt user for age and gender
	age is int, gender is character
	get f or F and are 60 or over
	you qualify for the discount!
	you do not qualify for the discount*/

	int age;
	char gender;

	cout << "Please enter your age" << endl;
	cin >> age;
	cout << "Please enter your gender (character m for Male or f for Female)" << endl;
	cin >> gender;

	if (gender == 'f' || gender == 'F' && age >= 60)
	{
		cout << "you qualify for the discount!" << endl;
	}
	else {
		cout << "you do not qualify for the discount" << endl;
	}

	return 0;

}