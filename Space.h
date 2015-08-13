// TODO Step 8: Implement Space
// 1. Space is a struct that represents a unit of physical space in a PetriDish
// 2. Space has a Bacteria that currently occupies its space called bacteria
// 3. Space has a pointer to another Space called north
// 4. Space has a pointer to another Space called south
// 5. When Spaces are connected together, they can form a chain of doubly linked North-to-South Spaces
struct Space {
	Bacteria bacteria;
	Space * north;
	Space * south;
};
