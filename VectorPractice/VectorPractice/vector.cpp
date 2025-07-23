#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	/*Create a vector and add to it names of 5 friends, family member, pets,  or celebritires - whatever you want
	after adding those 5, insert my name (John Baugh) as the third element in the vector
	Once youre done, remove the last element in the vector
	finally print all elements remaining in the vector*/

	vector<string>nameVec{}; //declare vector
	// initialize vector
	nameVec.push_back("Ashley");
	nameVec.push_back("Ruphine");
	nameVec.push_back("christine");
	nameVec.push_back("joy");
	nameVec.push_back("pristine");

	nameVec.insert(nameVec.begin() + 2, "John Baugh"); //insert john baugh as 3rd element in vector
	nameVec.pop_back(); // delete last element in vector

	// print all elements remaining in the vector
	for (string element : nameVec) {
		cout << element << endl;
	}

	return 0;
}