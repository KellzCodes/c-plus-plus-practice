# LESSON 5 Working with Expressions, Statements, and Operators

- [Statements](#Statements)
- [Compound Statements or Blocks](#Compound-Statements-or-Blocks)
- [Using Operators](#Using-Operators)

At its heart, a program is a set of commands executed in sequence. These commands are programmed into expressions and statements and use operators to perform specific calculations or actions. 
In this lesson, you learn
- What statements are
- What blocks or compound statements are
- What operators are
- How to perform simple arithmetic and logical operations

## Statements

Languages —spoken or programmed —are composed of statements that are executed after another. Let's analyze the first important statement you learned:

```cout << "Hello World" << endl;```

A statement using ```cout``` displays text using the console on the screen. All statements in C++ end with a semicolon (;), which defines the boundary of a statement. This is similar to the period (.) you add when ending a sentence in English. The next statement can start immediately after the semicolon, but for convenience and readability you often program successive statements on successive lines. In other words, this is actually a set of two statements in a line:

```cout << "Hello World" << endl; cout << "Another hello" << endl;```

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Notepg86.jpg" alt="Notepg86" width="500"/>

The following would be invalid:

```
cout 	"Hello
	World" << endl; // new line in string literal not allowed
```
Such code typically results in an error indicating that the compiler is missing a closing quote (") and a statement-terminating semicolon (;) in the first line. If you need to spread a statement over two lines for some reason, you can do it by inserting a backslash (\) at the end:

```
cout << "Hello \
	World" << endl; // split to two lines is OK
```

Another way of writing the preceding statement in two lines is to write two string literals instead of just one:

```
cout << "Hello "
	"World" << endl; // two string literals is also OK
```

In the preceding example, the compiler notices two adjacent string literals and concatenates them for you.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Notepg87.jpg" alt="Notepg87" width="500"/>

## Compound Statements or Blocks

When you group statements together within braces { . . .}, you create a compound statement or a block.

```
{
	int daysInYear = 365;  
	cout << "Block contains an int and a cout statement" << endl;
}
```

A block typically groups many statements to indicate that they belong together. Blocks are particularly useful when programming conditional if statements or loops, which are explained in Lesson 6, "Controlling Program Flow." 

## Using Operators

Operators are tools that C++ provides for you to be able to work with data, transform it, process it, and possibly make decisions on the basis of it.

### The Assignment Operator (=)

The assignment operator is one that you already have been using intuitively in this repo:

```int daysInYear = 365;```

The preceding statement uses the assignment operator in initializing the integer to 365. The assignment operator replaces the value contained by the operand to the left (unimaginatively called l-value) by that on the right (called r-value).

### Understanding L-values and R-values

L-values often refer to locations in memory. A variable such as ```daysInYear``` from the preceding example is actually a handle to a memory location and is an l-value. R-values, on the other hand, can be the very content of a memory location.

So, all l-values can be r-values, but not all r-values can be l-values. To understand it better, look at the following example, which doesn't make any sense and therefore won't compile:

```365 = daysInYear;```

### Operators to Add (+), Subtract (-), Multiply (```*```), Divide (/), and Modulo Divide (%)

You can perform an arithmetic operation between two operands by using ```+``` for addition, ```-``` for subtraction, ```*``` for multiplication, ```/``` for division, and ```%``` for modulo operation:

```
int numl - 22; 
int num2 = 5; 
int addNums = numl + num2; // 27 
int subtractNums = numl — num2; // 17 
int multiplyNums = numl * num2; // 110 
int divideNums = numl / num2; // 4 
int moduloNums = numl % num2; // 2
```

Note that the division operator (```/```) returns the result of division between two operands. In the case of integers, however, the result contains no decimals as integers by definition cannot hold decimal data. The modulo operator (```%```) returns the remainder of a division operator, and it is applicable only on integer values. Listing 5.1 and [Arithmetic.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%205%20Working%20with%20Expressions%20Statements%20and%20Operators/Arithmetic.cpp) is a simple program that demonstrates an application to perform arithmetic functions on two numbers input by the user.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/listing5.1.jpg" alt="listing1" width="500"/>

#### Output 

```
Enter two integers:
365
25
365 + 25 = 390
365 - 25 = 340
365 * 25 = 9125
365 / 25 = 14
365 % 25 = 15
```

#### Analysis

Most of the program is self-explanatory. The line of most interest is possibly the one that uses the ```%``` modulo operator. This returns the remainder that is the result of dividing ```num1``` (365) by ```num2``` (25).

### Operators to Increment (++) and Decrement (--)

Sometimes you need to count in increments of one. This is particularly required in variables that control loops where the value of the variable needs to be incremented or decremented every time a loop has been executed.

C++ includes the ```++``` (increment) and ```--``` (decrement) operators to help you with this task.

The syntax for using these is the following:

```
int numl = 101;
int num2 = numl++;	// Postfix increment operator
int num2 = ++numl;	// Prefix increment operator
int num2 = numl--;	// Postfix decrement operator
int num2 = --numl;	// Prefix decrement operator
```

As the code sample indicates, there are two different ways of using the incrementing and decrementing operators: before and after the operand. Operators that are placed before the operand are called prefix increment or decrement operators, and those that are placed after are called postfix increment or decrement operators.

### To Postfix or to Prefix?

It's important to first understand the difference between prefix and postfix and then the one that works for you. The result of execution of the postfix operators is that the l-value is first assigned the r-value and after that assignment the r-value is incremented (or decremented). This means that in all cases where a postfix operator has been used, the value of ```num2``` is the old value of ```num1``` (the value before the increment or decrement operation).

Prefix operators have exactly the opposite in behavion The r-value is first incremented and then assigned to the l-value. In these cases, ```num2``` and ```numl``` carry the same value. Listing 5.2 and [PostFixPreFix.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%205%20Working%20with%20Expressions%20Statements%20and%20Operators/PostFixPreFix.cpp) demonstrates the effect of prefix and postfix increment and decrement operators on a sample integer.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Listing5.2.jpg" alt="listing2" width="500"/>

#### Output

```
Start value of integer being operated: 101
Result of Postfix Increment = 101
After Postfix Increment, startValue = 102
Result of Prefix Increment = 102
After Prefix Increment, startValue = 102
Result of PostFix Decrement = 101
After PostFix Decrement, startValue = 100
Result of Prefix Decrement = 100
After Prefix Decrement, startValue = 100
```

#### Analysis

The results show that the postfix operators were different from the prefix ones in that the l-values being assigned in Lines 8 and 18 contain the original values of the integer before the actual increment or decrement operations. The prefix operations in Lines 13 and 23, on the other hand, result in the l-value being assigned the incremented or decremented value. This is the most important difference that needs to be kept in perspective when choosing the right operator type.

Note that in the following statements, the prefix or postfix operators make no difference to the output of the program:

```
startValue++; // Is the same as... 
++startVa1ue ;
```

This is because there is no assignment of an initial value, and the end result in both cases is just that the integer ```startValue``` is incremented.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Notepg91.jpg" alt="Notepg91" width="500"/>

### Equality Operators (==) and (!=)

Often you need to check for a certain condition being fulfilled or not being fulfilled before you proceed to take an action. Equality operators ```==``` (operands are equal) and ```!=``` (operands are unequal) help you with exactly that.
 
The result of an equality check is a ```bool``` —that is, ```true``` or ```false```.

```
int personAge = 20;	20);
bool checkEquality = (personAge == 20); // true
bool checkInequality = (personAge != 100); // true

bool checkEqualityAgain = (personAge == 200); // false
bool checkInequalityAgain = (personAge != 20); // false
```

### Relational Operators

In addition to equality checks, you might want to check for inequality of a certain variable against a value. To assist you with that, C++ includes relational operators (see Table 5.1).

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Table5.1.jpg" alt="table1" width="500"/>

### Logical Operations NOT, AND, OR, and XOR

### Using C++ Logical Operators NOT (!), AND (&&), and OR (||)

### Bitwise NOT (```~```), AND (&), OR (|), and XOR (```^```) Operators

### Bitwise Right Shift (>>) and Left Shift (<<) Operators

### Compound Assignment Operators

### Using ```sizeof``` to Determine the Memory Occupied by a Variable

### Operator Precedence