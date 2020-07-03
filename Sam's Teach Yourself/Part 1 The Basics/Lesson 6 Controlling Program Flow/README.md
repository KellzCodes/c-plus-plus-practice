# Lesson 6 Controlling Program Flow
- [Conditional Execution Using if...else](Conditional-Execution-Using-if-else)
- [Getting Code to Execute in Loops](#Getting-Code-to-Execute-in-Loops)
- [Modifying Loop Behavior Using continue and break](#Modifying-Loop-Behavior-Using-continue-and-break)
- [Programming Nested Loops](#Programming-Nested-Loops)

Most applications behave differently given a new situation or different user input. To enable your application to react differently, you need to program conditional statements that execute different code segments in different situations. 

In this lesson, you find out	 
- How to make your program behave differently in certain conditions
- How to execute a section of code repeatedly in a loop    
- How to better control the flow of execution in a loop 

## Conditional Execution Using if else

Programs you have seen and composed thus far have a serial order of execution  —from top-down. Every line was executed and no line was ever ignored. But, serial execution all lines of code in a top-down fashion rarely happens in most applications. 

Imagine you want a program that multiplies two numbers if the user presses m or adds the numbers if he presses anything else.

As you can see in Figure 6.1, not all code paths are executed in every run. If the user presses *m*, the code that multiplies the two numbers is executed. If he enters anything other than *m*, the code that performs addition is executed. There is never a situation where both are executed.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Figure6.1.jpg" alt="figure1" width="500"/>

### Conditional Programming Using ```if``` ... ```else```

Conditional execution of code is implemented in C++ using the ```if...else``` construct that looks like this:

```
if (conditional expression)
	Do something when expression evaluates true;
else // optional
	Do something wlse when condition evaluates false;
```

So, an ```if else``` construct that lets a program multiply if the user enters *m* and adds otherwise looks like this:

```
if (userSelection == 'm')
	result = num1 * num2; // multiply
else
	result = num1 + num2; // add
```

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Notepg115.jpg" alt="Notepg115" width="500"/>

Let's analyze this construct in Listing 6.1 (and [MultiplyOrAdd.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%206%20Controlling%20Program%20Flow/MultiplyOrAdd.cpp)), which enables the user to decide whether he wants to either multiply or divide two numbers, hence using conditional processing to generate the desired output. 

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Listing6.1pg115.jpg" alt="listing1pg115" width="500"/>
<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Listing6.1pg116.jpg" alt="listing1pg116" width="500"/>

### Executing Multiple Statements Conditionally

### Nested ```if``` Statements

### Conditional Processing Using ```switch-case```

### Conditional Execution Using Operator (```?:```)

## Getting Code to Execute in Loops

### A Rudimentary Loop Using ```goto```

### The ```while``` Loop

### The ```do...while``` Loop

### The ```for``` Loop

### The Range-Based ```for``` Loop

## Modifying Loop Behavior Using continue and break

### Loops that don't end -That Is, Infinite Loops

### Controlling Infinite Loops

## Programming Nested Loops

### Using Nested Loops to Walk a Multidimensional Array

### Using Nested Loops to Calculate Fibonacci Numbers