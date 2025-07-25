#include "House.h"
#include <iostream>
using namespace std;

 void House::setNumStories(int numStories)
 {
     this->numStories = numStories;
 }

void House::setNumWindows(int numWindows)
{
    this->numWindows = numWindows;
}

void House::setColor(string color)
{
    this->color = color;
}

int House::getNumStories() const
{
    return numStories;
}

int House::getNumWindows() const
{
    return numWindows;
}

string House::getColor() const
{
    return color;
}

void House::print()
{
     cout<< "The house is "<< color << " and has "
        << numStories << " Stories and "
        << numWindows << " windows."<<endl;
}
