# Foundations
## Basics of C++
Here is a quick run down of the lessons found in the foundations folder.

## Table of Contents
- [Introduction](#Introduction)
- [Conditionals and Logic](#Conditionals-and-Logic)

## Introduction
- [Hello World](#Hello-World)
- [Variables](#Variables)

### Hello World

#### New Line

The escape sequence ```\n``` (backward slash and the letter n) generates a new line in a text string.
```
std::cout << "Hello\n";
std::cout << "Hello again\n";
```

#### Program Structure

The program runs line by line, from top to bottom:
- The first line instructs the compiler to locate the file that contains a library called ```iostream```. This library contains code that allows for input and output.
- The ```main()``` function houses all the instructions for the program.
```
#include <iostream>

int main() {

  std::cout << "1\n";
  std::cout << "2\n";
  std::cout << "3\n";

}
```

#### Basic Output

```std::cout``` is the “character output stream” and it is used to write to the standard output. It is followed by the symbols ```<<``` and the value to be displayed.

```
std::cout << "Hello World!\n"; 
```

#### Compile Command

Using GNU, the compilation command is ```g++``` followed by the file name. Here, the name of the source file is hello.cpp.

```
g++ hello.cpp
```

#### Execute Command

The execution command is ```./``` followed by the file name. Here, the name of the executable file is **a.out**

```
./a.out
```

#### Single-line Comments

Single-line comments are created using two consecutive forward slashes. The compiler ignores any text after ```//``` on the same line.

```
// This line will denote a comment in C++
```

#### Multi-line Comments

Multi-line comments are created using ```/*``` to begin the comment, and ```*/``` to end the comment. The compiler ignores any text in between.

```
/* 
This is all commented out.
None of it is going to run!
*/
```

### Variables

#### User Input 

```std::cin```, which stands for “character input”, reads user input from the keyboard.

Here, the user can enter a number, press ```enter```, and that number will get stored in ```tip```.

```
int tip = 0;

std::cout << "Enter amount: ";
std::cin >> tip;
```

#### Variables

A variable refers to a storage location in the computer’s memory that one can set aside to save, retrieve, and manipulate data.

```
// Declare a variable
int score;

// Initialize a variable
score = 0;
```

#### Arithmetic Operators

C++ supports different types of arithmetic operators that can perform common mathematical operations:
- ```+``` addition
- ```-``` subtraction
- ```*``` multiplication
- ```/``` division
- ```%``` modulo (yields the remainder)

```
int x = 0;

x = 4 + 2;  // x is now 6
x = 4 - 2;  // x is now 2
x = 4 * 2;  // x is now 8
x = 4 / 2;  // x is now 2
x = 4 % 2;  // x is now 0
```

#### Int

```int``` is a type for storing integer (whole) numbers. An integer typically requires 4 bytes of memory space and ranges from -2³¹ to 2³¹.

```
int year = 1991;
int age = 28;
```

#### Double

```double``` is a type for storing floating point (decimal) numbers. Double variables typically require 8 bytes of memory space.

```
double price = 8.99;
double pi = 3.14159;
```

#### Chaining the Output

```std::cout``` can output multiple values by chaining them using the output operator ```<<```.

Here, the output would be ```I'm 28```.

```
int age = 28;

std::cout << "I'm " << age << ".\n";
```

#### Char

```char``` is a type for storing individual characters. Characters are wrapped in single quotes ```'```. Characters typically require 1 byte of memory space and range from -128 to 127.

```
char grade = 'A';
char punctuation = '?';
```

#### String

```std::string``` is a type for storing text strings. Strings are wrapped in double quotes ```"```.

```
std::string message = "good nite";
std::string user = "@codecademy";
```

#### Bool

```bool``` is a type for storing ```true``` or ```false``` boolean values. Booleans typically require 1 byte of memory space.

```
bool organ_donor = true;
bool late_to_work = false;
```

## Conditionals & Logic

#### If Statement

An ```if``` statement is used to test an expression for truth.
- If the condition evaluates to ```true```, then the code within the block is executed; otherwise, it will be skipped.

```
if (a == 10) {
  // Code goes here
}
```

#### Else Clause

An ```else``` clause can be added to an ```if``` statement.
- If the condition evaluates to ```true```, code in the ```if``` part is executed.
- If the condition evaluates to ```false```, code in the ```else``` part is executed.

```
if (year == 1991) {
  // This runs if it is true
}
else {
  // This runs if it is false
}
```

#### Switch Statement

A ```switch``` statement provides a means of checking an expression against various ```case```s. If there is a match, the code within starts to execute. The ```break``` keyword can be used to terminate a case.

```default``` is executed when no case matches.

```
switch (grade) {
  case 9:
    std::cout << "Freshman\n";
    break;
  case 10:
    std::cout << "Sophomore\n";
    break;
  case 11:
    std::cout << "Junior\n";
    break;
  case 12:
    std::cout << "Senior\n";
    break;
  default:
    std::cout << "Invalid\n";
    break;
}
```

#### Relational Operators

Relational operators are used to compare two values and return ```true``` or ```false``` depending on the comparison:
- ```==``` equal to

- ```!=``` not equal to

- ```>``` greater than

- ```<``` less than

- ```>=``` greater than or equal to

- ```<=``` less than or equal to

```
if (a > 10) {
   // ☝️ means greater than
}
```

#### Else If Statement

One or more ```else if``` statements can be added in between the ```if``` and ```else``` to provide additional condition(s) to check.

```
if (apple > 8) {
  // Some code here
}
else if (apple > 6) {
  // Some code here
}
else {
  // Some code here
}
```

#### Logical Operators

Logical operators can be used to combine two different conditions.
- ```&&``` requires both to be true (```and```)
- ```||``` requires either to be true (```or```)
- ```!``` negates the result (```not```)

```
if (coffee > 0 && donut > 1) {
  // Code runs if both are true
}

if (coffee > 0 || donut > 1) {
  // Code runs if either is true
}

if (!tired) {
  // Code runs if tired is false
}
```