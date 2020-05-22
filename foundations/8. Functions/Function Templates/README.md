# Function Templates

1. Start with this code:

**main.cpp**

```
#include <iostream>

#include "numbers.hpp"

int main() {
  
  std::cout << get_smallest(100, 60) << "\n";
  std::cout << get_smallest(2543.2, 3254.3) << "\n";
  
}
```

**numbers.hpp**

```
// Replace these declarations with a template

int get_smallest(int num1, int num2);
double get_smallest(double num1, double num2);

```

**numbers.cpp**

```
// Remove everything here:

int get_smallest(int num1, int num2) {
  
  return num2 < num1? num2 : num1;
  
}

double get_smallest(double num1, double num2) {
  
  return num2 < num1? num2 : num1;
  
}
```

2. Here’s the deal: You have ```get_smallest()``` overloaded for ```int``` and ```double```, but you may want to use the function with more types later.

	Equipped with your new understanding of function templates, you can make this happen. Ready?

	Replace the function declarations in **numbers.hpp** with a function template that allows for various number types and returns the type passed in. (For example, if you pass in two ```ints```, the function should return an ```int```.)

	Then remove the definitions in **numbers.cpp** (they are now unnecessary) and run **main.cpp**.


Example code can be found in the [main.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/Function%20Templates/main.cpp) and [numbers.hpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/Function%20Templates/numbers.hpp).