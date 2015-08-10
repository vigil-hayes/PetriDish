HINT: In the code, look for parts tagged *"TODO"*

# Part 1: Creating basic data structures and establishing the PetriDish

## Step 1: Bacteria
In Bacteria.h you will find an empty structure definition.
Fill it in according to the instructions in the file.

They are written here for your reference:

```
Fill in the structure definition for the structure with tag Bacteria.
Bacteria inherits from the structure Creature (Creaure.h) so it has all the member variables Creature has
automatically. 

Member variables should inclue:
	1. Bacteria food (another bacteria that this Bacteria likes to eat)
	2. double rep_rate (the rate at which the bacteria asexually repoduces in reproductions per second)
	3. double lifetime (the length of time this Bacteria is alive)
```
## Step 2: PetriDish
In PetriDish.h you will find an empty structure definition.
Fill it in according the the instructions in the file.

They are written here for your reference:

```
Write the structure definition for a structure called PetriDish.
PetriDish should have the following member variables:
	1. int size (the number of Bacteria that can exist in the PetriDish)
	2. Bacteria * ecosystem (a dynamic array of Bacteria contained in the PetriDish)
	3. bool full (false if ecosystem is not full, true if it is)
```

## Step 4: prepPetriDish
Fill in the function definition for prepPetriDish.

It should initialize the *ecosystem member* of pd
to be the size of the *size member* of pd.

Consequently, it should set the *full member* of pd
to be equal to false.

```
void prepPetriDish(PetriDish & pd) {
	// TODO: Step 3
}
```

## Step 5: addToPetriDish
Fill in the function definition for addToPetriDish.

It should return true if the function is able to
add *number* of *strain* to *pd.ecosystem*.
If there is no room, fill up as much as possible
and return false.

```
bool addToPetriDish(PetriDish & pd, Bacteria strain, int number) {
	// TODO: Step 4
	return false;
}
```

## Step 6: cleanPetriDish
Fill in the function definition for cleanPetriDish.

It should clear the dynamically allocated contents of
*pd.ecosystem*, change *pd.full* to false. 

## Step 7 [OPTIONAL]: expandEcosystem
Fill in the function definition for expandEcosystem.

It should expand *pd.ecoystem* to an array of the new size passed
in as a parameter.

# Part 2: Setting up for game play
## Step 8: Space structure
Create a definition for a struct called Space. 

1. Space is a struct that represents a unit of physical space in a PetriDish
2. Space has a Bacteria that currently occupies its space called *bacteria*
3. Space has a pointer to another Space called *north*
4. Space has a pointer to another Space called *south*
5. When Spaces are connected together, they can form a chain of doubly linked North-to-South Spaces
 
## Step 9: GameBoard structure
Create a definition for a struct called GameBoard.

1. GameBoard has a member variable called height
2. GameBoard has a member variable called width
3. GameBoard has an member variable that is an array of doubly linked list of Spaces called board

## Step 10: Add member variable to PetriDish
Add a member variable called gameboard that points to a GameBoard


## Step 11: Edit definition of prepPetriDish function in main.cpp
Initialize pd.gameboard to a dynamic GameBoard variable. 
Set the height and width of pd.gameboard (SHOULD accomodate pd.size number of Bacteria).

## Step 12: createGameBoard
Write the definition of a function called createGameBoard in main.cpp

The function initializes pd.gameboard as a new GameBoard.

*pd.gameboard* should be able to hold all the Bacteria in pd.ecosystem.
If not, increase the dimensions of *pd.gameboard->height* and *pd.gameboard->width* to accomodate all the Bacteria in pd.ecosystem.
