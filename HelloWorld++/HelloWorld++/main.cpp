#include <iostream>
#include <string>

using namespace std;

int main() {

	//std::cout << "Hello World" << std::endl;
	//cout << "Hello Khalid" << endl;

	//* varaibles
	/* int myInt = 15;
	string myName = "Khalid";
	bool isRaining = true;
	bool isSunny = true;
	bool isWarm = false;

	cout << boolalpha;
	cout << isRaining << endl;
	cout << isSunny << endl;
	cout << isWarm << endl;
	cout << "Hello " << myName << endl;
	*/
	
	int age;
	string fullName;
	cout << "Please enter your fullname" << endl;
	getline(cin, fullName);

	cout << "Please enter your age" << endl;
	cin >> age;

	cout << "Your Name is " << fullName << " and you are are " << age << " years old" << endl;

	return 0;

}