# Dereference

1. Start with this code:

```
#include <iostream>

int main() {
  
  int power = 9000;
  
  // Create pointer
  int* ptr = &power;
  
  // Print ptr
  std::cout << ptr << "\n";
  
  // Print *ptr
  
  
}
```

2. Print out ```*ptr``` using ```std::cout```.

	What do you think it will output?

Example code can be found in the [dereference.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/6.%20References%20and%20Pointers/Dereference/dereference.cpp) file.