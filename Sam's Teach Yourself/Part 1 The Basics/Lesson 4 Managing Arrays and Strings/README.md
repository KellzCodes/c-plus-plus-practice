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

In the preceding lines of code, you declared an array called ```myNumbers``` that contains five elements of type ```int``` —that is, integer—all initialized to a value 0. Thus, array declaration in C++ follows a simple syntax: 

```ElementType ArrayName [constant number of elements]	{optional initial values};```

You can even declare an array and initialize its contents on a per-element basis, like this  integer array where each of the five integers is initialized to five different integer values:
 
```int myNumbers [5] = {34, 56, -21, 5002, 365};```
 
You can have all elements in an array initialized to zero (the default supplied by the compiler to numerical types), like this: 

```int myNumbers [5] = 0; // initializes all integers to 0```
 
You can also partially initialize elements in an array, like this:

```
int myNumbers [5]	{34, 56} ;
// initialize first two elements to 34 and 56 and the rest to 0
```

You can define the length of an array (that is, the number of elements in one) as a constant and use that constant in your array definition:

```
const int ARRAY LENGTH = 5;	 
int myNumbers [ARRAY LENGTH] {34, 56, -21, 5002, 365};
```

This is particularly useful when you need to access and use the length of the array at multiple places, such as when iterating elements in one, and then instead of having to change the length at each of those places, you just correct the initialization value at the ```const int``` declaration.

You can opt to leave out the number of elements in an array if you know the initial values of the elements in the array:
 
```int myNumbers [] = {2016, 2052, -525}; // array of 3 elements```

The preceding code creates an array of three integers with the initial values 2016, 2052, and -525.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Notepg66.jpg" alt="Notepg66" width="500"/>

### How Data Is Stored in an Array

Think of books placed on a shelf, one next to the other. This is an example of a one-dimensional array, as it expands in only one dimension, that is the number of books on it. Each book is an element in the array, and the rack is akin to the memory that has been reserved to store this collection of books as shown in Figure 4.1.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Figure4.1.jpg" alt="figure1" width="500"/>

It is not an error that we started numbering the books with 0. As you later see, indexes in C++ start at 0 and not at 1. Similar to the five books on a shelf, the array ```myNumbers``` containing five integers looks similar to Figure 4.2.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Figure4.2.jpg" alt="figure2" width="500"/>

Note that the memory space occupied by the array is comprised of five blocks, each of equal size, that is defined by the type of data to be held in the array, in this case integer.
If you remember, you studied the size of an integer in Lesson 3, "Using Variables, Declaring Constants." The amount of memory reserved by the compiler for the array ```myNumbers``` is hence ```sizeof (int) * 5```. In general, the amount of memory reserved by the compiler for an array in bytes is

```
Bytes consumed by an array = sizeof (element-type) * Number of Elements
```

### Accessing Data Stored in an Array

Elements in an array can be accessed using their zero-based index. These indexes are called zero-based because the first element in an array is at index 0. So, the first integer value stored in the array ```myNumbers``` is ```myNumbers [0]```, the second is ```myNumbers [1]```, and so on. The fifth is ```myNumbers[4]```. In other words, the index of the last element in an array is always (Length of Array — 1).

When asked to access element at index N, the compiler uses the memory address of the first element (positioned at index zero) as the starting point and then skips N elements by adding the offset computed as ```N*sizeof (element)``` to reach the address containing the (N+l)th element. The C++ compiler does not check if the index is within the actual defined bounds of the array. You can try fetching the element at index 1001 in an array of only 10 elements, putting the security and stability of your program at risk. The onus of ensuring that the array is not accessed beyond its bounds lies solely on the programmer.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Cautionpg68.jpg" alt="Cautionpg68" width="500"/>

Listing 4.1 and [DeclareArray.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%204%20Managing%20Arrays%20and%20Strings/DeclareArray.cpp) demonstrates how you declare an array of integers, initialize its elements to integer values, and access them to display them on the screen.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Listing4.1.jpg" alt="listing1" width="500"/>

#### Output

```
First element at index 0: 34
Second element at index 1: 56
Third element at index 2: -21
Fourth element at index 3: 5002
Fifth element at index 4: 365
```

#### Analysis

Line 6 declares an array of five integers with initial values specified for each of them. The subsequent lines simply display the integers using ```cout``` and using the array variable ```myNumbers``` with an appropriate index.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Notepg69.jpg" alt="Notepg69" width="500"/>

### Modifying Data Stored in an Array

In the previous code listing, you did not enter user-defined data into the array. The syntax for assigning an integer to an element in that array is quite similar to assigning an integer value to an integer variable.

For example, assigning a value 2016 to an integer is like the following: 

