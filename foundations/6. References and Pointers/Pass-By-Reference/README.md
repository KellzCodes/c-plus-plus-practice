# Pass-By-Reference

Shows how to use a pass-by-reference

1. Start with this code:

```
#include <iostream>

int triple(int i) {

  i = i * 3;
  
  return i;

}

int main() {
  
  int num = 1;
  
  std::cout << triple(num) << "\n";
  std::cout << triple(num) << "\n";

}
```

2. Take a look at the above code. There is a function called ```triple()``` and there is a ```main()``` where we call ```triple()``` twice.

	What do you think this code will output?

	Run the program to see if you are correct.

3. Change the parameter from ```int i``` to ```int &i```.

	We are doing pass-by-reference instead of pass-by-value. What do you think this will output now?

	Run the code again.

Example code can be found in the [pass_by_reference.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/6.%20References%20and%20Pointers/Pass-By-Reference/pass_by_reference.cpp) file.