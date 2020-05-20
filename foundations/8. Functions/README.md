# Functions
#### C++ functions allow you to use the same code statements over and over without repeating yourself.

- Function Basics
  - [Built-in Functions](#Built-in-Functions)
  - [Declare & Define](#Declare-and-Define)
  - [Void Method](#Void-Method)
  - [Return Types](#Return-Types)
  - [How Return Values Work](#How-Return-Values-Work)
  - [Parameters & Arguments](#Parameters-and-Arguments)
  - [Tackling Multiple Arguments](#Tackling-Multiple-Arguments)
  - [How Parameters & Arguments Work](#How-Parameters-and-Arguments-Work)
  - [Review The Basics](#Review)
  - [Code Challenge](#Code-Challenge)
- [Scope and Flexibility](#Scope-and-Flexibility)
  - [The Scope of Things](#The-Scope-of-Things)
  - [Multi-File Programs](#Multi-File-Programs)
  - [Header Files](#Header-Files)
  - [Inline Functions](#Inline-Functions)
  - [Default Arguments](#Default-Arguments)

As a programmer, you will find yourself reusing the same blocks of code over and over throughout your program. In times like these, you can turn to functions.

Also known as a method or procedure, a *function* is a named group of code statements that accomplish something together, a bit like a factory machine.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/functions-conceptual.gif" alt="function" width="500"/>

There are some great reasons to use functions in your code:

- A single line can make all that code fire off instead of a whole bunch of lines.
- You can build DRY (Don’t Repeat Yourself) code, reusing the code you already wrote.
- Functions help make your code flexible and *modular*, meaning you can group your code more easily by task.

In fact, every C++ program has at least one function. “Hold on,” you may be thinking, “I’ve written some C++ programs, but I haven’t written any functions yet!”

Well, as it happens, ```main()``` is a function that you’ve already used! And you’ll understand it a bit more as you learn how functions work.

Example code can be found in the [Intro to Functions](https://github.com/keldavis/c-plus-plus-practice/tree/master/foundations/8.%20Functions/Intro%20to%20Functions) folder.

## Built in Functions

Before we learn how to create functions, let’s go over some built-in functions…

C++ comes chock-full of functions that are already created as part of the standard library. But how do we access this hidden hoard of helpful functions? We gain access to various functions by including headers like ```<cmath>``` or ```<string>```.

In fact, you may already have used a couple functions without even knowing it! With the following header:

```
#include <cmath>
```

We gain the power to call ```sqrt()``` to find the square root of any number.

Wait, “call” ```sqrt()```?

*Calling* a function is how we get a function to take action. To call a basic function, we just need the function name followed by a pair of parentheses like ```sqrt(9)```. For example:

```
std::cout << sqrt(9) << "\n";

// This would output 3
```

Example code can be found in the [Built-in Functions](https://github.com/keldavis/c-plus-plus-practice/tree/master/foundations/8.%20Functions) folder.

## Declare and Define

Often, built-in functions aren’t enough to tackle the wide array of programming challenges out there. But never fear: you can write your own functions too!

A C++ function is comprised of two distinct parts:

- *Declaration*: this includes the function’s name, what the return type is, and any parameters (if the function will accept input values, known as arguments).
- *Definition*: also known as the *body* of the function, this contains the instructions for what the function is supposed to do.

```
This is the overall structure:

return_type function_name( any, parameters, you, have ) {

   // Code block here

   return output_if_there_is_any;

}
```

This is what it might look like with real code:

```
void make_sandwich() {

  std::cout << "bread\n";
  std::cout << "egg\n";
  std::cout << "cheese\n";
  std::cout << "avocado\n";
  std::cout << "bread\n";

}
```

Watch how the ```make_sandwich()``` function gets executed step by step:

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/void-cpp-functions.gif" alt="void function" width="500"/>

## Void Method

Let’s build a simple function with no input and no output. We can do that?

Enter the ```void``` specifier, which is added in the function declaration before the function name. A ```void``` function, also known as a subroutine, has no return value, making it ideally suited for situations where you just want to print stuff to the terminal.

For example:

```
void animal_chat() {

  std::string fav, pet;

  std::cout << "What's your favorite animal?\n";
  std::cin >> fav;

  std::cout << "Do you have a " << fav << " as a pet? y/n\n";
  std::cin >> pet;

  if (pet == "y") {

    std::cout << "How lucky you have a " << fav << " as a pet!\n";

  } else {

    std::cout << "That's too bad.\n";

  }

}
```

The above chat program is built to capture user responses and print to the terminal without returning any values.

Example code can be found in the [Void Method](https://github.com/keldavis/c-plus-plus-practice/tree/master/foundations/8.%20Functions/Void%20Method) folder

## Return Types

When you do in fact want your function to return something and pass information back to the rest of your program, C++ has you covered. Just like there are many variable types, there are many different return types for functions.

A function can return most data types we’ve covered, including ```double```, ```int```, ```bool```, ```char```, ```std::string```, and ```std::vector```.

```
std::string always_blue() {

  return "blue!\n";

}
```

**Note**: The return statement is the last line of code that a function will execute. For example:

```
std::string always_blue() {

  return "blue!\n";

  std::cout << "Returned blue!";

}
```

The final line will not execute because a value has already been returned. So ```"Returned blue!"``` won’t be printed to the terminal.

Example code can be found in the [Return Types](https://github.com/keldavis/c-plus-plus-practice/tree/master/foundations/8.%20Functions/Return%20Types) folder.

## How Return Values Work

When functions have a return type other than ```void```, the function has two new requirements:

- There must be a value returned from the function.
- The return value must be the same type as the function’s return type.

But where does the return value get returned to?

It gets returned to the place where the function is called. For example, if you have the following function:

```
std::string feed_the_cat() {

  return "Cat is fed!";

}
```

And then print the function call inside of ```main()```:

```
int main() {

  std::string cat_message = feed_the_cat();
  std::cout << cat_message;

}
```

The return value of the function is what gets printed to the terminal.

Watch how ```make_sandwich()``` passes its return value back to the function call in ```main()```:

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/cpp-function-return-types.gif" alt="return types" width="500"/>

## Parameters and Arguments

Returning data is all well and good, but let’s say you’re visiting NYC and you’ve been told that New Yorkers usually add a 20% tip for restaurants and taxis. It would be really convenient if you could just build a function that accepted different prices as input and figured out how much you should tip.

As it happens, you can do that with parameters. *Parameters* (sometimes called *formal parameters*) are variables used in a function’s definition. They act as placeholders for the input values you’ll use during your function call.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/cpp-functions-params-args-small.gif" alt="parameter args" width="500"/>

In the function below, ```price``` is the function’s parameter and it’s a double. It is declared between the parentheses and then used in the body of the function.

```
double get_tip(double price) {

  return price * 0.2;

}
```

Then, when you’re ready to use your function, the value you pass to the function is called an *argument* (also known as an *actual parameter*). In this case, ```15.75``` is the argument that is passed to the function:

```
double tip = get_tip(15.75);
// tip would be 3.15
```

Example code can be found in the [Parameters and Arguments](https://github.com/keldavis/c-plus-plus-practice/tree/master/foundations/8.%20Functions/Parameters%20and%20Arguments) folder.

## Tackling Multiple Arguments

Hang on, you may be thinking, are you limited to one parameter per function? Not at all! You can add as many as you like, but you will have to remember their order when you call the function.

```
double get_tip(double price, double tip, bool total_included) {

  if (total_included) {

    return price * tip + price;

  } else {

    return price * tip;

  }

}
```

So here we have three parameters:

- ```double price```
- ```double tip```
- ```bool total_included```

When calling ```get_tip()```, it’s important to call it with ```price``` first, ```tip``` second, and ```return_total``` last:

```
get_tip(0.25, true, 45.50);
// this code will not work
```

```
get_tip(45.50, 0.25, true);
// this code results in 56.875, which you could round up to 56.88
```

Example code can be found in the [Tackling Multiple Arguments](https://github.com/keldavis/c-plus-plus-practice/tree/master/foundations/8.%20Functions/Tackling%20Multiple%20Arguments) folder

## How Parameters and Arguments Work

A function with parameters has a couple of requirements:

- The function call must include the **same number** of arguments as there are parameters.
The corresponding arguments must be passed in the **same order**.

By calling a function with arguments, you are telling a function, “Hey function, when you execute, use these values where you have parameters in your definition.”

While it executes, anywhere the function comes across a parameter, it replaces the parameter with the corresponding argument you gave it.

Take a look at how our updated ```make_sandwich()``` function executes when it gets called with ingredients as arguments:

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/cpp-functions-parameters.gif" alt="function" width="500"/>

## Review

Wow! Check out all you’ve learned about C++ functions:

- A function is a named group of statements that do something together.
- Functions allow you to create more flexible, modular, and DRY code.
- C++ has many built-in functions that you can use.
- Functions are called like ```function_name();```
- A function has a declaration with a return type and possible parameters.
- A function has a definition (or body) with a group of statements and a possible return value.
- ```void``` functions do not have return values.
- Functions with a return value have return statements.
- Parameters are variables used as placeholders for function input values.
- Arguments are a function’s actual input values.

You now know enough C++ to create some pretty cool projects on your own. But, as you’ll see, there are still many ways to improve your code.

## Code Challenge

Practice building C++ functions! Exercises and example code can be found in the [Code Challenge](https://github.com/keldavis/c-plus-plus-practice/tree/master/foundations/8.%20Functions/Code%20Challenge) folder.

# Scope and Flexibility

Expand beyond single-file programs with scope. Then make C++ functions more flexible using default parameters, overloading, and templates.

## The Scope of Things

Take a look at the program below. We have a ```void``` function named ```favorite_animal()``` and ```main()``` with a few statements inside.

```
#include <iostream>

std::string sea_animal = "manatee";

void favorite_animal(std::string best_animal) {

  std::string animal = best_animal;
  std::cout << "Best animal: " << animal << "\n";

}

int main() {

  favorite_animal("jaguar");

  std::cout << sea_animal << "\n";
  std::cout << animal << "\n";

}
```

When this program is compiled and executed, ```sea_animal``` will print, but ```animal``` won’t. Why do you think that’s the case?

*Scope* is the region of code that can access or view a given element.

- Variables defined in *global scope* are accessible throughout the program.
- Variables defined in a function have *local scope* and are only accessible inside the function.

```sea_animal``` was defined in global scope at the top of the program, outside of ```main()```. So ```sea_animal``` is defined everywhere in the program.

Because ```animal``` was only defined within ```favorite_animal()``` and not returned, it is not accessible to the rest of the program.

Example code can be found in the [The Scope of Things](https://github.com/keldavis/c-plus-plus-practice/tree/master/foundations/8.%20Functions/The%20Scope%20of%20Things) folder.

## Multi File Programs

Programs can grow quickly. With a few functions, you can declare the function above ```main()``` and then you can define the function below ```main()``` like this:

```
#include <iostream>

// Declaration at the top:
void eat();

int main() {

  eat();

}

// Definition at the bottom:
void eat() {

  std::cout << "nom nom nom\n";

}
```

But this isn’t ideal when your code gets longer; it’s common to use the same function in more than one **.cpp** file.

To make your code cleaner and more modular, you can move the function definitions over to another specialized **.cpp** file (e.g., **my_functions.cpp**), leaving a list of declarations above ```main()```.

But files, like functions, have scope. So, how does the ```main()``` program know about the function definitions?

Before your program even compiles, it links together any files you list in your compilation statement into a single executable:

```
g++ main.cpp my_functions.cpp
```

And voila! Your program knows the function definitions.

Example code can be found in the [Multi-File Programs](https://github.com/keldavis/c-plus-plus-practice/tree/master/foundations/8.%20Functions/Multi-File%20Programs) folder.

## Header Files

If your program keeps growing, you may have to scroll through many declarations before you see ```main()```. That doesn’t seem like the best way to do things. Plus you don’t want to keep declaring the same functions over and over for different files — making changes would be incredibly tiresome!

Well, you can take those function declarations and move them all over to a *header file*, another file — usually with the same name as the file with all of the function definitions — with the extension **.hpp** or **.h**. For example, if your function definitions are in **my_functions.cpp**, the corresponding header file would be **my_functions.hpp** or **my_functions.h**.

So how do you bring everything from a header file into scope for another file? Do you just link the header in the compilation statement like you did with the second **.cpp** file?

As it turns out, with headers, you can just add ```#include "my_functions.hpp"``` to the very top of **main.cpp**:

```
#include "my_functions.hpp"
```

Boom! This line pastes in everything from **my_functions.hpp**. Now you have access to all of the function declarations you stowed away in your header.

Example code can be found in the [Header Files](https://github.com/keldavis/c-plus-plus-practice/tree/master/foundations/8.%20Functions/Header%20Files) folder.

## Inline Functions

Once you set foot in the wild of C++ development, you may encounter the term “inline functions” with a couple different meanings. An *inline function* is a function definition, usually in a header file, qualified by ```inline``` like this:

```
inline 
void eat() {

  std::cout << "nom nom\n";

}
```

Using ```inline``` advises the compiler to insert the function’s body where the function call is, which sometimes helps with execution speed (and sometimes hinders execution speed). If you do use it, we recommend testing how it affects the execution speed of your program. The bottom line is ```inline``` is something you’ll probably encounter, but may never use.

However, you will sometimes also hear about “inline functions” that are just member functions (i.e. functions inside of classes) which have been defined and declared in a single line in a header file because the function body is so short:

```
// cookie_functions.hpp

// eat() belongs to the Cookie class:
void Cookie::eat() {std::cout << "nom nom\n";} 
```

Please note that you should ALWAYS add the ```inline``` keyword if you are inlining functions in a header (unless you are dealing with member functions, which are automatically inlined for you).

Example code can be found in the [Inline Functions](https://github.com/keldavis/c-plus-plus-practice/tree/master/foundations/8.%20Functions/Inline%20Functions) folder.

## Default Arguments

If you add a parameter to a function in C++, then an argument will be required when you call the function. What does “required” mean here? Well, you’ll get an error. But what if 9 times out of 10, you know you’ll use the same input value? It would be really annoying to have to enter the same value over and over again.

To make your code more flexible for situations like this, you can add *default arguments* to your function declarations. Default arguments are values assigned to parameters when the function is declared and defined:

```
// Declaration
void intro(std::string name, std::string lang = "C++");

// Definition
void intro(std::string name, std::string lang) {
  std::cout << "Hi, my name is "
            << name
            << " and I'm learning "
            << lang
            << ".\n";
}
```

Then, if you leave the argument blank in your function call, instead of an error, your function will run with the default value. Meanwhile, if you DO have an argument to add when you call the function, that argument will replace the default argument when your code executes.

Either of these will work for the function we defined:

```
intro("Mariel")
// "Hi, my name is Mariel and I'm learning C++."
```

```
intro("Mariel", "Python")
// "Hi, my name is Mariel and I'm learning Python."
```

**Important**: Your computer cannot read your mind; it determines which argument corresponds with which parameter based on order.

Parameters without default arguments come first. This will work for ```add_nums(3);``` because the computer knows ```3``` corresponds to ```num1```:

```
int add_nums(int num1, int num2 = 0);
```

But the following does NOT work for ```add_num(3);``` the computer assumes that ```3``` still corresponds to ```num1```:

```
int add_nums(int num1 = 0, int num2);
```

Similarly, when a function has two default arguments, you still need to call with both arguments — if BOTH of the following are true:

- The first argument IS the default value.
- The second argument is NOT the default value.

Example code can be found in the [Default Arguments](https://github.com/keldavis/c-plus-plus-practice/tree/master/foundations/8.%20Functions/Default%20Arguments) folder