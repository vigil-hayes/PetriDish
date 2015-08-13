// TODO Step 9: Create a structure called GameBoard
// 1. GameBoard has a member variable called height
// 2. GameBoard has a member variable called width
// 3. GameBoard has an member variable that is an array of doubly linked list of Spaces called board
struct GameBoard {
	int height;
	int width;
	Spaces * board[]; // Dynamic array of doubly linked list 
};
