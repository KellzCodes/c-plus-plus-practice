# UFO Project

Use C++ functions to build UFO, a hangman-like game in which players must crack a codeword to stop an alien abduction.

1. Start with this code:

**ufo.cpp**

```
#include <iostream>
#include "ufo_functions.hpp"

int main() {


}

```

**ufo_functions.hpp**

```
#include <vector>

void display_misses(int misses);

// Declare functions

```

**ufo_functions.cpp**

```
#include <iostream>
#include <vector>

// Define functions




void display_misses(int misses) {

  if (misses == 0 || misses == 1) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /     \\        (  Send help! ) \n";
    std::cout << "             /   0   \\      / `-----------'  \n";
    std::cout << "            /  --|--  \\    /                 \n";
    std::cout << "           /     |     \\                     \n";
    std::cout << "          /     / \\     \\                   \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 2) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /  0  \\        (  Send help! ) \n";
    std::cout << "             / --|-- \\      / `-----------'  \n";
    std::cout << "            /    |    \\    /                 \n";
    std::cout << "           /    / \\    \\                    \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 3) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /--|--\\        (  Send help! ) \n";
    std::cout << "             /   |   \\      / `-----------'  \n";
    std::cout << "            /   / \\   \\    /                \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 3) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /--|--\\        (  Send help! ) \n";
    std::cout << "             /   |   \\      / `-----------'  \n";
    std::cout << "            /   / \\   \\    /                \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 4) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /  |  \\        (  Send help! ) \n";
    std::cout << "             /  / \\  \\      / `-----------' \n";
    std::cout << "            /         \\    /                 \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 5) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              / / \\ \\        (  Send help! )\n";
    std::cout << "             /       \\      / `-----------'  \n";
    std::cout << "            /         \\    /                 \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 6) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /     \\        (  Send help! ) \n";
    std::cout << "             /       \\      / `-----------'  \n";
    std::cout << "            /         \\    /                 \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }

}
```

2. First, explore the three code blocks provided:

	- **ufo.cpp**: the main program file.
	- **ufo_functions.hpp**: the header file, where you’ll store function declarations.
	- **ufo_functions.cpp**: the file where you’ll store function definitions.

3. Define a void function greet() in ufo_functions.cpp that prints out the game title and instructions for the player:

```
=============
UFO: The Game
=============
Instructions: save your friend from alien abduction by guessing the letters in the codeword.
```

	Add the function’s declaration to **ufo_functions.hpp** and call the function in ```main()```.

4. Declare and initialize two new std::string variables in ```main()```:

	- ```codeword```: This is the codeword the player is trying to guess. Let’s make it ```"codecademy"```.
	- ```answer```: This value displays correctly guessed letters with blanks in between. Set it equal to a string of underscores the length of ```"codecademy"```.

5. Still in ```main()```, initialize a new integer variable ```misses``` with a value of ```0```.

6. A bunch happens on each player turn (we’ll get into that shortly). This code repeats until the player guesses the codeword or the UFO completes its abduction.

	Set up a ```while``` loop that continues as long as BOTH of the following conditions are true:

	- ```answer``` is not equal to ```codeword```.
	- ```misses``` is less than 7 (at seven misses, the person gets abducted).
	
	**VERY IMPORTANT**: To prevent an infinite loop, add ```misses++``` at the end of the ```while``` loop.

	(If you do not increment ```misses``` at the end of the loop, your code will not save and the site may stop responding.)

7. Before you get into the nitty gritty of player turns, let’s skip to when the player has either won or lost the game.

	Below the ```while``` loop, check if the player has won (```answer``` would be equal to ```codeword```).

	- If the player won, print ```"Hooray! You saved the person and earned a medal of honor!"```
	- Otherwise, print ```"Oh no! The UFO just flew away with another person!"```

8. Move this last ```if/else``` block into a new function ```end_game()``` that allows you to pass the strings ```answer``` and ```codeword``` as arguments.

	Remember to add the function declaration to **ufo_functions.hpp** and the function definition to **ufo_functions.cpp**.

	Below the ```while``` loop in **ufo.cpp**, all you should have left is a function call of ```end_game()``` with the necessary arguments;

9. Try running the code in the bash terminal!

	You should see the greeting and the exit message you added.

10. At the start of a turn, let’s display the player’s abduction status by way of UFO abduction ASCII art. Inside of the ```while``` loop in ```main()```, call ```display_misses()``` with an argument of ```misses```.

11. There are two more things to display on each turn: the player’s incorrect guesses and the ```answer``` so far.

	In ```main()``` above the ```while``` loop, create a ```char``` vector ```incorrect``` that we can add to on each iteration of the loop.

	Also there, initialize a ```bool``` named ```guess``` as ```false```. This will track whether the player guessed a correct letter.

12. Below your call of ```display_misses()``` in the ```while``` loop, print out ```"Incorrect Guesses:"```.

	Iterate through the ```incorrect``` vector and print out each character in ```incorrect``` followed by a space.

13. Next, display the player’s current answer:

	- Print out ```"Codeword:"```.
	- Iterate through ```answer``` and print each character followed by a space.

14. Move these last two bits of code featuring incorrect and answer into a new function ```display_status()```.

	The definition of ```display_status()``` in **ufo_functions.cpp** should have parameters that will allow you to pass ```incorrect``` and ```answer``` as arguments.

	Call this function below ```display_misses()``` in the ```while``` loop in **ufo.cpp**.

	Make sure to add the function declaration to **ufo_functions.hpp**.

	Test your code — is everything working as expected?

15. Time to get player input!

	- Above the ```while``` loop in ```main()```, declare a new ```char``` variable ```letter``` to capture the player’s guessed ```letter```.
	- Inside the ```while``` loop, below ```display_status()```:
		- Print out ```"Please enter your guess: "```.
		- Capture the player response with ```letter```.

16. Below the user input, loop through each character in ```codeword``` to see if the player was right!

17. On each iteration of the ```for``` loop, check if ```letter``` is the same as the current character in ```codeword```. If it is:

	- Set ```answer[i]``` equal to letter.
	- Change ```guess``` to ```true```.

18. Below the ```for``` loop (still inside of ```main()```), check if the player guessed a letter correctly!

	- If they did, print ```"Correct!"```
	- Otherwise:
		- Print ```"Incorrect! The tractor beam pulls the person in further."```
		- Add ```letter``` to the ```incorrect``` vector.

19. Move ```misses++``` into the ```else``` statement so that ```misses``` only increments if the ```guess``` was ```false```.

20. If you compile and execute, stuff is starting to come together (Nice!).

	But if you make a correct guess (e.g., “e”) and then an incorrect guess (e.g., “w”), the game still says you are correct because ```guess``` remains ```true```.

	Reset ```guess``` to ```false``` at the end of the ```while``` loop. Now ```guess``` only becomes ```true``` again if another correct letter is selected.

21. Congratulations! You’ve made it!

	Still stuck? You can see example code for each file here:

	- [ufo.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/UFO%20Project/ufo.cpp)
	- [ufo_functions.hpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/UFO%20Project/ufo_functions.hpp)
	- [ufo_functions.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/UFO%20Project/ufo_functions.cpp)