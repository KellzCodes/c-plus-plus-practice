# First Three Multiples

1. Start with this code:

```
#include <iostream>
#include <vector>

// Define first_three_multiples() here:


int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}
```

2. Write a function named ```first_three_multiples()``` that has:

	- An ```int``` parameter named ```num```.

	The function should return an ```std::vector``` of the first three multiples of ```num``` in ascending order.

	For example, ```first_three_multiples(7)``` should return a vector with 7, 14, and 21.

Example code can be found in the [main.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/Code%20Challenge/First%20Three%20Multiples/main.cpp) file.