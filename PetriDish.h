// TODO: Step 2
// Write the structure definition
// for a structure called PetriDish.
// PetriDish should have the following
// member variables:
//	int size (the number of Bacteria that can exist in the PetriDish)
//	Bacteria * ecosystem (a dynamic array of Bacteria contained in the PetriDish)
//	bool full (false if ecosystem is not full, true if it is)
struct PetriDish {
	int size;
	Bacteria * ecosystem;
	bool full;
	int curr_size;

	// TODO Step 9: 
	// Add a member variable called gameboard 
	// that is an array of doubly linked list of Spaces

	// TODO Step 10:
	// Add a member variable called width
	// which will represent the number of Spaces that comprise
	// the width of the gameboard 

	// TODO Step 11:
	// Add a member variable called height
	// which will represent the number of Spaces that comprise
	// the height of the gameboard
};
