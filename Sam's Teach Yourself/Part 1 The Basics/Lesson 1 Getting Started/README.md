# LESSON 1 Getting Started

Welcome to Sams Teach Yourself C++ in One Hour a Day! You're ready to get started on becoming a proficient C++ programmer. 

In this lesson, you find out:
- Why C++ is a standard in software development 
- How to enter, compile, and link your first working C++ program
- What's new in C++

## A Brief History of C++ 

The purpose of a programming language is to make consumption of computational resources easier. C++ is not a new language, 
yet one that is popularly adopted and continuously evolving. As of the time of writing this repo, the newest version of C++ 
ratified by the International Organization for Standardization (ISO) popularly called C++17, published December 2017.

### Connection to C

Initially developed by Bjarne Stroustroup at Bell Labs in 1979, C++ was designed to be a successor to C. In contrast to 
C, however, C++ was designed to be an object-oriented  language that implements concepts such as inheritance, abstraction, 
polymorphism, and encapsulation. 

C++ features classes that are used to contain member data and member methods. These member methods operate using member data. 
The effect of this organization is that the programmer models data and actions he wants to perform using the same. Many 
popular C++ compilers have continued to support C programming too.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/notepg6.jpg" alt="experience" width="500"/>

### Advantages of C++

C++ is considered an intermediate-level programming language, which means that it allows for high-level programming of 
applications as well as low-level programming of libraries that work close to the hardware. For many programmers, C++ 
provides the optimal mix of being a high-level language that lets one develop complex applications while supplying 
flexibility in allowing the developer to extract the best performance via  accurate control of resource consumption 
and availability.

In spite of the presence of newer programming languages such as Java and others based on .NET, C++ has remained 
relevant and has also evolved. Newer languages provide certain features like memory management via garbage collection 
implemented in a time component that endear them to some programmers. 

Yet, C++ remains the language of choice for cases where accurate control over their application's resource consumption 
and performance is needed. A tiered architecture where a web server programmed in C++ serves other components programmed 
in HTML, Java, or .NET is common.

### Evolution of the C++ Standard

Due to its popularity, years of evolution resulted in C++ being accepted and adopted on many different platforms, most 
using their own C++ compilers. This evolution caused compiler-specific deviations and, therefore, interoperability 
problems and porting issues. Hence, there emerged a need to standardize the language and provide compiler manufacturers 
with a standard language specification to work with.

In 1998, the first standard version of C++ was ratified by the ISO Committee in ISO/IEC 14882:1998. Since then the standard 
has undergone ambitious changes that have improved the usability of the language, and have extended the support of the 
standard library. As of the time of writing this repo, the current ratified version of the standard is ISO/IEC 14882:2014, 
informally termed C++17. 

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/notepg7.jpg" alt="current-standard" width="500"/>

### Who Uses Programs Written in C++?

The list of applications, operating systems, web services, and database and enterprise software programmed in C++ is a 
long one. No matter who you are or what you do with a computer, chances are that you already are consuming software 
programmed in C++. In addition to software engineers, C++ is often a language of choice for research work by physicists 
and mathematicians.

## Programming a C++ Application

When you start Notepad on Windows or the Terminal on Linux, you actually are telling the processor to run an executable 
of that program. The executable is the finished product that can be run and should do what the programmer intended to 
achieve.

### Steps to Generating an Executable

Writing a C++ program is a first step towards creating an executable that can eventually run on your operating system. 
The basic steps in creating applications in C++ are the following:

1. Writing (or programming) C++ code using a text editor
2. Compiling code using a C++ compiler that converts it to a machine language version contained in "object files"
3. Linking the output of the compiler using a linker to get an executable (.exe in Windows, for example)

Compilation is the step where code in C++, contained typically in text files with the extension .cpp, is converted into 
byte code that the processor can execute. The compiler converts one code file at a time, generating an object file with 
a .0 or .obj extension, ignoring dependencies that this CPP file may have on code in another file. 

The linker joins the dots and resolves these dependencies. In the event of successful linkage, it creates an executable 
for the programmer to execute and distribute. This entire process is also called building an executable.

### Analyzing Errors and "Debugging"

Most applications rarely compile and execute as intended at the first run. A huge or complex application programmed in 
any language—C++ included—needs many runs as part of a testing effort to identify errors in code, called bugs. After 
the bugs are fixed, the executable is rebuilt, and the testing process continues. 

Thus, in addition to the three steps—programming, compiling, and linking—software development also involves a step 
called debugging in which the programmer analyzes errors in code and fixes them. Good development environments supply 
tools and features that help in debugging. 

### Integrated Development Environments

Many programmers prefer using an Integrated Development Environment (IDE) in which the programming, compiling, and 
linking steps are integrated within a unified user interface that also supplies debugging features that make it 
easier to detect errors and solve problems.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/tippg8.jpg" alt="easy way" width="500"/>

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/dodontpg9.jpg" alt="dos and donts" width="500"/>

### Programming Your First C++ Application

Now that you know the tools and the steps involved, it is time to program your first
C++ application that follows tradition and displays a "Hello World!" on your screen.

If you are programming on Linux, use a simple text editor (such as gedit on Ubuntu) to 
create a CPP file with contents as seen in Listing 1.1.
	
If you are on Windows and using Microsoft Visual Studio, you may follow these steps:
1.  Invoke the New Project Wizard via the menu option File, New Project.
2.	Under Visual C++, choose the type Win32 Console Application and name your project Hello. Click OK.
3.	Under Application Settings, uncheck the Precompiled Header option. Click Finish.
4.	Replace the automatically generated contents in Hello . cpp with the code snippet shown in Listing 1.1.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/listing1.1.jpg"/>

