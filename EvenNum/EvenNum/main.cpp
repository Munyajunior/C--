#include <iostream>
using namespace std;



int main() {

	/* Print only even number between 1-10 withoud including then*/
	
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0) {
			cout << i << endl;
			continue;
		}
	}



	return 0;
}