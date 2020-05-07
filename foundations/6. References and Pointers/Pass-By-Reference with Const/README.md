# Pass-By-Reference with Const

shows how to use a pass-by-reference with a constant variable

1. Start with this code:

```
#include <iostream>

int square(int &i) {

  return i * i;

}

int main() {
  
  int side = 5;
  
  std::cout << square(side) << "\n";

}
```

2. Take a look at the code above. There is a function called ```square()``` and there is a ```main()``` where we call ```square()``` once.

	What do you think this code will output?

	Run the program to see if you are correct.

3. Since we are not modifying the parameter in the function, let’s go a step further and make the ```square()```‘s parameter a ```const``` reference.

	Run the code again.

	The output should be the same!

Example code can be found in the [const.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/6.%20References%20and%20Pointers/Pass-By-Reference%20with%20Const/const.cpp) file. 