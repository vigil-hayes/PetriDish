#include <iostream>
#include <string>
#include "OrgVals.h"
#include "Organism.h"
#include "Creature.h"
#include "Bacteria.h"
#include "Space.h"
#include "PetriDish.h"

using namespace std;


/*
	We are creating virtual Petri dishes
	These will be used as a setting for our
	game of life implementation.
*/

void prepPetriDish(PetriDish & pd);
bool addToPetriDish(PetriDish & pd, Bacteria strain, int number);
void cleanPetriDish(PetriDish & pd);
void expandEcosystem(PetriDish & pd, int newsize);
void  createGameBoard(PetriDish & pd);

int main() {
	/* Step 5
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

	PetriDish petri;
	Bacteria strain_a;
	Bacteria strain_b;

	strain_a.food = &strain_b;
	strain_a.lifetime = 30.0;
	strain_a.food->lifetime = 60.0; //set the lifetime of strain_b
	strain_b.lifetime = 65.0; // set the lifetime of strain_b

	cout << strain_a.lifetime << endl;
	cout << strain_b.lifetime << endl;

	petri.size = 100;

	prepPetriDish(petri);
	addToPetriDish(petri, strain_a, 25);
	addToPetriDish(petri, strain_b, 25);

	return 0;
}

// Takes a PetriDish by reference and
// creates enouch space in pd.ecosystem
// to hold the maximum number of Bacteria
// allowed by pd
 
void prepPetriDish(PetriDish & pd) {

	// Create a Bacteria array on the heap
	// that is size pd.size
	pd.ecosystem = new Bacteria[pd.size];

	// Set curr_size to 0
	pd.curr_size = 0;

	// Set full to false
	pd.full = false;

	// TODO Step 11:
	// Initialize a pointer
	// to a dynamic variable of type
	// GameBoard and set it to pd.gameboard
	// Set the height and width
	// of pd.gameboard (SHOULD
	// accomodate pd.size number
	// of Bacteria)
}


// Returns true if the function is able to
// add number of strain to pd.ecosystm
// If there is no room, fill up as much as possible
// and return false
// If the pd.ecosystem becomes full, set full to true
bool addToPetriDish(PetriDish & pd, Bacteria strain, int number) {
	int actual = 0;
	int index;

	// Check to see if there is enough room in pd
	// to add all the bacteria indicated by number
	if ((number + pd.curr_size) > pd.size) {
		// Determine the ending index
		// based on how many you can insert
		actual = pd.size-pd.curr_size;
		// Determine the index to start at
		// Based on how full the dish is
		if (pd.curr_size == 0) {
			index = 0;
		} else {
			index = pd.curr_size - 1;
		}
	} else {
		// Determine the index to start at
		// Vased on how full the dish is
		// and based on how many you can insert
		actual = number;
		if (pd.curr_size == 0) {
                        index = 0;
                } else {
                        index = pd.curr_size - 1;
                }   	
	}

	// For each bacteria we are to add
	// until we either add number of bacteria
	// or fill the petri dish
	for(int i = (pd.curr_size-1); i < actual; i++) 
		// Add strain to ecosystem
		pd.ecosystem[i] = strain;
		// Increase current size of ecosystem by 1
		pd.curr_size++;
	}
	// If the ecosystem is full, return true
	if (pd.curr_size == pd.size){
		return true;
	}
	return false;
}

// Step 6: Implement 
void cleanPetriDish(PetriDish & pd) {
	delete [] pd.ecosystem; // delete the dynamic array
	pd.ecosystem = NULL; // handle the pointer
	pd.full = false; // no longer full
}

// TODO Step 7 [OPTIONAL]: Implement
void expandEcosystem(PetriDish & pd, int newsize) {
	// Write a function that will
	// increase the size of pd's ecosystem to be
	// new size if newsize is bigger than pd.size.
	
}

// TODO Step 12: Create gameboard
void  createGameBoard(PetriDish & pd) {
	// Initialize pd.gameboard
	// as an array of doubly linked Spaces
	// The gameboard should be able to hold all
	// the Bacteria in pd.ecosystem
	// If not, increase the dimensions of
	// pd.height and pd.width to accomodate
	// all the Bacteria in pd.ecosystem
}


