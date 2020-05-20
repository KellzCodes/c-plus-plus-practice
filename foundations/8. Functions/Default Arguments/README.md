# Default Arguments

1. Start with this code:
	**main.cpp**

```
#include <iostream>

#include "coffee.hpp"

int main() {
  
  // coffee black
  std::cout << make_coffee(false, false);
  
  // coffee with milk
  std::cout << make_coffee(true, false);
  
  // coffee with milk and sugar
  std::cout << make_coffee(true, true);
  
  // coffee with sugar
  std::cout << make_coffee(false, true);
  
}
```

	**coffee.hpp**

```
std::string make_coffee(bool milk, bool sugar);
```

	**coffee.cpp**

```
#include <string>

std::string make_coffee(bool milk, bool sugar) {
  std::string coffee = "Here's your coffee";
  if (milk and sugar) {
    coffee += " with milk and sugar";
  } else if (milk) {
    coffee += " with milk";
  } else if (sugar) {
    coffee += " with sugar";
  }
  return coffee + ".\n";
}
```

2. Time for a coffee break!

	You’re automating a coffee delivery system where people can order:

	- Coffee black (with no milk or sugar)
	- Coffee with milk
	- Coffee with sugar
	- Coffee with milk and sugar

	It’s a bunch of options, but most of the time, people just want plain black coffee. You have a function ```make_coffee()``` built out, but it’s not efficient for people to always enter that they are NOT having milk or sugar… So what are you to do?

	Default arguments to the rescue! Add default arguments of ```false``` to the parameters of ```make_coffee()``` in **coffee.hpp**.

3. Remove any unnecessary ```false``` arguments from each function call in ```main()```.

	Notice how the result is the same!

Example code can be found in the [main.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/Default%20Arguments/main.cpp), [coffee.hpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/Default%20Arguments/coffee.hpp), and [coffee.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/Default%20Arguments/coffee.cpp) files.