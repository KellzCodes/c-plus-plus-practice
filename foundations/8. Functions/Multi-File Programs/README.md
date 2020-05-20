# Multi-File Programs

1. Start with this code:

**main.cpp**

```
#include <iostream>
#include <cmath>

// Add declarations here:


double average(double num1, double num2) {
  return (num1 + num2) / 2;
}

int tenth_power(int num) {
  return pow(num, 10);
}

bool is_palindrome(std::string text) {
  std::string reversed_text = "";
  
  for (int i = text.size() - 1; i >= 0; i--) {
    reversed_text += text[i];
  }
  
  if (reversed_text == text) {
    return true;
  }
  
  return false;
}

int main() {
  
  std::cout << is_palindrome("racecar") << "\n";
  std::cout << tenth_power(3) << "\n";
  std::cout << average(8.0, 19.0) << "\n";
  
}
```

**my_functions.cpp**

```
#include <iostream>
#include <cmath>

// Add definitions here:
```

2. In **main.cpp**, we have a program with a few functions. Let’s move them into a different file.

	First, add a declaration for each function in **main.cpp** above the functions above ```main()```.

3. Now, move all of the function definitions over to **my_functions.cpp**.

4. Finally, compile and execute your code. Remember to link the two **.cpp** files when compiling.

Example code can be found in the [main.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/Multi-File%20Programs/main.cpp) and [my_functions.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/Multi-File%20Programs/my_functions.cpp) files.