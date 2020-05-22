# Function Overloading

1. Start with this code:
	
**main.cpp**

```
#include <iostream>

#include "num_ops.hpp"

int main() {

  std::cout << fancy_integer(12, 3) << "\n";
  std::cout << other_fancy_integer(12, 3, 19) << "\n";
  std::cout << fancy_double(13.5, 3.8) << "\n";
  
}
```

**num_ops.hpp**

```
int fancy_integer(int num1, int num2);
int other_fancy_integer(int num1, int num2, int num3);
int fancy_double(double num1, double num2);
```

**num_ops.cpp**

```
int fancy_integer(int num1, int num2) {
  
  return num1 - num2 + (num1 * num2);
  
}

int other_fancy_integer(int num1, int num2, int num3) {
  
  return num1 - num2 - num3 + (num1 * num2 * num3);
  
}

int fancy_double(double num1, double num2) {
  
  return num1 - num2 + (num1 * num2);
  
}
```

2. You’re working with your friend on a project that involves creating some fancy number operations.

	Unfortunately, your friend had no idea that function overloading was a thing, so they built a few different functions with different names that all do almost the same operation.

	Fortunately, you DO know about function overloading, so you can change all three functions to the same name: ```fancy_number()```.

	Change the function names in the following places so that ```fancy_number()``` is overloaded:

	- **num_ops.hpp**
	- **num_ops.cpp**
	- the function calls in ```main()```

Example code can be found in the [main.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/Function%20Overloading/main.cpp), [num_ops.hpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/Function%20Overloading/num_ops.hpp), and [num_ops.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/Function%20Overloading/num_ops.cpp) files.