```
int thisYear; 
thisYear = 2016;
```
Assigning a value 2016 to the fourth element in your array is like this:

```myNumbers[3] = 2016; // Assign 2016 to the fourth element```
 
Listing 4.2 and [AssignToArray.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%204%20Managing%20Arrays%20and%20Strings/AssignToArray.cpp) demonstrates the use of constants in declaring the length of an array and shows how individual array elements can be assigned values during the execution of the program.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Figure4.2.jpg" alt="figure2" width="500"/>

#### Output

```
Enter index of the element to be changed: 3
Enter new value: 101
Element 3 in array myNumbers is: 101
Element 3 in array moreNumbers is: 101
```

#### Analysis

Array length needs to be a constant integer. This can therefore also be specified in a constant ```ARRAY_LENGTH``` used in Line 9 or a constant expression ```Square ()``` used in Line 12. Thus, the array ```myNumbers``` is declared to be 5 elements in length, while the array ```moreNumbers``` to be 25. Lines 14—20 ask the user to enter the index in the array of the element he wants to modify and the new value to be stored at that index. Lines 22 and 23 demonstrate how to modify a specific element in an array given that index. Lines 26—29 demonstrate how to access elements in an array given an index. Note that modifying  the element at index 3 actually modifies the fourth element in the array, as indexes are zero-based entities. You have to get used to this.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Notepg70.jpg" alt="Notepg70" width="500"/>

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Cautionpg71.jpg" alt="Cautionpg71" width="500"/>

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Dodontpg71.jpg" alt="Dodontpg71" width="500"/>

## Multidimensional Arrays

The arrays that we have seen thus far have been akin to books on a shelf. There can be more books on a longer shelf and fewer books on a shorter one. That is, the length of the shelf is the only dimension defining the capacity of the shelf, hence it is one-dimensional. 

Now, what if we were to use arrays to model an array of solar panels as shown in Figure 4.3? Solar panels, unlike bookshelves, expand in two dimensions: in length and in breadth.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Figure4.3.jpg" alt="Figure3" width="500"/>

As you see in Figure 4.3, six solar panels are placed in a two-dimensional arrangement comprised of two rows and three columns. From one perspective, you can see this arrangement as an array of two elements, each element itself being an array of three panels —in other words, an array of arrays. In C++, you can model two-dimensional arrays, but you are not restricted to just two dimensions. Depending on your need and the nature of the application, you can model multidimensional arrays in memory, too.

### Declaring and Initializing Multidimensional Arrays

C++ enables you to declare multidimensional arrays by indicating the number of elements you want to reserve in each dimension. So, a two-dimensional array of integers representing the solar panels in Figure 4.3 is 

```
int solarPanels[2][3];
```

Note that in Figure 4.3, you have also assigned each panel an ID ranging from 0 through 5 for the six panels in the solar array. If you were to initialize the integer array in the same order, it would look like the following:

```
int solarPanels[2][3] = {{0, 1, 2}, {3, 4, 5}};
```
 
As you see, the initialization syntax used is actually similar to one where we initialize two one-dimensional arrays. An array comprising of three rows and three columns would look like this:

```
int threeRowsThreeColumns[3][3] = {{-501, 206, 2016}, {989, 101, 206}, {303, 456, 596}};
```

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Notepg73.jpg" alt="Notepg73" width="500"/>

### Accessing Elements in a Multidimensional Array

Think of a multidimensional array as an array comprising elements that are arrays. So, when dealing with a two-dimensional array comprising three rows and three  columns, each containing integers, visualize it as handling an array comprising three elements, where each element is an array comprising three integers.

When you need to access an integer in this array, you would need to use a first subscript to address the array where the integer is and the second subscript to address that integer in this array. Consider this array:

```
int threeRowsThreeColumns[3][3] = {{-501, 205, 2016} , {989, 101, 206} , {303, 456, 596}};
```

It has been initialized in a way you can visualize three arrays, each containing three integers. Here, the integer element with value ```205``` is at position ```[0][1]```. The element with value ```456``` is at position ```[2][1]```. Listing 4.3 and [MultidimensionalArray.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%204%20Managing%20Arrays%20and%20Strings/MultidimensionalArray.cpp) explains how integer elements in this array can be accessed.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/listing4.3.jpg" alt="listing3" width="500"/>

#### Output

```
Row 0: -501 205 2016
Row 1: 989 101 206
Row 2: 303 456 596
```

#### Analysis

Note how you have accessed elements in the array row-wise, starting with the array that is Row 0 (the first row, with index 0) and ending with the array that is Row 2 (third row, with index 2). As each of the rows is an array, the syntax for addressing the third element in the first row (row index 0, element index 2) is seen in Line 10.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Notepg74.jpg" alt="Notepg74" width="700"/>

