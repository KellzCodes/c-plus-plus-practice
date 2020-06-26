# Answers for Lesson 3

## Quiz

1. A signed integer is one in which the most-significant-bit (MSB) functions as the sign-bit and indicates if the value of the integer is positive or negative. An unsigned integer in comparison is used to contain only positive integer values. 

2. ```#define``` is a preprocessor directive that directs the compiler to do a text replacement wherever the defined value is seen. However, it is not type safe and is a primitive way of defining constants. Therefore, it is to be avoided.
 
3. To ensure that it contains a definite, non-random value.

4. 2

5. The name is nondescriptive and repeats the type. Though this compiles, such code  becomes difficult for humans to read and maintain and should be avoided. An integer is better declared using a name that reveals its purpose. For example:  
	
	```int age = 0;```

## Exercises

1.	Many ways of achieving this: 

```
enum YourCards {Ace 43 , Jack, Queen, King} ; 
// Ace is 43, Jack is 44, Queen is 45, King is 46
// Alternatively. .
enum YourCards {Ace, Jack, Queen = 45, King} ;	 
// Ace is 0, Jack is 1, Queen is 45, and King is 46
```
 
2.	See Listing 3.4 or [overflow.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%203%20Using%20Variables%20Declaring%20Constants/overflow.cpp) and adapt it (reduce it) to get the answer to this question.
 
3.	Here is a program that asks you to enter radius of a circle and calculates the area and circumference for you:

```
#include <iostream>	 using namespace std; 
int main (){
	const double Pi = 3.1416;
	cout << "Enter circle's radius: "
	double radius = 0; 
	cin >> radius;

	cout << "Area = " << Pi * radius * radius << endl; 
	cout << "Circumference = "	<< 2 * Pi * radius << endl;
	
	return 0 ;
}

```

**Output**
```
Enter circle's radius : 4
Area: 50.2656
Circumference: 25.1328
```

4.	You get a compilation warning (not error) if you store the result of calculating area and circumference in an integer and the output looks like this:	
	> Enter circle's radius: 4
	>
	> Area = 50
	>
	> Circumference = 25

5. ```auto``` is a construct where the compiler automatically deduces the type the variable can take depending on the value it is being initialized to. The code in question does not initialize and hence causes a compilation failure.
