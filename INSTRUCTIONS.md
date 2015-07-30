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
