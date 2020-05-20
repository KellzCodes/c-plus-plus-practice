# Inline Functions

1. Start with this code:

**main.cpp**

```
#include <iostream>
#include <chrono>

#include "night.hpp"

int main() {
  
  // Measure time taken for goodnight1():
  std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

  std::cout << goodnight1("tulip");
  
  std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double, std::milli> time_span = end - start;

  // Print time taken for goodnight1():
  std::cout << "Time taken for goodnight1(): " << time_span.count() << " milliseconds.\n\n";
  
  
  std::cout << goodnight2("eraser", "ivy");
  
}
```

**night.hpp**

```
std::string goodnight1(std::string thing1);
std::string goodnight2(std::string thing1, std::string thing2);
```

**night.cpp**

```
#include <string>

std::string goodnight1(std::string thing1) {
  return "Goodnight, " + thing1 + ".\n";
}

std::string goodnight2(std::string thing1, std::string thing2) {
  return "Goodnight, " + thing1 + " jumping over the " + thing2 + ".\n";
}
```

2. Currently, the program is set up with ```goodnight1()```‘s declaration and definition split into **night.hpp** and **night.cpp** respectively.

	We’ll try using the ```inline``` keyword and see how it affects the [runtime](https://en.wikipedia.org/wiki/Run_time_(program_lifecycle_phase)) of the function.

	We’re using a library header called ```chrono``` that allows us to clock time in milliseconds. (Don’t worry if you don’t understand all of the syntax used for this!)

	First, run your code as is. How many milliseconds did it take ```goodnight1()``` to execute?

3. Move the very short definition of ```goodnight1()``` from **night.cpp** over to **night.hpp** (replacing the declaration).

	Then add the ```inline``` keyword above the function and run the code.

Example code can be found in the [main.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/Inline%20Functions/main.cpp), [night.hpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/Inline%20Functions/night.hpp), and [night.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/Inline%20Functions/night.cpp) files.