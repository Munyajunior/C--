#include <iostream>

using namespace std;

int main()
{
    int tries=0;
    int repeat = 1;
    while(tries<=3){
            while (repeat == 1) {
                int number;
                do {
                    cout << "Enter a Positive number" << endl;
                    cin >> number;
                } while (number <= 0);
                cout << "WELL DONE 2025. Success" << endl;
                cout << "WELL DONE 2025. Success" << endl;

                cout << "Do you want to repeat? 1=Yes 0=No" << endl;
                cin >> repeat;
                tries++;
                }
                cout << "You had only 3 tires" << endl;
    }
    cout << "WELL DONE" << endl;


    return 0;
}
