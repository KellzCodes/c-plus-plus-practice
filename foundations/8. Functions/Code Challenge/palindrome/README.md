# Palindrome

1. Start with this code:

```
#include <iostream>

// Define is_palindrome() here:


int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}
```

2. Define a function ```is_palindrome()``` that takes:

	- An ```std::string``` parameter ```text```.
	
	The function should return:

	- ```true``` if ```text``` is a palindrome.
	- ```false``` if ```text``` is not a palindrome.

	(A palindrome is any text that has the same characters backwards as it does forwards. For example, “hannah” and “racecar” are palindromes, while “menu” and “ardvark” are not.)

	We will not test for edge cases such as capitalization or spaces.

Example code can be found in the [main.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/Code%20Challenge/palindrome/main.cpp) file.