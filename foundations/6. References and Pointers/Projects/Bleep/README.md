# Bleep
	> “You don’t have to burn books to destroy a culture. 
	> Just get people to stop reading them.” - Ray Bradbury 

Congratulations on your new job at the Department of Re-education! You have been tasked with building an algorithm that can bleep out any words deemed unsavory by the powers that be.

Write a **bleep.cpp** program that “bleeps” any word that’s passed in. You’ll test this out with ```"broccoli"```, which has been recently banned by the Department.

Turn some text like ```"I'm rolling up my broccoli"``` into ```"I'm rolling up my ********"```.

Make sure to use pass-by-reference in your functions so you can modify the incoming text!

1. Start with this:
- empty **bleep.cpp**, **functions.hpp**, and **functions.cpp** files.

2. First include ```<iostream>``` and ```<string>``` because you are definitely going to need them, as well as a ```main()``` function.

3. Inside ```main()```, create two ```std::string``` variables:
- ```word``` with a value of ```"broccoli"```.
- ```text``` with a longer text with multiple ```"broccoli"```s in it.

4. Write a ```bleep()``` function that takes in the ```word``` and ```text``` and replace each ```word``` with asterisks ```*```.

	And make sure to use pass-by-reference so you can modify the ```text```.

	This is an algorithms problem that will require some planning beforehand so take some time and brainstorm how to do this on paper before start writing the code! A nested loop might be required.

Example code can be found in the [bleep.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/6.%20References%20and%20Pointers/Projects/Bleep/bleep.cpp), [functions.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/6.%20References%20and%20Pointers/Projects/Bleep/functions.cpp), and [functions.hpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/6.%20References%20and%20Pointers/Projects/Bleep/functions.hpp) files.