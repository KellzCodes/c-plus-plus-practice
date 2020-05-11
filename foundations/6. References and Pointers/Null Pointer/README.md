# Null Pointer

1. Start with this code:

```
#include <iostream>

int main() {
  
  int power = 9000;
  
  // Create pointer
  int* ptr;
  
  // Later in the program...
  ptr = &power;
  
  // Print ptr
  std::cout << ptr << "\n";
  
}
```

2. Change the declaration of ```ptr``` and initialize it to ```nullptr```.

	The output should still be the same, but it’s not as dangerous!

Example code can be found in the [null_pointers.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/6.%20References%20and%20Pointers/Null%20Pointer/null_pointers.cpp) file.