# Answers for Lesson 4

## Quiz

1.	0 and 4 are the zero-based indexes of the first and last elements of an array with five elements. 
2.	No, as they are proven to be unsafe especially in handling user input, giving the user an opportunity to enter a string longer than the length of the array.
3.	One null terminating character.
4.	Depending on how you use it. If you use it in a cout statement, for instance, the display logic reads successive characters seeking a terminating null and crosses the bounds of the array, possibly causing your application to crash.
 
5.	That would simply replace the ```int``` in the vector's declaration by ```char```.

```vector<char> dynArrChars(3);```

## Exercises

1. Here you go. The application initializes for ROOKS, but it's enough for you to get an idea:

```
int main(){
	enum Square{
		Empty = 0, 
		Pawn, 
		Rook, 
		Knight, 
		Bishop, 
		King, 
		Queen
	};

	Square chessBoard [8][8];

	// Initialize the squares containing rooks 
	chessBoard[O][0] = chessBoard[0[7] = Rook; 
	chessBoard[7][0] = chessBoard[7][7] = Rook;

	return 0;
} 
```

2.	To set the fifth element of an array, you need to access element ```myNums[4]``` as this is a zero-based index.
3.	The fourth element of the array is being accessed without ever being initialized or assigned. The resulting output is unpredictable. Always initialize variables and also arrays; otherwise, they contain the last value stored in the memory location they'r created in.