This simple application does nothing more than display a line on the screen using ```std: : cout```. 
```std: : endl``` instructs ```cout``` to end that line, and the application exits by returning 0 
to the operating system.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/notecautionpg10.jpg" alt="not-caution" width="500"/>

### Building and Executing Your First C++ Application

If you're using Linux, open the terminal, navigate to the directory containing ```Hello.cpp```, and invoke the g++ compiler and linker using the command line:

```g++ -o hello Hello. cpp```

This command instructs ```g++``` to create an executable named ```hello``` by compiling your C++ file ```Hello.cpp```. 

If you're using Microsoft Visual Studio on Windows, press Ctrl+F5 to run your program directly via the IDE. This compiles, 
links, and executes your application. Alternatively perform the individual steps:
1.  Right-click the project and select Build to generate the executable ```Hello.exe```.
2.	Navigate to the path of the executable using the command-prompt (typically under the Debug directory of the project folder).
3.	Run it by typing the name of the executable.

Your program composed in Microsoft Visual Studio looks similar to that illustrated in Figure 1.1.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/figure1.1.jpg" alt="visual-studio" width="500"/>

Executing ```./hello``` on Linux or ```Hello.exe``` on Windows returns the following output:

```
Hello World!
```

Congratulations! You have started on your way to learning one of the most popular and powerful programming languages of all times!

### **Significance of the C++ ISO Standard**

As you can see, standard compliance helps the code snippet in Listing 1.1 compiled and executed on multiple platforms or operating 
systems—the prerequisite being the availability of standard compliant C++ compilers. Thus, if you need to create a product that 
needs to be run by Windows as well as Linux users, for example, standard compliant programming practices (that don't use a 
compiler or platform-specific semantics) give you an inexpensive way to reach more users without needing to program 
specifically for every environment you need to be supporting. This, of course, works optimally for applications that don't 
need much Interaction at an operating system level. 

### Understanding Compiler Errors

Compilers are painfully exact in their requirements, yet good ones make a decent effort at telling you where you have made 
mistakes. If you face a problem in compiling the application in Listing 1.1, you might get errors that look quite like the 
following (introduced deliberately by omitting the semicolon in Line 5):

```
hello. cpp (6) : error C2143: syntax error : missing ';' before 'return' 
```

This error message from the Visual C++ Compiler is quite descriptive: It tells the name of the file that contains the error, 
the line number (6, in this case) where you missed a semicolon, and a description of the error itself accompanied by the 
error number (C2143, in this case). Though the punctuation mark was deleted from the fifth line for this example, the error 
reported is in the line after because the error became apparent to the compiler only when it analyzed the return statement 
which indicated that the previous statement ought to have been terminated before the return. You can try to add the semicolon 
at the start of the sixth line and the program compiles just fine!

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/notepg12.jpg" alt="line-break" width="500"/>

## Summary

In this lesson you learned how to program, compile, link, and execute your first C++ program. This lesson also gave you a 
brief overview on the evolution of C++ and demon strated the effectiveness of a standard in showing that the same program 
can be compiled using different compilers on different operating systems. 

## Q&A

**Q Can I ignore warning messages from my compiler?**

**A** In certain cases, compilers issue warning messages. Warnings are different from errors in that the line in question 
	is syntactically correct and compile worthy. However, there possibly is a better way to write it, and good compilers 
	issue a warning with a recommendation for a fix. 
	
	The suggested correction can mean a more secure way of programming or one that lets your application work with 
	characters and symbols from non-Latin languages. You should heed these warnings and improve your program accordingly. 
	Do not mask the warning messages, unless you are sure that they're false positives.

**Q How does an interpreted language differ from a compiled language?**

**A** Languages such as Windows Script are interpreted. There is no compilation step, An interpreted language uses an interpreter 
	that directly reads the script text file (code) and performs the desired actions. Consequently, you need to have the inter preter 
	installed on a machine where the script needs to be executed; consequently, performance usually takes a hit as the interpreter 
	works as a runtime translator  between the microprocessor and the code written.

**Q What are runtime errors, and how are they different from compile-time errors?**

**A** Errors that happen when you execute your application are called runtime errors. You might have experienced the infamous 
	"Access Violation" on older versions of Windows, which is a runtime error. Compile-time errors don't reach the end-user 
	and are an indication of syntactical problems; they keep the programmer from generating an executable.

## Workshop

The Workshop provides quiz questions to help you solidify your understanding of the material covered and exercises to provide 
you with experience in using what you've learned. 

### Quiz

1.	What is the difference between an interpreter and a compiler?
2.	What does the linker do?	 
3.	What are the steps in the normal development cycle?


### Exercises

1.	Look at the following program and try to guess what it does without running it:

```
#include <iostream>
int main(){
	int x = 8;
	int y = 6;
	std::cout << std::endl;
	std::cout << x-y << " " << x * y << " " << x + y;
	std::cout << std::endl;
	return 0;
}
```

2.	Type in the program from Exercise 1 and then compile and link it. What does it do? Does it do what you guessed? 

3.  What do you think is the error in this program:

```
include <iostream>
int main(){
	std::cout << "Hello Buggy World \n";
	return 0;
}
```

4. Fix the error in the program in Exercise 3, compile, link, and run it. What does it do?

Workshop solutions can be found in the [answers](https://github.com/keldavis/c-plus-plus-practice/tree/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%201%20Getting%20Started/answers) folder