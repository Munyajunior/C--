#include <iostream>
#include <string>

using namespace std;

int main() {

	string fullName;
	string location;
	int initialScore;

	cout << "Enter a value between 0 and 100" << endl;
	cin >> initialScore;
	cin.get();

	cout << "Hello enter your full name" << endl;
	getline(cin, fullName);

	cout << "Tell us your city, state/province, and country" << endl;
	getline(cin, location);



	cout << "Hello " << fullName << endl;
	cout << "We heard you're from " << location << endl;
	cout << "Your initialScore is " << initialScore << " ,but with five points added, " << endl;
	cout << "your score is " << (initialScore + 5.00000) << endl;



	return 0;
}