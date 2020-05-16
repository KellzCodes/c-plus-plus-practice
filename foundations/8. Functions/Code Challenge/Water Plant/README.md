# Water Plant

1. Start with this code: 

```
#include <iostream>

// Define needs_water() here:


int main() {
  
  std::cout << needs_water(10, false) << "\n";
  
}
```

2. Define a function ```needs_water()``` that accepts:

	- An ```int``` number of ```days``` since the previous watering.
	- A ```bool``` value ```is_succulent```. (A value of ```true``` would indicate that the plant is a succulent.)

	Inside the function, you’ll need some conditional logic:

	- If ```is_succulent``` is ```false``` and ```days``` is greater than ```3```, return ```"Time to water the plant."```.
	- If ```is_succulent``` is ```true``` and ```days``` is ```12``` or less, return ```"Don't water the plant!"```.
	- If ```is_succulent``` is ```true``` and ```days``` is greater than or equal to ```13```, return ```"Go ahead and give the plant a little water."```.
	- Otherwise, return ```"Don't water the plant!"```.

	**Note**: Don’t print the strings; return them from the function.

Example code can be found in the [main.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/Code%20Challenge/Water%20Plant/main.cpp) file.