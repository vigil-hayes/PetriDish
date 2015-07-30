#include <iostream>
#include <string>
#include "OrgVals.h"
#include "Organism.h"
#include "Creature.h"
#include "Bacteria.h"
#include "PetriDish.h"

using namespace std;


/*
	We are creating virtual Petri dishes
*/

void prepPetriDish(PetriDish & pd);
bool addToPetriDish(PetriDish & pd, Bacteria strain, int number);

int main() {
	/* TODO: Step 5
		1. Instantiate a PetriDish called petri
			petri starts with full set to false
		2. Either take a command line argument or user input
			to determine how many Bacteria it holds	
			and set the petri.size appropriately
		3. Call prepPetriDish
		4. Call addToPetriDish as many times as you like
			with as many different instantiations of
			Bacteria as you like :)
	*/

	return 0;
}

// Takes a PetriDish by reference and
// creates enouch space in pd.ecosystem
// to hold the maximum number of Bacteria
// allowed by pd
 
void prepPetriDish(PetriDish & pd) {
	// TODO: Step 3
}


// Returns true if the function is able to
// add number of strain to pd.ecosystm
// If there is no room, fill up as much as possible
// and return false
// If the pd.ecosystem becomes full, set full to true
bool addToPetriDish(PetriDish & pd, Bacteria strain, int number) {
	// TODO: Step 4
	return false;
}


