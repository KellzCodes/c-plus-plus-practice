# Parameters & Arguments

1. Start with this code:

```
#include <iostream>

// Define get_emergency_number() below:



int main() {
  
  // Original emergency services number 
  std::string old_emergency_number = "999";
  
  // For nicer ambulances, faster response times
  // and better-looking drivers
  std::string new_emergency_number = "0118 999 881 999 119 725 3";
  
  // Call get_emergency_number() below with
  // the number you want!
  
  
}
```

2. You work with emergency services in Britain and the emergency number just changed.

	Let’s build a function that prints out the current emergency number, whatever it is from now on.

	Above ```main()```, define a ```void``` function ```get_emergency_number()``` that accepts one parameter:

	- a string with the name ```emergency_number```

3. In ```get_emergency_number()```, print out “Dial “ with the ```emergency_number``` that was passed into the function.

4. Call ```get_emergency_number()``` in ```main()``` to see the number get printed!

Example code can be found in the [main.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/Parameters%20and%20Arguments/main.cpp) file.