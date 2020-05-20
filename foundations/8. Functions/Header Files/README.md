# Header Files

1. Start with this code:

**main.cpp**

```
#include <iostream>

double average(double num1, double num2);
int tenth_power(int num);
bool is_palindrome(std::string text);

int main() {
  
  std::cout << is_palindrome("noon") << "\n";
  std::cout << tenth_power(4) << "\n";
  std::cout << average(4.0, 7.0) << "\n";
  
}
```

**fns.hpp**

```
// Move function declarations here:

```

**fns.cpp**

```
#include <iostream>
#include <cmath>

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
```

2. Move the function declarations from above ```main()``` in **main.cpp** into **fns.hpp**.

	Compile and execute.

3. Did that work?

	No! Why not?

	We forgot to ```include``` the header file in **main.cpp**. Without the ```include``` statement, the program doesn’t know that any of the functions even exist.

	Add the ```include``` statement above ```main()```.

4. Now compile and execute again. Remember to link the two **.cpp files** when compiling.

	Does it work?

Example code can be found in the [main.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/Header%20Files/main.cpp), [fns.hpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/Header%20Files/fns.hpp), and [fns.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/Header%20Files/fns.cpp) files