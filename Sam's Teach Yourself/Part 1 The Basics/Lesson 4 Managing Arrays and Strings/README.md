# Lesson 4: Managing Arrays and Strings

- [What is an Array?](#What-is-an-Array)
- [Multidimensional Arrays](#Multidimensional-Arrays)
- [Dynamic Arrays](#Dynamic-Arrays)
- [C-style Character Strings](#C-style-Character-Strings)
- [C++ Strings: Using std::string](#C-plus-plus-Strings)

In previous lessons, you declared variables used to contain a single ```int```, ```char```, or ```string``` to mention a few instances. However, you may want to declare a collection of objects, such as 20 ```int```s or a string of characters to hold a name.
In this lesson, you learn
- What arrays are and how to declare and use them 
- What strings are and how to use character arrays to make them 
- A brief introduction to ```std::string```

## What is an Array

The dictionary definition of an *array* gets really close to what we want to be understanding, According to Merriam Webster, an *array* is "a group of elements forming a complete unit, for example an array of solar panels."

The following are characteristics of an array:	 
- An array is a collection of elements.
- All elements contained in an array are of the same kind.   
- This collection forms a complete set. 

In C++, arrays enable you to store data elements of a type in the memory, in a seqUential and ordered fashion.


### The Need for Arrays

Imagine that you are writing a program where the user can type in five integers and you display them back to him. One way would be to have your program declare five distinct and unique integer variables and use them to store and display values. The declarations would look like this:

```
int firstNumber = 0; 
int secondNumber = 0; 
int thirdNumber = 0; 
int fourthNumber = 0;	 
int fifthNumber = 0;
```
If your user wants this program to store and display 500 integers at a later stage, you  need to declare 500 such integers using the preceding system. This still is doable given generous amounts of patience and time. However, imagine the user asks you to support 500,000 integers instead of 5——what would you do?

You would do it right and do it smart from the point go by declaring an array Of five integers each initialized to zero, like this:

```
int myNumbers [5] = {0};
```
 
Thus, if you were asked to support 500,000 integers, your array would scale up quite

``` 
int manyNumbers [500000] = {0};
```
 
An array of five characters would be defined as 

```
char myCharacters [5];
```
 
Such arrays are called *static arrays* because the number of elements they contain as well as the memory the array consumes is fixed at the time of compilation.  

### Declaring and Initializing Static Arrays

### How Data Is Stored in an Array

### Accessing Data Stored in an Array

### Modifying Data Stored in an Array

## Multidimensional Arrays

### Declaring and Initializing Multidimensional Arrays

### Accessing Elements in a Multidimensional Array

## Dynamic Arrays

## C style Character Strings

## C plus plus Strings