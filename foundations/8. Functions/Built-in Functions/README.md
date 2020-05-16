# Built-in Functions

1. Start with this code:

```
#include <iostream>

int main() {
  
  // This seeds the random number generator:
  srand (time(NULL));
  
  // Use rand() below to initialize the_amazing_random_number
  
  
}
```

2. Inside of ```main()```, call ```rand()``` with the modulo operator to generate a random number between 0 and your favorite number. For example, ```rand() % 29``` would output a random number between 0 and 28.

	Assign the resulting value to a new ```int``` variable called ```the_amazing_random_number```.

	Print ```the_amazing_random_number``` to the terminal.

Example code can be found in the [main.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/Built-in%20Functions/main.cpp) file.