# Errors

On your programming journey, you are destined to encounter innumerable red errors. Some even say, that debugging is over 75% of the development time. But what makes a programmer successful isn’t avoiding errors, it’s knowing how to find the solution.

In C++, there are many different ways of classifying errors, but they can be boil down to four categories:

- **Compile-time errors:** Errors found by the compiler.
- **Link-time errors:** Errors found by the linker when it is trying to combine object files into an executable program.
- **Run-time errors:** Errors found by checks in a running program.
- **Logic errors:** Errors found by the programmer looking for the causes of erroneous results.

## Table of Contents
- [Compile Time Errors](#Compile-time-Errors)
- [Link Time Errors](#Link-Time_Errors)
- [Run Time Errors](#Run-Time-Errors)
- [Basic Programs](#Basic-Programs)


### Compile Time Errors

When we are writing C++ programs, the compiler is our first line of defense against errors.

There are two types of compile-time errors:

- **Syntax errors**: Errors that occur when we violate the rules of C++ syntax.
- **Type errors**: Errors that occur when there are mismatch between the types we declared.


Some common syntax errors are:

- Missing semicolon ```;```
- Missing closing parenthesis ```)```, square bracket ```]```, or curly brace ```}```


Some common type errors are:

- Forgetting to declare a variable
- Storing a value into the wrong type


Here’s an example of a compile-time error message:

![alt text](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/4.%20Errors/compile-time-error.png)

The compiler will tell us where (line number) it got into trouble and its best guess as to what is wrong.

### Link Time Errors

Sometimes the code compiles fine, but there is still a message because the program needs some function or library that it can’t find. This is known as a link-time error.

As our program gets bigger, it is good practice to divide the program into separate files. After compiling them, the linker takes those separate object files and combines them into a single executable file. Link-time errors are found by the *linker* when it is trying to combine object files into an executable file.

Some common link-time errors:

- Using a function that was never defined (more on this later)
- Writing ```Main()``` instead of ```main()```

Here’s an example of a link-time error message:

![alt text](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/4.%20Errors/link-time-error.png)

These errors are more hard to find, but remember, Google is your friend! Here, a good Google search would be: “C++ undefined reference to main”.

### Run Time Errors

If our program has no compile-time errors and no link-time errors, it’ll run. This is where the fun really starts.

Errors which happen during program execution (run-time) after successful compilation are called run-time errors. Run-time errors occur when a program with no compile-time errors and link-time errors asks the computer to do something that the computer is unable to reliably do.

It happens after we give the ```./``` execute command:

```./a.out```

Some common run-time errors:

- Division by zero also known as *division error*. These types of error are hard to find as the compiler doesn’t point to the line at which the error occurs.
- Trying to open a file that doesn’t exist

There is no way for the compiler to know about these kinds of errors when the program is compiled.

Here’s an example of a run-time error message:

![alt text](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/4.%20Errors/run-time-error.png)


# Basic Programs

- [Compile Error Demo](#Compile-Error_Demo)
- [Link Time Error Demo](#Link-Time-Error-Demo)
- [Run Time Error Demo](#Run-TIme-Error_Demo)


## Compile Error Demo

A compile error demo program.

1. Open the [millionaire.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/4.%20Errors/millionaire.cpp) file

2. Try compiling the code and find the compile-time error in millionaire.cpp.


## Link Time Error Demo

A link time error demo program.

1. Open the [sum.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/4.%20Errors/sum.cpp) file

2. Try compiling to find the link-time error in sum.cpp.


## Run Time Error Demo

A run time error demo program

1. Open the [ratio.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/4.%20Errors/ratio.cpp) file

2. There’s a run-time error in **ratio.cpp**. This program is supposed to find the ratio of a table’s dimensions, which is supposed to be 20 x 30

