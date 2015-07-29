#include <iostream>
#include <string>
#include "OrgVals.h"
#include "Organism.h"
#include "Plant.h"
#include "CreatureVals.h"
#include "Creature.h"

// TODO: Enter the #include for your
// Creature definition here
// Use PickyDolphin as an example
#include "Creatures/PickyDolphin.h"
#include "Creatures/BlueTuna.h"
#include "Creatures/PoisonSeaweed.h"

using namespace std;


/*
	This program simulates a sea of creatures and plants.
	The sea is simulated by a 

*/

int main() {

	PickyDolphin pd = PickyDolphin("Picky Little Dolphin");
	PoisonSeaweed pswd = PoisonSeaweed("Poison Seaweed", 4.5, GREEN, true, BLUE);
	BlueTuna bt = BlueTuna("Big Kahuna Tuna");
	cout << bt.size << endl;
	if(!bt.willEat(pswd)) {
		bt.turnsToStarving -= 1;
	}
	cout << pd.turnsToStarving << endl;
	if(!pd.willEat(bt)){
		pd.turnsToStarving -= 1;
	}
	cout << pd.turnsToStarving << endl;
	cout << bt.health << endl;

	return 0;
}


