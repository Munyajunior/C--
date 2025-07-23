#include <iostream>
#include <string>

using namespace std;

int main() {

	string adjective1;
	string manName;
	string boyName;
	string occupation2;
	string adjective3;
	string hobby;
	string clothing;
	string placeNname;
	string occupation1;
	string adjective2;
	string girlName;

	cout << "Enter an Adjective" << endl;
	getline(cin, adjective1);
	cout << "Enter a girls name" << endl;
	getline(cin, girlName);

	cout << "Enter another Adjective" << endl;
	getline(cin, adjective2);

	cout << "Enter an occupation" << endl;
	getline(cin, occupation1);

	cout << "Enter a placename" << endl;
	getline(cin, placeNname);

	cout << "Enter a clothin" << endl;
	getline(cin, clothing);

	cout << "Enter a hobby" << endl;
	getline(cin, hobby);


	cout << "Enter yet another Adjective" << endl;
	getline(cin, adjective3);

	cout << "Enter another occupation" << endl;
	getline(cin, occupation2);

	cout << "Enter a boys name" << endl;
	getline(cin, boyName);


	cout << "Enter a Man Name" << endl;
	getline(cin, manName);


	cout << "There once was  a " << adjective1 << " girl named " << girlName << " who was a " << adjective2 << " " << occupation1 << " in the kingdom of " << endl;
	cout << placeNname << ". She loved to wear " << clothing << " and " << hobby << ". " << "She wanted to marry the " << adjective3 << " " << occupation2 << " named" << endl;
	cout << boyName << " but her father, king " << manName << " forbid her from seeing him." << endl;


	return 0;
}