# Answers to Lesson 5 Workshop

## Quiz

1.	Integer types cannot contain decimal values that are possibly relevant for the user who wants to divide two numbers. So, you would use ```float```.
2.	As the compiler interprets them to be an integer, it is 4.
 
3.	As the numerator is 32.0 and not 32, the compiler interprets this to be a floating_ point operation, creating a result in a float that is akin to 4.571.
4.	No, ```sizeof``` is an operator, and one that cannot be overloaded.
5.	It does not work as intended because the addition operator has priority over shift, resulting in a shift of 1 + 5 = 6 bits instead of just one.
6.	The result of XOR is ```false``` as also indicated by [Table 5.5](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Table5.5.jpg).

## Exercises

1.	Here is a correct solution:
```
int result - ( (number << 1) + 5) << 1;
```

2.	The result contains number shifted 7 bits left, as operator + takes priority over
operator 
3.	Here is a program that stores two Boolean values entered by the user and demonstrates the result of using bitwise operators on them:

```
#include <iostream> 
using namespace std;

int main(){
	cout << "Enter a boolean value true (1) or false (0):"; 
	bool valuel = false; 
	cin >> valuel;
	
	cout << "Enter another boolean value true (1) or false (0):";
	bool value2 = false;  
	cin >> value2;

	cout << "Result of bitwise operators on these operands: " << endl; 
	cout "Bitwise AND:" << (valuel & value2) << endl; 
	cout "Bitwise OR: << (valuel | value2) << endl; 
	cout << "Bitwise XOR: " << (valuel ^ value2) << endl;
	return 0;
}

```

#### Output 

```
Enter a boolean value true (1) or false (0): 1
Enter another boolean value true (1) or false (0): 0
Result of bitwise operators on these operands:
Bitwise AND: 0
Bitwise OR: 1
Bitwise XOR: 1
```