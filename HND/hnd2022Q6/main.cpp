#include <iostream>

using namespace std;

int main()
{
    int sums[10];
    int count = 1;
    for(int i=0; i<10; i++){ // Change to start from 0
        int sum = 0;
        for(int j=0; j<10; j++){ // Change to start from 0
            sum += count;
            count++;
        }
        sums[i] = sum; // Store sum in the correct index
    }

    // Correct the printing loop
    for(int i=9; i>=0; i--){
        cout << "SUMS: " << sums[i] << endl; // Improved output formatting
    }

    cout << "STOP" << endl;
    return 0;
}
