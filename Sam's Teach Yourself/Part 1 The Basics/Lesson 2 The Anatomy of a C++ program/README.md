# LESSON 2 The Anatomy of a C++ program

C++ programs are organized into classes comprising member functions 
and member variables. Most of this repo is devoted to explaining these 
parts in depth, but to get a sense of how a program fits together, you  
must see a complete working program.

In this lesson, you learn:
- The parts of a C++ program
- How the parts work together 
- What a function is and what it does
- Basic input and output operations

## Parts of the Hello World Program 

Your first C++ program in [Lesson 1](https://github.com/keldavis/c-plus-plus-practice/tree/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%201%20Getting%20Started), "Getting Started," did nothing more than 
write a simple "Hello World" statement to the screen. Yet this program contains 
some of the most important and basic building blocks Of a C++ program. You use 
Listing 2.1 or [HelloWorldAnalysis.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%202%20The%20Anatomy%20of%20a%20C%2B%2B%20program/HelloWorldAnalysis.cpp) as a starting point to analyze components all C++ programs contain. 

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/listing2.1.jpeg" alt="analysis" width="500"/>

This C++ program can be broadly classified into two parts: the preprocessor 
directives that start with a # and the main body of the program that starts 
with int main().

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/notepg18.jpeg" alt="notepg18" width="500"/>

## Preprocessor Directive #include

As the name suggests, a *preprocessor* is a tool that runs before the actual compilation 
starts. Preprocessor directives are commands to the preprocessor and always start with a 
pound sign ```#```. In Line 2 of Listing 2.1, ```#include <filename>``` tells the 
preprocessor to take the contents of the file (```iostream```, in this case) and 
include them at the line where the directive is made. ```iostream``` is a standard 
header file that enables the usage of ```std::cout``` used in Line 8 to display 
"Hello World" on the screen. In other words, the compiler was able to compile Line 
8 that contains ```std::cout``` because we instructed the preprocessor to include 
the definition of ```std::cout``` in Line 2.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/note1pg19.jpeg" alt="note1pg19" width="500"/>

## The Body of Your Program main () 

Following the preprocessor directive(s) is the body of the program characterized by the 
function ```main()```. The execution of a C++ program always starts here. It is a 
standardized convention that function ```main()``` is declared with an ```int``` preceding it. ```int``` 
is the return value type of the function ```main()``` and stands for integer. 

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/note2pg19.jpeg" alt="note2pg19" width="500"/>

Let's discuss Line 8 that fulfills the actual purpose of this program!

```
std: : cout << "Hello World'! << std: : endl;
```

```cout``` ("console-out", also pronounced see-out) is the statement that writes 
"Hello World„ to the display console—that is, screen. ```cout``` is a *stream* defined in 
the standard ```std``` *namespace* (hence, ```std::cout```), and what you are doing in this 
line is putting the text ```"Hello World"``` into this stream by using the stream insertion 
operator ```<<```. ```std::endl``` is used to end a line, and inserting it into a stream is akin 
to inserting a carriage return. Note that the stream insertion operator ```<<``` is used every 
time a new entity needs to be inserted into the stream. 

The good thing about streams in C++ is that different stream types support similar stream 
semantics to perform a different operation with the same text. For example, insertion into 
a file instead of a console would use the same insertion operator ```<<``` on an 
```std::fstream``` instead of ```std::cout```. Thus, working with streams gets intuitive, and 
when you are used to one stream (such as ```cout```, which writes text to the console), you will 
find it easy to work with others (such as ```fstream```, which helps save files to the disk). 

Streams are discussed in greater detail in Lesson 27, "Using Streams for Input and Output."

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/note1pg20.jpeg" alt="note1pg20" width="500"/>

### Returning a Value

Functions in C++ need to return a value unless explicitly specified otherwise. ```main ()``` is a function, 
too, and always returns an integer. This integer value is returned to the operating system (OS) and, 
depending on the nature of your application, can be very useful as most OSes provide for an ability to 
query on the return value of an application that has terminated naturally. In many cases, one application 
is launched by another and the parent application (that launches) wants to know if the child application 
(that was launched) has completed its task successfully. The programmer can use the return value of ```main()``` 
to convey a success or error state to the parent application.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/note2pg20.jpeg" alt="note2pg20" width="500"/>

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/cautionpg20.jpeg" alt="cautionpg20" width="500"/>

## The Concept of Namespaces

The reason you used ```std::cout``` in the program and not only ```cout``` is that the artifact (```cout```) that you want 
to invoke is in the standard (```std```) namespace. 

So, what exactly are namespaces?

Assume that you didn't use the namespace qualifier in invoking ```cout``` and assume that ```cout``` existed in two locations known to 
the compiler—which one should the compiler invoke? This causes a conflict and the compilation fails, of course. This is 
where namespaces get useful. Namespaces are names given to parts of code that help in reducing the potential for a naming 
conflict. By invoking ```std::cout```, you are telling the compiler to use that one unique ```cout``` that is available in the ```std``` 
namespace. 

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/notepg21.jpeg" alt="notepg21" width="500"/>

Many programmers find it tedious to repeatedly add the ```std``` namespace specifier to their code when using ```cout``` and other such 
features contained in the same. The ```using namespace``` declaration as demonstrated in Listing 2.2 or [namespace.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%202%20The%20Anatomy%20of%20a%20C%2B%2B%20program/namespace.cpp) helps you avoid this repetition.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/listing2.2.jpeg" alt="listing2" width="500"/>

#### Analysis

Note Line 8. By telling the compiler that you are using the namespace ```std```, you don't need to explicitly mention the namespace on 
Line 11 when using ```std::cout``` or ```std::end1```. 

A more restrictive variant of Listing 2.2 is shown in Listing 2.3 or [using.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%202%20The%20Anatomy%20of%20a%20C%2B%2B%20program/using.cpp) where you do not 
include a namespace in its entirety. You only include those artifacts that you wish to use.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/listing2.3.jpeg" alt="listing3" width="500"/>

#### Analysis

Line 8 in Listing 2.2 has now been replaced by Lines 7 and 8 in Listing 2.3. The difference between ```using namespace std``` and 
```using std::cout``` is that the former allows all artifacts in the ```std``` namespace (```cout```, ```cin```, etc.) to be used without explicit 
inclusion of the namespace qualifier ```std::```. With the latter, the convenience of not needing to disambiguate the namespace 
explicitly is restricted to only ```std::cout``` and ```std::endl```.

## Comments in C++ Code

Lines 1, 4, 10, and 13 in Listing 2.3 contain text in a spoken language (English, in this case) yet do not interfere with the ability 
of the program to compile. They also do not alter the output of the program. Such lines are called comments. Comments are ignored by 
the compiler and are popularly used by programmers to explain their code—hence, they are written in human-readable language.

C++ supports comments in two styles:
- ```//``` indicates the start of a comment, valid until the end of that line. For example:

```
// This is a comment -- won't be compiled
```

- ```/*``` followed by ```*/``` indicates that the contained text is a comment, even if it spans multiple lines:

```
/ * This is a comment and it 
spans two lines * /
```

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/notepg23.jpeg" alt="notepg23" width="500"/>

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/dodontpg23.jpeg" alt="dodontpg23" width="500"/>

## Functions in C++

Functions enable you to divide the content of your application into functional units that can be invoked in a sequence of your choosing. 
A function, when invoked, typically returns a value to the invoking/calling function. The most famous function is, of course, ```int main()```. 
It is recognized by the compiler as the starting point of your C++ application and has to return an ```int``` (i.e., an integer).

You as a programmer have the choice and usually the need to compose your own functions. Listing 2.4 or [declare_function.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%202%20The%20Anatomy%20of%20a%20C%2B%2B%20program/declare_function.cpp) is a simple 
application that uses a function to display statements on the screen using ```std::cout``` with various parameters.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/listing2.4.jpeg" alt="listing4" width="500"/>

#### Output

This is a simple string literal
Writing number five: 5
Performing division 10 / 5 = 2
Pi when approximated is 22 / 7 = 3
Pi is 22 / 7 = 3.14286

#### Analysis

Lines 5, 10, and 16 through 25 are those of interest. Line 5 is called a *function declaration*, which basically tells the 
compiler that you want to create a function called ```Democonsoleoutput()``` that returns an ```int``` (integer). This declaration 
enables the compiler to compile Line 10 where ```Democonsoleoutput()``` is called inside ```main()```. The compiler assumes that the *definition* 
(that is, the implementation of the function) is going to come up, which it does later in Lines 16 through 25.  

This function actually demonstrates the capabilities of ```cout```. Note how it not only prints text the same way as it displayed "Hello World" 
in previous examples, but also the result of simple arithmetic computations. Lines 21 and 22 both attempt to display the result of 
pi (22 / 7), but the latter is more accurate simply because by dividing 22.0 by 7, you tell the compiler to treat the result as a real 
number (a float in C++ terms) and not as an integer.

Note that your function is required to return an integer, as declared in Line 5, and returns 0. Similarly, ```main()``` returns 0, too. Given 
that ```main()``` has delegated all its activity to the function ```Democonsoleoutput()```, you would be wiser to use the return value of the 
function in returning from ```main()``` as seen in Listing 2.5 or [return_function.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%202%20The%20Anatomy%20of%20a%20C%2B%2B%20program/return_function.cpp).

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/listing2.5.jpeg" alt="listing5" width="500"/>

#### Analysis 

The output of this application is the same as the output of the previous listing. Yet, there are slight changes in the way it is programmed. 
For one, as you have defined (i.e., implemented) the function before ```main()``` at Line 5, you don't need an extra declaration of the same. Modern 
C++ compilers take it as a function declaration and definition in one. ```main()``` is a bit shorter, too. Line 19 invokes the function 
```Democonsoleoutput()``` and simultaneously returns the return value of the function from the application.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/notepg26.jpeg" alt="notepg26" width="500"/>

Functions can take parameters, can be recursive, can contain multiple return statements, can be overloaded, can be expanded in-line by the 
compiler, and lots more. These concepts are introduced in greater detail in Lesson 7, "Organizing Code with Functions."

## Basic Input Using ```std::cin``` and Output Using ```std::cout```

Your computer enables you to interact with applications running on it in various forms and allows these applications to interact with you 
in many forms, too. You can interact with applications using the keyboard or the mouse. You can have information displayed on the screen 
as text, displayed in the form of complex graphics, printed on paper using a printer, or simply saved to the file system for later usage. 
This section discusses the very simplest form of input and output in C++ —using the console to write and read information.

You use ```std::cout``` (pronounced "standard see-out") to write simple text data to the console and use ```std::cin``` ("standard see-in") to read 
text and numbers (entered using the keyboard) from the console. In fact, in displaying "Hello World" on the screen, you have already 
encountered ```cout```, as seen in Listing 2.1:

```
8:	std: : cout << "Hello World" << std: :endl;
```

The statement shows ```cout``` followed by the insertion operator ```<<``` (that helps insert data into the output stream), followed by the string 
literal "Hello World" to be inserted, followed by a newline in the form of ```std::endl``` (pronounced "standard end-line").

The usage of ```cin``` is simple, too, and as ```cin``` is used for input, it is accompanied by the variable you want to be storing the input data in:

```
std: :cin >> Variable;
```

Thus, ```cin``` is followed by the *extraction* operator ```>>``` (extracts data from the input stream), which is followed by the variable where 
the data needs to be stored. If the user input needs to be stored in two variables, each containing data separated by a space, then you can do 
so using one statement:  
```
std: :cin >> Variablel >> Variable2;
```

Note that ```cin``` can be used for text as well as numeric inputs from the user, as shown in Listing 2.6 or [cin_cout.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%202%20The%20Anatomy%20of%20a%20C%2B%2B%20program/cin_cout.cpp).

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/listing2.6.jpeg" alt="listing6" width="500"/>

#### Output

Enter an integer: 2017
Enter your name: Siddhartha
Siddhartha entered 2017

#### Analysis

Line 8 shows how a variable of name ```inputNumber``` is declared to store data of type ```int```. The user is requested to enter a 
number using ```cout``` in Line 10, and the entered number is stored in the integer variable using ```cin``` in Line 13. The same 
exercise is repeated with storing the user's name, which of course cannot be held in an integer but in a different type called ```string``` 
as seen in Lines 17 and 18. The reason you included ```<string>``` in Line 2 was to use type string later inside ```main()```. Finally in 
Line 20, a cout statement is used to display the entered name with the number and an intermediate text to produce the output 
```Siddhartha entered 2017```.

This is a simple example of how basic input and output work in C++. Don't worry if the concept of variables is not clear to you as it is explained in good detail in the following Lesson 3, "Using Variables, Declaring Constants."

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/notepg28.jpeg" alt="notepg28" width="500"/>

### Summary

This lesson introduced the basic parts of a simple C++ program. You understood what ```main()``` is, got an introduction to 
namespaces, and learned the basics of console input and output. You are able to use a lot of these in every program you write.

### Q&A

**Q What does ```#include``` do?**
**A** This is a directive to the preprocessor that runs when you call your compiler. This specific directive causes the contents 
of the file named in ```<>``` after #include to be inserted at that line as if it were typed at that location in your source code.

**Q What is the difference between ```//``` comments and ```/*``` comments?** 
**A** The double-slash comments (```//```) expire at the end of the line. Slash-star (```/*```) comments are in effect until there 
is a closing comment mark (```*/```). The doubleslash comments are also referred to as single-line comments, and the slash-star 
comments are often referred to as multiline comments. Remember, not even the end of the function terminates a slash-star comment; 
you must put in the closing comment mark or you will receive a compile-time error.

**Q When do you need to program command-line arguments?**
**A** To supply options that allow the user to alter the behavior of a program. For example, the command ```ls``` in Linux or 
```dir``` in Windows enables you to see the contents within the current directory or folder. To view files in another directory, 
you specify the path of the same using command-line arguments, as in ```ls /``` or ```dir \```.

### Workshop

The Workshop provides quiz questions to help you solidify your understanding of the material covered and exercises to provide you 
with experience in using what you've learned. Try to answer the quiz and exercise questions before checking the answers in Appendix 
E, and be certain you understand the answers before continuing to the next lesson

#### Quiz

1.	What is the problem in declaring ```Int main()```?
2.	Can comments be longer than one line?

#### Exercises

1.	BUG BUSTERS: Enter this program and compile it. Why does it fail? How can you fix it?

```
#include <iostream>
void main(){
	std::Cout << Is there a bug here?";"
}
```

1.	Fix the bug in Exercise 1 and recompile, link, and run it.
2.	Modify Listing 2.4 to demonstrate subtraction (using ```—```) and multiplication (using ```*```)

Workshop solutions can be found in the [answers](https://github.com/keldavis/c-plus-plus-practice/tree/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%202%20The%20Anatomy%20of%20a%20C%2B%2B%20program/answers) folder.