## Dynamic Arrays

Consider an application that stores medical records for hospitals. There is no good way for the programmer to know what the upper limits of the number of records his application might need to handle are. He can make an assumption that is way more than the reasonable limit for a small hospital to err on the safe side. In those cases, he is reserving huge amounts of memory without reason and reducing the performance of the system.

The key is to not use static arrays like the ones we have seen thus far, rather to choose  dynamic arrays that optimize memory consumption and scale up depending on the demand for resources and memory at execution-time. C++ provides you with convenient and easy-to-use dynamic arrays in the form of ```std::vector``` as shown in Listing 4.4 and [DynamicArray.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%204%20Managing%20Arrays%20and%20Strings/DynamicArray.cpp).

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Listing4.4.jpg" alt="Listing4" width="500"/>

#### Output

```
Number of integers in array: 3
Enter another element to insert
2017
Number of integers in array: 4
Last element in array: 2017
```

#### Analysis

Don't worry about the syntax in Listing 4.4 as vector and templates have not been explained as yet. Try to observe the output and correlate it to the code. The initial size of the array according to the output is 3, consistent with the declaration of the array (```std::vector```) at Line 7. Knowing this, you still ask the user to enter a fourth number at Line 15, and, interestingly enough, you are able to insert this number into the back of the array using ```push_back()``` at Line 18. The ```vector``` dynamically resizes itself to accommodate more data. This can be then seen in the size of the array that increases to 4. Note the usage of the familiar static array syntax to access data in the vector. Line 22 accesses the last element (wherever that might be, given a position at runtime) using the zero-based index, where the last element is at index "```size() - 1```". ```size()``` being the function that returns the total number of elements (integers) contained in the vector.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Notepg76.jpg" alt="Notepg76" width="500"/>

## C style Character Strings

C-style strings are a special case of an array of characters. You have already seen some examples of C-style strings in the form of string literals that you have been writing into your code:

```
std: : cout << "Hello World"
```

This is equivalent to using the array declaration:

```
char sayHello[] = {'H','e','l','l','o',' ','W','o','r','l','d','\0'};
std: :cout << sayHello << std::endl;
```

Note that the last character in the array is a null character '\0'. This is also called the string-terminating character because it tells the compiler that the string has ended. Such c-style strings are a special case of character arrays in that the last character always precedes the null-terminator '\0'. When you embed a string literal in your code, the compiler does the job of adding a '\0' after it.

If you inserted '\0' anywhere in the middle of the array, it would not change the size of the array; it would only mean that string-processing using the array as input would stop at that point. Listing 4.5 and [NullTerminator.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%204%20Managing%20Arrays%20and%20Strings/NullTerminator.cpp) demonstrates this point.

#### Output

```
Hello World
Size of array: 12
Replacing space with null
Hello
Size of array: 12
```

#### Analysis

Line 10 is where we replace the space in "Hello World" by the null-terminating character. Note that the array now has two null-terminators, but it's the first one that results in the display of the string in Line 11 being truncated to just "Hello". ```sizeof()``` at Lines 7 and 12 indicates that the size of the array has not changed, even if the displayed data changed a lot.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Cautionpg78.jpg" alt="Cautionpg78" width="500"/>

C-style strings are fraught with danger. Listing 4.6 and [RiskyCStyle.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%204%20Managing%20Arrays%20and%20Strings/RiskyCStyle.cpp) demonstrates the risks involved in using one.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Listing4.6.jpg" alt="listing6" width="500"/>

#### Output

```
Enter a word NOT longer than 20 characters:
Don'tUseThisProgram
Length of your input was: 19
```

#### Analysis

The danger is visible in the output. The program is begging the user to not enter data longer than 20 characters. The reason it does so is that the character buffer declared in Line 7 meant to store user input has a fixed—static—length of 21 characters. As the last character in the string needs to be a null-terminator ```'\0'```, the maximum length of text stored by the buffer is limited to 20. Note the usage of ```strlen()``` in Line 10 to compute the length of the string. ```Strlen()``` walks the character buffer and counts the number of characters crossed until it reaches the null-terminator that indicates the end of the string. This null-terminator has been inserted by ```cin``` at the end of the user's input. This behavior of ```strlen``` makes it dangerous as it can easily walk past the bounds of the character array if the user has supplied text longer than the mentioned limit.  

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Cautionpg79.jpg" alt="Cautionpg79" width="500"/>

## C plus plus Strings
## C++ Strings: Using ```std::string``` 

C++ standard strings are an efficient and safer way to deal with text input —and to perform string manipulations like concatenations. ```std::string``` is not static in size like a char array implementation of a C-style string is and can scale up when more  data needs to be stored in it. Using ```std::string``` to manipulate string data is shown in Listing 4.7 and [StdString.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%204%20Managing%20Arrays%20and%20Strings/StdString.cpp).

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/listing4.7.jpg" alt="listing7" width="500"/>

