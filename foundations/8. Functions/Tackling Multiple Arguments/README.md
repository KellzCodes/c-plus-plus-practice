# Tackling Multiple Arguments

1. Start with this code:

```
#include <iostream>

// Define name_x_times() below:


int main() {
  
  std::string my_name = "Add your name here!";
  int some_number = 5; // Change this if you like!
  // Call name_x_times() below with my_name and some_number
  
  
}
```

2. Define a ```void``` function ```name_x_times()``` that takes two parameters:

	- a string ```name```
	an integer ```x```

3. Inside the function body of ```name_x_times()```, create a ```while``` loop that will run as long as ```x``` is greater than ```0```.

4. Inside the ```while``` loop, print ```name``` to the terminal.

	Below the print statement, decrement (or decrease) ```x``` by ```1``` so that ```x``` is a smaller number on the next loop.

5. Now, call ```name_x_times()``` in ```main()``` with ```my_name``` and ```some_number``` as arguments.

	(Don’t forget to change ```my_name``` to your name!)

Example code can be found in the [main.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/Tackling%20Multiple%20Arguments/main.cpp) file.