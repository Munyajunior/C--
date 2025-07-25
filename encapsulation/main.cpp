#include <iostream>
#include <string>
#include "House.h"
using namespace std;


/*call the object by reference using "&" after class, and add const datatype
 before class name such that it add security(making it impossible to
                                             the object using member functions or setters)*/
void printHouseData(const House& house); // prototype (non member function)
int main()
{
    House myHouse;
    House yourHouse;

    myHouse.setNumStories(3);
    myHouse.setNumWindows(6);
    myHouse.setColor("red");


    yourHouse.setNumStories(3);
    yourHouse.setNumWindows(10);
    yourHouse.setColor("blue");

    /*
    printHouseData(yourHouse);
    printHouseData(myHouse);
    */
    myHouse.print();
    yourHouse.print();
    return 0;
}

void printHouseData(const House& house)
{
    cout<< "The house is "<< house.getColor() << " and has "
        << house.getNumStories() << " Stories and "
        << house.getNumWindows() << " windows."<<endl;
}