#### Output

```
Hello std::string!
Enter a line of text:
I love
Enter another:
C++ strings
Result of concatenation:
I love C++ strings
Copy of concatenated string:
I love C++ strings
Length of concat string: 18
```

#### Analysis 

Try to understand the output and correlate it to the various elements in code. Don't let new syntax features bother you at this stage. The program starts with displaying a strin that has been initialized in Line 7 to ```"Hello std: : string"```. It then asks the user to enter two lines of text, which are stored in variables ```firstLine``` and ```secondLine``` in Lines 12 and 16. The actual concatenation is simple and looks like an arithmetic addit in Line 19, where even a space has been added to the first line. The act of copying is a simple act of assigning in Line 24. Determining the length of the string is done by invoking ```length()``` on it in Line 27.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Notepg81.jpg" alt="Notepg81" width="500"/>

## Summary
 
This lesson taught you about the basics of arrays, what they are, and where they can be used. You learned how to declare them, initialize them, access elements in an array, and write values to elements in an array. You learned how important it is to not exceed the bounds of an array. That is called a *buffer overflow*, and ensuring that input is checked before using to index elements helps ensure that the limits of an array are not crossed.
 
Dynamic arrays are those where the programmer doesn't need to worry about fixing the max length of an array at compile-time, and they allow for better memory management in the event of usage that is lesser than the expected maximum.
 
You also learned that C-style strings are a special case of char arrays where the end of the string is marked by a null-terminating character '\0'. More importantly, though, you learned that C++ offers a far better option in the ```std::string```, which provides convenient utility functions that enable you to determine the length, concatenate, and perform similar actions.

## Q&A

**Q Why take the trouble to initialize a static array's elements?**
**A** Unless initialized, the array, unlike a variable of any other type, contains junk and unpredictable values as the memory at that location was left untouched after the last operations. Initializing arrays ensures that the information therein has a distinct and predictable initial state.

**Q would you need to initialize the elements in a dynamic array for the same reasons as mentioned in the first question?**
**A** Actually, no. A dynamic array is quite a smart array. Elements in the array don't need to be initialized to a default value unless there is a specific reason related to the application that needs you to have certain initial values in the array.

**Q Given a choice, would you use C-style strings that need a null-terminator?**
**A** Yes, but only if someone places a gun to your head. C++ ```std::string``` is a lot safer and supplies features that should make any good programmer stay away from using C-style strings.

**Q Does the length of the string include the null-terminator at the end of it?**
**A** No, it doesn't. The length of string "Hello World" is 11, including the space and excluding the null character at the end of it.

**Q Well, I still want to use C-style strings in char arrays defined by myself. What should be the size of the array I am using?**
**A** Here you go with one of the complications of using C-style strings. The size of the array should be one greater than the size of the largest string it will ever contain. This is essential so that it can accommodate for the null character at the end Of the largest string. If "Hello World" was to be the largest string your char array would ever hold, then the length of the array needs to be 11 + 1 = 12 characters.

## Workshop

The Workshop provides quiz questions to help you solidify your understanding of the material covered and exercises to provide you with experience in using what you've learned. Try to answer the quiz and exercise questions before checking the answers, and be certain you understand the answers before continuing to the next lesson.

### Quiz
1. Check the array ```myNumbers``` in [DeclareArray.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%204%20Managing%20Arrays%20and%20Strings/DeclareArray.cpp). What are the indexes of the first and last elements in that array?
2. If you need to allow the user to input strings, would you use c-style strings?
3. How many characters are in 	as seen by the compiler?
4. You forget to end your C-style string with a null-terminator. What happens when you use it?
5. See the declaration of vector in [DynamicArray.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%204%20Managing%20Arrays%20and%20Strings/DynamicArray.cpp) and try composing a dynamic array that contains elements of the type char.

### Exercises
1.	Declare an array that represents the squares on the chessboard; the type of the array being an enum that defines the pieces that may possibly occupy the squares.
HINT: The enum will contain enumerators (Rook, Bishop, and so on), thereby limiting the range of possible values that the elements in the array can hold. Don't forget that a cell may also be empty!
2.	BUG BUSTERS: What is wrong with this code fragment?
```int myNumbers [5]  myNumbers [5] — 450; // Setting the 5th element to value 450```
3.	BUG BUSTERS: What is wrong with this code fragment?
```int myNumbers [5] ; cout << myNumbers [3];```

Workshop solutions can be found in the [answers](https://github.com/keldavis/c-plus-plus-practice/tree/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%204%20Managing%20Arrays%20and%20Strings/answers) folder.