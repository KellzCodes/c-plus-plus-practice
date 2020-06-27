# Lesson 3: Using Variables, Declaring Constants

- [What is a Variable](#What-is-a-Variable)
- [Common Compiler Supported C++ Variable Types](#Common-Compiler-Supported-C-plus-plus-Variable-Types)
- [Determining the Size of a Variable Using sizeof](Determining-the-Size-of-a-Variable-Using-sizeof)
- [Automatic Type Inference Using auto](Automatic-Type-Inference-Using-auto)
- [Using typedef to Substitute a Variable's Type](#Using-typedef-to-Substitute-a-Variable-Type)
- [What Is a Constant](#What-Is-a-Constant?)
- [Keywords You Cannot Use as Variable or Constant Names](#Keywords-You-Cannot-Use-as-Variable-or-Constant-Names)

*Variables* are tools that help the programmer temporarily store data for a finite amount of time. *Constants* are tools that help the programmer define artifacts that are not allowed to change or make changes.

In this lesson, you find out:
- How to declare and define variables and constants 
- How to assign values to variables and manipulate those values
- How to write the value of a variable to the screen
- How to use keywords ```auto``` and ```constexpr``` 


## What is a Variable

Before you actually explore the need and use of variables in a programming language, take a step back and first see what a computer contains and how it works.

### Memory and Addressing in Brief

All computers, smart phones, and other programmable devices contain a microprocessor and a certain amount of memory for temporary storage called Random Access Memory (RAM). In addition, many devices also allow for data to be persisted on a storage device such as the hard disk. The microprocessor executes your application, and in doing so it works with the RAM to fetch the application binary code to be executed as well as the data associated with it, which includes that displayed on the screen and that entered by the user.

The RAM itself can be considered to be a storage area akin to a row of lockers in the dorms, each locker having a number—that is, an address. To access a location in memory, say location 578, the processor needs to be asked via an instruction to fetch a value from there or write a value to it.

### Declaring Variables to Access and Use Memory

The following examples will help you understand what variables are. Assume you are writing a program to multiply two numbers supplied by the user. The user is asked to feed the multiplicand and the multiplier into your program, one after the other, and you need to store each of them so that you can use them later to multiply. Depending what you want to be doing with the result of the multiplication, you might even want to store it for later use in your program. It would be slow and error-prone if you were to explicitly specify memory addresses (such as 578) to store the numbers, as you would need to  worry about inadvertently overwriting existing data at the location or your data being overwritten at a later stage.

When programming in languages like C++, you define variables to store those values. Defining a variable is quite simple and follows this pattern:

```VariableType VariableName;```

or

```VariableType VariableName = InitialValue;```

The variable type attribute tells the compiler the nature of data the variable can store, and the compiler reserves the necessary space for it. The name chosen by the programmer is a friendly replacement for the address in the memory where the variable's value is stored.
 
Unless the initial value is assigned, you cannot be sure of the contents of that memory  location, which can be bad for the program. Therefore, initialization is optional, but it's often a good programming practice. Listing 3.1 or [variables.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%203%20Using%20Variables%20Declaring%20Constants/variables.cpp) shows how variables are declared, initialized, and used in a program that multiplies two numbers supplied by the user.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/listing3.1.jpeg" alt="listing1" width="500"/>

#### Output
	> This program will help you multiply two numbers 
	> Enter the first number: 51 
	> Enter the second number: 24
	> 51 x 24 - 1224 

#### Analysis

This application asks the user to enter two numbers, which the program multiplies and  displays the result. To use numbers entered by the user, it needs to store them in the memory. Variables ```firstNumber``` and ```secondNumber``` declared in Lines 9 and 13 do the job of temporarily storing integer values entered by the user. You use ```std::cin``` in Lines 10 and 14 to accept input from the user and to store them in the two integer variables. The ```cout``` statement in Line 21 is used to display the result on the console.

Analyzing a variable declaration further: 

```int firstNumber = o;```

What this line declares is a variable of type ```int```, which indicates an integer, with a name called ```firstNumber```. Zero is assigned to the variable as an initial value.

The compiler does the job of mapping this variable ```firstNumber``` to a location in memory and takes care of the associated memory-address bookkeeping for you for all the variables that you declare. The programmer thus works with human-friendly names, while the compiler manages memory-addressing and creates the instructions for the microprocessor to execute in working with the RAM.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/cautionpg34.jpeg" alt="cautionpg34" width="500"/>

### Declaring and Initializing Multiple Variables of a Type

In Listing 3.1, ```firstNumber```, ```secondNumber```, and ```multiplicationResult``` are all of the same type—integers—and are declared in three separate lines. If you wanted to, you could condense the declaration of these three variables to one line of code that looks like this:

```int firstNumber = 0, secondNumber = 0, multiplicationResult = 0;```

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/notepg34.jpeg" alt="notepg34" width="500"/>

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/cautionpg35.jpeg" alt="cautionpg35" width="500"/>

### Understanding the Scope of a Variable

Ordinary variables like the ones we have declared this far have a well-defined scope within which they're valid and can be used. When used outside their scope, the variable names will not be recognized by the compiler and your program won't compile. Beyond its scope, a variable is an unidentified entity that the compiler knows nothing of. 

To better understand the scope of a variable, reorganize the program in Listing 3.1 into a function ```MultiplyNumbers()``` that multiplies the two numbers and returns the result. See Listing 3.2 or [scope.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%203%20Using%20Variables%20Declaring%20Constants/scope.cpp).

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/listing3.2.jpg" alt="listing2" width="500"/>

#### Output
	> This program will help you multiply two numbers 
	> Enter the first nunber: 51 
	> Enter the second number: 24  
	> 51 x 24 = 1224

#### Analysis

Listing 3.2 does exactly the same activity as Listing 3.1 and produces the same output. The only difference is that the bulk of the work is delegated to a function called ```MultiplyNumbers()``` invoked by ```main()```. Note that variables ```firstNumber``` and ```secondNumber``` cannot be used outside of ```MultiplyNumbers()```. If you uncomment Lines 28 or 29 in ```main()```, you experience compile failure of type ```undeclared identifier```.

This is because the scope of the variables ```firstNumber``` and ```secondNumber``` is local, hence limited to the function they're declared in, in this case ```MultiplyNumbers()```. A local variable can be used in a function after variable declaration till the end of the function. The curly brace (```}```) that indicates the end of a function also limits the scope of variables declared in the same. When a function ends, all local variables are destroyed and the memory they occupied returned.

When compiled, variables declared within ```MultiplyNumbers()``` perish when the function ends, and if they're used in ```main()```, compilation fails as the variables have not been declared in there.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/cautionpg36.jpeg" alt="cautionpg36" width="500"/>

### Global Variables

If the variables used in function ```MultiplyNumbers()``` in Listing 3.2 were declared outside the scope of the function ```MultiplyNumber()``` instead of within it, then they would be usable in both ```main()``` and ```MultiplyNumbers()```. Listing 3.3 or [global.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%203%20Using%20Variables%20Declaring%20Constants/global.cpp) demonstrates global variables, which are the variables with the widest scope in a program.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/listing3.3.jpeg" alt="listing3" width="500"/>

#### Output
	> This program will help you multiply two numbers 
	> Enter the first number: 51
	> Enter the second number: 19
	> Displaying from MultiplyNumbers(): 51 x 19 = 969
 	> Displaying from main ( ) : 51 x 19 - 969

#### Analysis

Listing 3.3 displays the result of multiplication in two functions, neither of which has declared the variables ```firstNumber```, ```secondNumber```, and ```multiplicationResu1t```. These variables are ```global``` as they have been declared in Lines 5—7, outside the scope of any function. Note Lines 23 and 36 that use these variables and display their values. Pay special attention to how ```multiplicationResu1t``` is first assigned in ```MultiplyNumbers()``` yet is effectively reused in ```main()```.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/cautionpg38.jpeg" alt="cautionpg38" width="500"/>

### Naming Conventions

In case you haven't noticed, we named the function ```MultiplyNumbers()``` where every word in the function name starts with a capital letter (called *Pascal casing*), while
variables ```firstNumber```, ```secondNumber```, and ```multiplicationResult``` were given names where the first word starts with a lowercase letter (called *camel casing*). This book follows a convention where variable names follow camel casing, while other artifacts such as function names follow Pascal casing.  

You may come across C++ code wherein a variable name is prefixed with characters that explain the type of the variable. This convention is called the *Hungarian notation* and is frequently used in the programming of Windows applications. So, ```firstNumber``` in Hungarian notation would be ```iFirstNumber```, where the prefix ```i``` stands for integer. A global integer would be called ```g_iFirstNumber```. Hungarian notation has lost popularity in recent years in part due to improvements in Integrated Development
Environments (IDES) that display the type of a variable when required—on mouse hover, for instance.
Examples of commonly found bad variable names follow:

```
int i  bool 
b = false;
```

The name of the variable should indicate its purpose, and the two can be better declared as:

```
int totalCash = 0;  
bool isLampOn - false; 
```

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/cautionpg39.jpeg" alt="cautionpg39" width="500"/>

## Common Compiler Supported C plus plus Variable Types

In most of the examples thus far, you have defined variables of type ```int``` —that is, integers. However, C++ programmers can choose from a variety of fundamental variable types supported directly by the compiler. Choosing the right variable type is as important as choosing the right tools for the job! A Phillips screwdriver won't work well with a regular screw head just like an unsigned integer can't be used to store values that are negative! Table 3.1 enlists the various variable types and the nature of data they can contain.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/table3.1.jpeg" alt="table1" width="500"/>

The following sections explain the important types in greater detail.

### Using Type ```bool``` to store Boolean Values

C++ provides a type that is specially created for containing Boolean values ```true``` or ```false```, both of which are reserved C++ keywords. This type is particularly useful in storing settings and flags that can be ON or OFF, present or absent, available or unavailable, and the like.

A sample declaration of an initialized Boolean variable is 

```bool alwaysOnTop = false;```

An expression that evaluates to a Boolean type is	 

```
bool deleteFile	(userSelection == "yes");
// evaluates to true if userSelection contains "yes", else to false
```

Conditional expressions are explained in Lesson 5, "Working with Expressions, Statements, and Operators."

### Using Type ```char``` to Store Character Values 

Use type ```char``` to store a single character. A sample declaration is  

```char userInput = 'Y'; // initialized char to 'Y'``` 
 
Note that memory is comprised of bits and bytes. Bits can be either 0 or 1, and bytes can contain numeric representation using these bits. So, working or assigning character data as shown in the example, the compiler converts the character into a numeric representation that can be placed into memory. The numeric representation of Latin characters A—Z, a—z, numbers 0—9, some special keystrokes (for example, DEL), and special characters (such as backspace) has been standardized by the American Standard Code for Information Interchange, also called ASCII.

You can look up the table in Appendix D, "ASCII Codes," to see that the character Y assigned to variable userlnput has the ASCII value 89 in decimal. Thus, what the compiler does is store 89 in the memory space allocated for ```userInput```. 

### The Concept of Signed and Unsigned Integers 

*Sign* implies positive or negative. All numbers you work with using a computer are stored in the memory in the form of bits and bytes. A memory location that is 1 byte large con tains 8 bits. Each bit can either be a 0 or 1 (that is, carry one of these two values at best).  Thus, a memory location that is 1 byte large can contain a maximum of 2 to the power 8  values—that is, 256 unique values. Similarly, a memory location that is 16 bits large can  contain 2 to the power 16 values—that is, 65,536 unique values.
 
If these values were to be unsigned—assumed to be only positive—then one byte could  contain integer values ranging from 0 through 255 and two bytes would contain val ues ranging from 0 through 65,535, respectively. Look at Table 3.1 and note that the  unsigned short is the type that supports this range, as it is contained in 16 bits of memory. Thus, it is quite easy to model positive values in bits and bytes (see Figure 3.1).

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/figure3.1.jpeg" alt="figure1" width="500"/>

How to model negative numbers in this space? One way is to "sacrifice" a bit as the sign-bit that would indicate if the values contained in the other bits are positive or negative (see Figure 3.2). The sign-bit needs to be the most-significant-bit (MSB) as the least-significant-one would be required to model odd numbers. So, when the MSB contains sign-information, it is assumed that 0 would be positive and 1 would mean tive, and the other bytes contain the absolute value.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/figure3.2.jpeg" alt="figure2" width="500"/>

Thus, a signed number that occupies 8 bits can contain values ranging from —128 through 127, and one that occupies 16 bits can contain values ranging from —32,768 through 32,767. If you look at Table 3.1 again, note that the (```signed```) ```short``` is the type that supports positive and negative integer values in a 16-bit space.

### Signed Integer Types ```short```, ```int```, ```long```, and ```long long```

These types differ in their sizes and thereby differ in the range of values they can contain. ```int``` is possibly the most used type and is 32 bits wide on most compilers. Use the right type depending on your projection of the maximum value that particular variable would be expected to hold.

Declaring a variable of a signed type is simple: 

```
short int gradesInMath - -5; // not your best score 
int moneylnBank = -70000; // overdraft 
long populationChange = -85000; // reducing population 
long long countryGDPChange = -70000000000;
```

### Unsigned Integer Types ```unsigned short```, ```unsigned int```, ```unsigned long```, and ```unsigned long long```

Unlike their signed counterparts, unsigned integer variable types cannot contain sign information, and hence they can actually support twice as many positive values.
 
Declaring a variable of an unsigned type is as simple as this: 

```
unsigned short int numC010rsInRainbow = 7; 
unsigned int numEggsInBasket — 24; // will always be positive 
unsigned long numCars InNewYork = 700000;  
unsigned long long countryMedicareExpense - 70000000000;
```

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/notecautionpg43.jpeg" alt="notecautionpg43" width="500"/>

### Avoid Overflow Errors by Selecting Correct Data Types 

Data types such as ```short```, ```int```, ```long```, ```unsigned short```, ```unsigned int```, ```unsigned long```, and the like have a finite capacity for containing numbers. When you exceed the  limit imposed by the type chosen in an arithmetic operation, you create an overflow.

Take ```unsigned short``` for an example. Data type short consumes 16 bits and can hence contain values from 0 through 65,535. When you add 1 to 65,535 in an ```unsigned short```, the value overflows to 0. It's like the odometer of a car that suffers a mechanical overflow when it can support only five digits and the car has done 99,999 kilometers (or miles).  

In this case, ```unsigned short``` was never the right type for such a counter. The  programmer was better off using ```unsigned int``` to support numbers higher than 65,535. 
 
In the case of a ```signed short``` integer, which has a range of —32,768 through 32,767, adding 1 to 32,767 may result in the signed integer taking the highest negative value. This behavior is compiler dependent.

Listing 3.4 or [overflow.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%203%20Using%20Variables%20Declaring%20Constants/overflow.cpp) demonstrates the overflow errors that you can inadvertently introduce via arithmetic operations.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/listing3.4.jpeg" alt="listing4" width="500"/>

#### Output

```
Incrementing unsigned short 65535 gives: 0 
Incrementing signed short 32767 gives: -32768
```

#### Analysis

The output indicates that unintentional overflow situations result in unpredictable and unintuitive behavior for the application. Lines 7 and 11 increment an ```unsigned short``` and a ```signed short``` that have previously been initialized to their maximum supported values —65,535 and 32,767, respectively. The output demonstrates the value they hold after the increment operation, namely an overflow of 65,535 to zero in the ```unsigned short``` and an overflow of 32,767 to —32,768 in the ```signed short```. One wouldn't expect the result of an increment operation to reduce the value in question, but that is exactly what happens when an integer type overflows. If you were using the values in question to allocate memory, then with the ```unsigned short```, you can reach a point where you request zero bytes when your actual need is 65536 bytes.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/note1pg45.jpeg" alt="note1pg45" width="500"/>

### Floating-Point Types ```float``` and ```double```

Floating-point numbers are what you might have learned in school as real numbers. These are numbers that can be positive or negative. They can contain decimal values. So, if you want to store the value of pi (22 / 7 or 3.14) in a variable in C++, you would use a floating-point type.

Declaring variables of these types follows exactly the same pattern as the ```int``` in Listing 3.1. So, a ```float``` that allows you to store decimal values would be declared as the following:

```float pi = 3.14;```

And a double precision ```float``` (called simply a double) is defined as 

```double morePrecisePi 22.0 / 7;```

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/tipnotepg45.jpeg" alt="note1pg45" width="500"/>

## Determining the Size of a Variable Using ```sizeof```

Size is the amount of memory that the compiler reserves when the programmer declares a variable to hold the data assigned to it. The size of a variable depends on its type, and C++ has a very convenient operator called sizeof that tells you the size in bytes of a variable or a type.

The usage of sizeof is simple. To determine the size of an integer, you invoke Size of with parameter int (the type) as demonstrated by Listing 3.5 or [sizeOf.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%203%20Using%20Variables%20Declaring%20Constants/sizeOf.cpp).

```cout << "Size of an int : sizeof (int);```

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/listing3.5.jpeg" alt="listing5" width="500"/>

#### Output 
	> Computing the size of some C++ inbuilt variable types
	> Size of bool: 1
	> Size of char: 1
	> Size of unsigned short int: 2
	> Size of short int: 2  	 	 	 
	> Size of unsigned long int: 4
	> Size of long: 4	 
	> Size of int: 4
	> Size of unsigned long long: 8
	> Size of long long: 8	 	 
	> Size of unsigned int: 4
	> Size of float: 4	 
	> Size of double: 8
	> The output changes with compiler, hardware and OS

#### Analysis

The output of Listing 3.5 reveals sizes of various types in bytes and is specific to my  platform: compiler, OS, and hardware. This output in particular is a result of running the program in 32-bit mode (compiled by a 32-bit compiler) on a 64-bit operating system.  Note that a 64-bit compiler probably creates different results, and the reason the book author chose a 32-bit compiler was to be able to run the application on 32-bit as well as 64-bit systems.  The output tells that the ```sizeof``` a variable doesn't change between an unsigned or signed  type; the only difference in the two is the MSB that carries sign information in the former.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/notetippg47.jpeg" alt="notetippg47" width="500"/>

### Avoid Narrowing Conversion Errors by Using List Initialization

When you initialize a variable of a smaller integer type (say, ```short```) using another of a larger type (say, an ```int```), you are risking a narrowing conversion error, because the compiler has to fit data stored in a type that can potentially hold much larger numbers into a type that doesn't have the same capacity (that is, is narrower). Here's an example:

```
int largeNum = 5000000; 
short smallNum = largeNum; // compiles OK, yet narrowing error
```

Narrowing isn't restricted to conversions between integer types only. You may face narrowing errors if you initialize a ```float``` using a ```double```, a ```float``` (or ```double```) using an ```int```, or an ```int``` using a ```float```. Some compilers may warn, but this warning will not cause an error that stops compilation. In such cases, you may be confronted by bugs that occur infrequently and at execution time.

To avoid this problem, C++ll recommends *list initialization* techniques that prevent narrowing. To use this feature, insert initialization values/variables within braces ```{ }```  The list initialization syntax is as follows: 

```
int largeNum = 5000000 ; 
short anotherNum{ largeNum } ; // error! Amend types  
int anotherNum{ largeNum } ; // 0K! 
float someF10at{ largeNum } ; // error! An int may be narrowed 
float someF10at{ 5000000 } ; // OK! 5000000 can be accomodated
```

It may not be immediately apparent, but this feature has the potential to spare bugs that occur when data stored in a type undergoes a narrowing conversion at execution time— these occur implicitly during an initialization and are tough to solve.


## Automatic Type Inference Using ```auto```

There are cases where the type of a variable is apparent given the initialization value being assigned to it. For example, if a variable is being initialized with the value t rue ' the type of the variable can be best estimated as bool. Compilers supporting C++ll and beyond give you the option of not having to explicitly specify the variable type when using the keyword auto.	 
auto coinF1ippedHeads = true;
 
We have left the task of defining an exact type for variable coinF1ippedHeads to the compiler. The compiler checks the nature of the value the variable is being initialized to and then decides on the best possible type that suits this variable. In this particular case, it is clear that an initialization value of true best suits a variable that is of type ```bool```. The compiler thus determines ```bool``` as the type that suits variable ```coinF1ippedHeads``` best and internally treats ```coinF1ippedHeads``` as a ```bool```, as also demonstrated by Listing 3.6 or [auto_keyword.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%203%20Using%20Variables%20Declaring%20Constants/auto_keyword.cpp).

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/listing3.6.jpeg" alt="listing6" width="500"/>

#### Output
	> coinFlippedHeads = 1, sizeof(coinFlippedHeads) = 1
	> largeNumber = 2500000000000 , sizeof(largeNumber) = 8

#### Analysis

See how instead of deciding that ```coinFlippedHeads``` should be of type ```bool``` or that ```largeNumber``` should be a ```long long```, you have used the ```auto``` keyword in Lines 6 and 7 where the two variables have been declared. This delegates the decision on the type of variable to the compiler, which uses the initialization value as a ballpark. You  have used ```sizeof``` to actually check whether the compiler created the types you suspected it would, and you can check against the output produced by your code to verify that it really did.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/note1pg50.jpeg" alt="note1pg50" width="500"/>

Even if auto seems to be a trivial feature at first sight, it makes programming a lot easier in those cases where the type variable is a complex type. The role of ```auto``` in writing simpler, yet type-safe code is revisited in Lesson 15, "An Introduction to the Standard Template Library," and beyond.

## Using ```typedef``` to Substitute a Variable Type

C++ allows you to substitute variable types to something that you might find convenient. You use the keyword ```typedef``` for that. Here is an example where a programmer wants to call an ```unsigned int``` a descriptive ```STRICTLY POSITIVE INTEGER```.

```
typedef unsigned int STRICTLY POSITIVE INTEGER; 
STRICTLY POSITIVE INTEGER numEggs1nBasket = 4532;
```

When compiled, the first line tells the compiler that a ```STRICTLY POSITIVE INTEGER``` is nothing but an ```unsigned int```. At later stages when the compiler encounters the already defined type ```STRICTLY_POSITIVE_INTEGER```, it substitutes it for ```unsigned int``` and continues compilation.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/note2pg50.jpeg" alt="note2pg50" width="500"/>

## What Is a Constant?

Imagine you are writing a program to calculate the area and the circumference Of a circle. The formulas are

```
Area = pi * Radius * Radius;
Circumference = 2 * pi * Radius;
```

In this formula, ```pi``` is the constant of value 22 / 7. You don't want the value of ```pi``` to change anywhere in your program. You also want to avoid any accidental assignments of possibly incorrect values to ```pi```. C++ enables you to define ```pi``` as a constant that cannot be changed after declaration. In other words, after it's defined, the value of a constant cannot be altered. Assignments to a constant in C++ cause compilation errors.
 
Thus, constants are like variables in C++ except that these cannot be changed. Similar to variables, constants also occupy space in the memory and have a name to identify the address where the space is reserved. However, the content of this space cannot be overwritten. Constants in C++ can be:
- Literal constants
- Declared constants using the const keyword 
- Constant expressions using the constexpr keyword (new since C++11)
- Enumerated constants using the enum keyword 
- Defined constants that are not recommended and deprecated

### Literal Constants 

Literal constants can be of many types—integer, string, and so on. In your first C++  program in Listing 1.1, you displayed "Hello World" using the following statement:

```std: : cout << "Hello World" << std: : endl;```

In here, "Hello World" is a string literal constant. You literally have been using literal constants all the while! When you declare an integer someNumber, like this: 

```int someNumber = 10;```

The integer variable ```someNumber``` is assigned an initial value of ten. Here decimal ten  is a part of the code, gets compiled into the application, is unchangeable, and is a literal constant too. You may initialize the integer using a literal in octal notation, like this: 
 
```int someNumber	012 // octal 12 evaluates to decimal 10```

Starting in C++14, you may also use binary literals, like this: 
 
```int someNumber — Ob1010; // binary 1010 evaluates to decimal 10```

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/tippg52.jpeg" alt="tippg52" width="500"/>

### Declaring Variables as Constants Using ```const```

The most important type of constants in C++ from a practical and programmatic point of view are declared by using keyword ```const``` before the variable type. The generic declaration looks like the following:

```const type-name constant-name = value;```

Let's see a simple application that displays the value of a constant called ```pi``` (see Listing 3.7 or [constant.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%203%20Using%20Variables%20Declaring%20Constants/constant.cpp)).

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/listing3.7.jpeg" alt="listing7" width="500"/>

#### Output
	> The value of constant pi is: 3.14286

#### Analysis

Note the declaration of constant ```pi``` in Line 7. We use the ```const``` keyword to tell the compiler that ```pi``` is a constant of type ```double```. If you uncomment Line 11 where the
programmer tries to assign a value to a variable you have defined as a constant, you see a compile failure that says something similar to, "You cannot assign to a variable that is const." Thus, constants are a powerful way to ensure that certain data cannot be modified.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/notepg53.jpeg" alt="notepg53" width="500"/>

Constants are useful when declaring the length of static arrays, which are fixed at compile time. Listing 4.2 in Lesson 4, "Managing Arrays and Strings," includes a sample that demonstrates the use of a ```const int``` to define the length of an array.

### Constant Expressions Using ```constexpr```

Keyword ```constexpr``` allows function-like declaration of constants:

```constexpr double GetPi() {return 22.0 / 7;}```

One ```constexpr``` can use another:
 
```constexpr double TwicePi() {return 2 * GetPi ( ) ; }```

```constexpr``` may look like a function, however, allows for optimization possibilities from the compiler's and application's point of view. So long as a compiler is capable of evaluating a constant expression to a constant, it can be used in statements and expressions at places where a constant is expected. In the preceding example, ```TwicePi()``` is a ```constexpr``` that uses a constant expression ```GetPi()```. This will possibly trigger a compile-time optimization wherein every usage of ```TwicePi()``` is simply replaced by 6.28571 by the compiler, and not the code that would calculate 2 x 22 / 7 when executed.

Listing 3.8 or [constant_expression.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%203%20Using%20Variables%20Declaring%20Constants/constant_expression.cpp) demonstrates the usage of ```constexpr```. 

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/listing3.8.jpg" alt="listing8" width="500"/>

#### Output
	> constant pi contains value 3.14286 
	> constexpr GetPi() returns value 3.14286 
	> constexpr TwicePi() returns value 6.28571

#### Analysis

The program demonstrates two methods of deriving the value of ```pi``` —one as a constant variable ```pi``` as declared in Line 8 and another as a constant expression ```GetPi()``` declared in Line 2. ```GetPi()``` and ```Twicepi()``` may look like functions, but they are not exactly. Functions are invoked at program execution time. But, these are constant expressions and the compiler had already substituted every usage of ```GetPi()``` by 3.14286 and every usage of ```Twicepi()``` by 6.28571. Compile-time resolution of ```Twicepi()``` increases the speed Of program execution when compared to the same calculation being contained in a function.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/notepg54.jpeg" alt="notepg54" width="500"/>

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/tippg55.jpeg" alt="tippg55" width="500"/>

### Enumerations

There are situations where a particular variable should be allowed to accept only a certain set of values. These are situations where you don't want the colors in the rainbow to contain Turquoise or the directions on a compass to contain Left. In both these cases, you need a type of variable whose values are restricted to a certain set defined by you. *Enumerations* are exactly the tool you need in this situation and are characterized by the keyword ```enum```. Enumerations comprise a set of constants called *enumerators*.
In the following example, the enumeration ```Rainbowcolors``` contains individual colors such as ```Violet``` as enumerators: 

```
enum RainbowColors{
	Violet = 0,
	Indigo,
	Blue,
	Green,
	Yellow,  
	Orange,  
	Red	
};
```

Here's another enumeration for the cardinal directions:

```
enum CardinalDirections{
	North, 
	South,
	East,
 	West
};
 ```

Enumerations are used as user-defined types. Variables of this type can be assigned a range of values restricted to the enumerators contained in the enumeration. So, if defining a variable that contains the colors of a rainbow, you declare the variable like this:

```RainbowColors MyFavoriteColor = Blue; // Initial value```

In the preceding line of code, you declared an enumerated constant ```MyFavoritecolor``` of type ```Rainbowcolors```. This enumerated constant variable is restricted to contain any of the legal ```VIBGYOR``` colors and no other value.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/notepg56.jpeg" alt="notepg56" width="500"/>

Listing 3.9 or [enumerated.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%203%20Using%20Variables%20Declaring%20Constants/enumerated.cpp) demonstrates how enumerated constants are used to hold the four cardinal directions, with an initializing value supplied to the first one.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/listing3.9.jpeg" alt="listing9" width="500"/>

#### Output
	> Displaying directions and their symbolic values
	> North: 25 
	> South: 26
	> East: 27
	> West: 28 
	> Variable windDirection = 26

#### Analysis

Note how we have enumerated the four cardinal directions but have given the first North an initial value of 25 (see Line 6). This automatically ensures that the following constants are assigned values 26, 27, and 28 by the compiler as demonstrated in the output. In Line 20 you create a variable of type ```CardinalDirections``` that is assigned an initial value ```South```. When displayed on the screen in Line 21, the compiler dispatches the integer value associated with South, which is 26.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/tippg57.jpeg" alt="tippg57" width="500"/>

### Defining Constants Using ```#define```

First and foremost, don't use this if you are writing a program anew. The only reason this book analyzes the definition of constants using ```#define``` is to help you understand certain legacy programs that do define constants such as pi using this syntax:

```#define pi 3.14286```
 
```#define``` is a preprocessor macro, and what is done here is that all mentions of ```pi``` henceforth are replaced by ```3.14286``` for the compiler to process. Note that this is a text replacement (read: non-intelligent replacement) done by the preprocessor. The compiler neither knows nor cares about the actual type of the constant in question.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/cautionpg57.jpeg" alt="cautionpg57" width="500"/>

## Keywords You Cannot Use as Variable or Constant Names

Some words are reserved by C++, and you cannot use them as variable names. These keywords have special meaning to the C++ compiler. Keywords include ```if```, ```while```, ```for```, and ```main```. A list of keywords defined by C++ is presented in Table 3.2. Your compiler might have additional reserved words, so you should check its manual for a complete list.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/table3.2.jpeg" alt="table2" width="500"/>

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/dodontpg59.jpeg" alt="dodontpg59" width="500"/>

## Summary

In this lesson you learned about using memory to store values temporarily in variables and constants. You learned that variables have a size determined by their type and that the operator ```sizeof``` can be used to determine the size of one. You got to know of different types of variables such as ```bool```, ```int```, and so on and that they are to be used to contain different types of data. The right choice of a variable type is important in effective programming, and the choice of a variable that's too small for the purpose can result in a wrapping error or an overflow situation. You learned about the keyword ```auto```, where you let the compiler decide the data-type for you on the basis of the initialization value of the variable.

You also learned about the different types of constants and usage of the most important ones among them using the keywords ```const```, ```constexpr```, and ```enum```.

## Q&A

**Q Why define constants at all if you can use regular variables instead of them?**

**A** Constants, especially those declared using the keyword const, are your way of telling the compiler that the value of a particular variable be fixed and not allowed to change. Consequently, the compiler always ensures that the constant variable is never assigned another value, not even if another programmer was to take up your work and inadvertently try to overwrite the value. So, declaring constants where you know the value of a variable should not change is a good programming practice  and increases the quality of your application.

**Q Why should I initialize the value of a variable?**

**A** If you don't initialize, you don't know what the variable contains for a starting value. The starting value is just the contents of the location in the memory that are reserved for the variable. Initialization such as that seen here:

```int myFavoriteNumber = 0;```

writes the initial value of your choosing, in this case 0, to the memory location reserved for the variable ```myFavoriteNumber``` as soon as it is created. There are situations where you do conditional processing depending on the value of a variable (often checked against nonzero). Such logic does not work reliably without initialization because an unassigned or initiated variable contains junk that is often nonzero and random.

**Q Why does C++ give me the option of using ```short int``` and ```int``` and ```long int```? Why not just always use the integer that always allows for the highest number to be stored within?**

**A** C++ is a programming language that is used to program for a variety of applications, many running on devices with little computing capacity or memory  resources. The simple old cell phone is one example where processing capacity and available memory are both limited. In this case, the programmer can often save memory or speed or both by choosing the right kind of variable if he doesn't need high values. If you are programming on a regular desktop or a high-end smart phone, chances are that the performance gained or memory saved in choosing one integer type over another is going to be insignificant and in some cases even absent.

**Q Why should I not use global variables frequently? Isn't it true that they're usable throughout my application and I can save some time otherwise lost to passing values around functions?**

**A** Global variables can be read and assigned globally. The latter is the problem as they can be changed globally. Assume you are working on a project with a few other programmers in a team. You have declared your integers and other variables to be global. If any programmer in your team changes the value of your integer inadvertently in his code—which even might be a different .CPP file than the one you are using—the reliability of your code is affected. So, sparing a few seconds or minutes should not be criteria, and you should not use global variables indiscriminately to ensure the stability of your code.

**Q C++ is giving me the option of declaring unsigned integers that are supposed to contain only positive integer values and zero. What happens if I decrement a zero value contained in an unsigned int?**

**A** You see a wrapping effect. Decrementing an unsigned integer that contains 0 by 1 means that it wraps to the highest value it can hold! Check Table 3.1 —you see that an ```unsigned short``` can contain values from 0 to 65,535. So, declare an ```unsigned short``` and decrement it to see the unexpected: 

```
unsigned short myShortInt = 0; // Initial Value 
myShortInt = myShortInt - 1; // Decrement by 1  
std::cout << myShortInt << std: : endl; // Output: 65535!
```
 
Note that this is not a problem with the unsigned short, rather with your usage of the same. An unsigned integer (or short or long) is not to be used when negative values are within the specifications. If the contents of ```myShortInt``` are to be used to dynamically allocate those many number of bytes, a little bug that allows a zero value to be decremented would result in 64KB being allocated! Worse, if ```myShortInt``` were to be used as an index in accessing a location of memory, chances are high that your application would access an external location and would crash!

## Workshop

The Workshop provides quiz questions to help you solidify your understanding of the material covered and exercises to provide you with experience in using what you've learned. Try to answer the quiz and exercise questions before checking the answers, and be certain that you understand the answers before continuing to the next lesson.

1.	What is the difference between a signed and an unsigned integer?
2.	Why should you not use ```#define``` to declare a constant?
3.	Why would you initialize a variable?
4.	Consider the ```enum``` below. What is the value of Queen?

```enum YourCards {Ace, Jack, Queen, King};```

5.	What is wrong with this variable name?

```int Integer = 0;```

## Exercises

1. Modify ```enum YourCards``` in quiz question 4 to demonstrate that the value of ```Queen``` can be 45.
2. Write a program that demonstrates that the size of an unsigned integer and a normal integer are the same, and that both are smaller in size than a long integer.
3. Write a program to calculate the area and circumference of a circle where the radius is fed by the user.
4. In Exercise 3, if the area and circumference were to be stored in integers, how would the output be any different?
5. **BUGBUSTERS**: What is wrong in the following initialization:
	
	```auto Integer;```

Workshop solutions can be found in the [answers](https://github.com/keldavis/c-plus-plus-practice/tree/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%203%20Using%20Variables%20Declaring%20Constants/answers) folder.
