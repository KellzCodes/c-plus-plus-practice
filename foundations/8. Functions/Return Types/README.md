# Return Types

1. Start with this code:

```
#include <iostream>

// Change needs_it_support so that it returns support:
void needs_it_support() {
  
  bool support;
  
  std::cout << "Hello. IT. Have you tried turning it off and on again? Enter 1 for yes, 0 for no.\n";
  std::cin >> support;
  std::cout << support;
  
}

int main() {
  
  // Change the following line to print the function result:
  needs_it_support();
  
}
```

2. Convert ```needs_it_support``` from a ```void``` function into a ```bool``` type function.

3. We’re currently printing ```support``` at the end of the function body.

	Remove that print statement. Instead, return ```support``` from the function.

	Inside of ```main()```, print the result of ```needs_it_support()``` to the terminal.

Example code can be found in the [main.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/Return%20Types/main.cpp) file.