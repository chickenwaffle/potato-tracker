// POINTERS

#define mang main
#define eat delete

#include <iostream>
#include <vector>
#include <potato.h>
using namespace std;


int mang()
{
    bool hungry = true;
    vector<Potato*> dinnerPlate;						// Create an array of potatoes

    // Add potatoes to the meal
    Potato *potato = new Potato();						// Creates the pointer and makes the first potato
    dinnerPlate.push_back(potato);						// Add the potato to the dinner plate

    potato = new Potato("Rolf", 10, 10, 25, 25, 0, false);			// Use the same potato pointer to make a second potato
    dinnerPlate.push_back(potato);						// Add it to the dinner plate

    potato = new Potato("Bjorn", 5, 5, 30, 30, 9000, false);			// same as above: uses potato pointer to make potato
    dinnerPlate.push_back(potato);						// and add the third potato to the plate

    potato = new Potato("Nikon Coolpix 1st gen", 314, 159, 26, 54, -3, false);	// This camera is a potato
    dinnerPlate.push_back(potato);						// Probably shouldn't eat this, but I'm hungry, so it looks delicious.

    for (Potato* potato: dinnerPlate) {
        cout << potato->status();						// (see potato.cpp) while the pointer has changed, the values in the array have not
    }

    for (Potato* potato: dinnerPlate) {
        eat potato; 								// does what it says (see #define at top of program)
    }

    dinnerPlate.clear();

    hungry = false;

    // #yum
    return 0;
}

