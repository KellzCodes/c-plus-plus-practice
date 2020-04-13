# Loops

## A loop is a programming tool that repeats some code or a set of instructions until a specified condition is reached. 

As a programmer, you’ll find that you rely on loops all the time! You’ll hear the generic term “iterate” when referring to loops; iterate simply means “to repeat”.

When we see that a process has to repeat multiple times in a row, we write a loop. Loops allow us to create efficient code that automates processes to make scalable, manageable programs.

![alt text](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/3.%20Loops/roundabout.gif)

## Table of Contents
- [While Loop](#While-Loop)
- [For-Loop](#For-Loop)
- [Basic Programs](#Basic-Programs)

### While Loop

The ```while``` loop looks very similar to an ```if``` statement. And just like an ```if``` statement, it executes the code inside of it if the condition is ```true```.

However, the difference is that the ```while``` loop will continue to execute the code inside of it, *over* and *over again*, as long as the condition is ```true```.

Here is what a ```while``` loop looks like:

```
while (condition) {

  statements

}
```

In other words, instead of executing *if* something is true, it executes *while* that thing is true.

```
while (guess != 8) {

  std::cout << "Wrong guess, try again: ";
  std::cin >> guess;

}
```

In this example, while ```guess``` is not equal to 8, the program will keep on asking the user to input a new number. It will exit the ```while``` loop once the user types in ```8``` and then the program will continue.

### For Loop

![alt text](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/3.%20Loops/forloops1.png)
[FoxTrot](https://www.foxtrot.com/)

Iterating over a sequence of numbers is so common that C++, like most other programming languages, has a special syntax for it.

When we know exactly how many times we want to iterate (or when we are counting), we can use a ```for loop``` instead of a ```while``` loop:

```
	for (int i = 0; i < 20; i++) 
	{

	  std::cout << "I will not throw paper airplanes in class.\n";

	}
```

Let’s take a closer look at the first line:

```
for (int i = 0; i < 20; i++)
```

There are three separate parts to this separated by ```;```:
- The initialization of a *counter*: ```int i = 0```
- The continue condition: ```i < 20```
- The change in the counter (in this case an increment): ```i++```

So here we are creating a variable ```i``` that starts from 0. We will repeat the code inside over and over again when ```i``` is less than 20. At the end the ```for``` loop, we are adding 1 to ```i``` using the ```++``` operator.

Take a look at a decrementing (counting down) ```for``` loop:

```
for (int i = 20; i > 0; i--) 
{
  // Statements
}
```

# Basic Programs

- [While Loop Demo](#While-loop-demo)
- [Guess Number](#Guess-Number)
- [Square](#Square)
- [For Loop Demo](#For-Loop-Demo)
- [99 Bottles](#99-Bottles)
- [Build a Text Adventure](#Build-a-Text-Adventure)
- [Fizz Buzz](#Fizz-Buzz)

## While Loop Demo

A program that asks and checks for a password. It uses a while loop to ask the user for the password over and over again.

1. Open the [enter_pin.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/3.%20Loops/enter_pin.cpp) file

2. Compile and execute using the terminal.

	When the program asks you to ```Enter your PIN:```, try the following:

	- Press ```1111``` and press ```enter```.

	- Press ```2019``` and press ```enter```.

	- Press ```1234``` and press ```enter```.

## Guess Number

A program that asks the user to guess a number between 1-10 and the answer is 8!

1. Start with this code

```
#include <iostream>

int main() {

  int guess;
  
  int tries = 0;

  std::cout << "I have a number 1-10.\n";
  std::cout << "Please guess it: ";
  std::cin >> guess;
 
  // Write a while loop here:
  
  
  
  
  
  if (guess == 8) {
    
    std::cout << "You got it!\n";
  
  }  
  
}
```

2. Instead of just asking for the user to answer it once, let’s add a ```while``` loop so that they answer it up to 50 times!
```
	while (guess != 8 && tries < 50) {

	  std::cout << "Wrong guess, try again: ";
	  std::cin >> guess;

	  tries++;

	}
```
	The ```&&``` symbol means and *and* it combines two conditions into one.

	In this ```while``` loop, while ```guess``` does not equal to 8 and the number of ```tries``` is less than 50, we are asking the user to type a number once again. And then we add 1 to ```tries``` using the ```++``` operator.

Source code for this program can be found in the [guess.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/3.%20Loops/guess.cpp) file.

## Square

A program that to calculates and prints a simple list of squares

1. Start with this code:

```
	#include <iostream>

	int main() {
	  
	  int i = 0;
	  int square = 0;
	  
	  // Write a while loop here:
	 
	}
```

2. Write a while loop that calculates and prints squares from 0 up to the number 10.

The source code for this program can be found in the [square.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/3.%20Loops/square.cpp) file.

## For Loop Demo

1. Open the [troublemaker.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/3.%20Loops/troublemaker.cpp) file

2. Run the code to see the ```for``` loop in action

## 99 Bottles

A program that demonstrates the use of a decrementing ```for``` loop

1. Write program that prints the verses of the “99 Bottles” song. Each stanza goes something like this:

```
	i bottles of pop on the wall.
	Take one down and pass it around.
	i-1 bottles of pop on the wall.
```

Source code for this program can be found in the [99bottles.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/3.%20Loops/99bottles.cpp) file

## Build a Text Adventure

Create a C++ text adventure with the storyline of your choosing. The program should use your knowledge of C++ conditionals, logic, and loops.

1. In order to complete this project, you should be familiar with C++ conditionals and control flow, loops, and setting variables using user input.

2. Your program should have a storyline with:

	- a beginning
	- at least three possible endings
	- It can help to map out your ideas on paper and draw out your possible branches before you begin coding anything.

3. Your program should contain at least three branch points where the user must make a choice about what to do next. At each branch point, the program should:
	- give the user at least two choices
	- accept user input
	- **Note** that not every story branch needs its own ending; it can also add something and then reconnect with another storyline.

4. Your program should incorporate at least one kind of loop.

	Loops come in handy in a couple scenarios:

	- to validate user input (e.g., check if the user entered something other than your listed choices and then list the choices again)
	- to give the user multiple chances to choose a specific outcome (e.g., give a user three chances to pick an option that won’t get them killed)
	- to continue the adventure until the user makes a particular choice

5. Your program should handle user choices using conditional logic. Use ```if```/```else if``` statements and switch statements where you see fit.

	**Note**: If your user has reached an ending, you can use ```return 0;``` to exit the main() function and end the program.

Example code for this program can be found in the [text-adventure.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/3.%20Loops/text-adventure.cpp) file.

## Fizz Buzz

![alt text](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/3.%20Loops/fizzbuzz.gif)

A program that outputs numbers from 1 to 100. But for multiples of 3, print Fizz instead of the number and for the multiples of 5, print Buzz. For numbers which are multiples of both 3 and 5 print, FizzBuzz.

```
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
16
17
Fizz
19
Buzz
    ...
97
98
Fizz
Buzz
```

1. Create a skeleton for the program. Add:

```
	#include <iostream>

	int main() {

	  // Brain explodes here:

	}
```

2. How do we output all the numbers from 1 to 100?

	Well, we could write ```std::cout``` 100 times back to back but that’s no fun. What else can we do?

	That’s right! A ```for``` loop!

	Write a ```for``` loop that starts at 1 and iterates to 100.

3. Inside the ```for``` loop, let’s output the counter ```i```.

4. And now we have all the numbers. Let’s solve the hard part.

	Before coding further, take out a piece of paper and brainstorm.

	How do we check for whether or not a number is divisible by 3?

	**Hint**: You will need a ```if```/```else if```/```else``` statement for this and also the modulo ```%``` operator!

The source code for this program can be found in the [fizzbuzz.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/3.%20Loops/fizzbuzz.cpp) file.

