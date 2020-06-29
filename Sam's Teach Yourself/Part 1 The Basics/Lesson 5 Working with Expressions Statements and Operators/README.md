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

As Table 5.1 indicates, the result of a comparison operation is always ```true``` or ```false```, in other words a ```bool```. The following sample code indicates how the relational operators introduced in Table 5.1 can be put to use:

```
int personAge = 20;
bool checkLessThan = (personAge < 100); // true 
bool checkGreaterThan = (personAge > 100); // false 
bool checkLessThanEqualTo = (personAge <= 20); // true
bool checkGreaterThanEqualTo = (personAge >= 20); // true 
bool checkGreaterThanEqualToAgain = (personAge >= 100); // false
```

Listing 5.3 (and [EqualityRelational.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%205%20Working%20with%20Expressions%20Statements%20and%20Operators/EqualityRelational.cpp)) is a program that demonstrates the effect of using these operators by displaying the result on the screen.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Listing5.3.jpg" alt="listing3" width="500"/>

#### Output

```
Enter two integers:
365
-24
Result of equality test: 0
Result of inequality test: 1
Result of 365 > -24 test: 1
Result of 365 < -24 test: 0
Result of 365 >= -24 test: 1
Result of 365 <= -24 test: 0
```

#### Analysis

The program displays the binary result of the various operations. Interesting is to note the output in the event the two supplied integers are identical. The operators ```==```, ```>=```, and ```<=``` produce identical results too.

The fact that the output of equality and relational operators is binary makes these perfectly suited to using them in statements that help in decision-making and as loop condition expressions that ensure a loop executes only so long as the condition evaluates to true. You can learn more about conditional execution and loops in Lesson 6.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Notepg94.jpg" alt="Notepg94" width="500"/>

### Logical Operations NOT, AND, OR, and XOR

Logical NOT operation is supported by the operator ```!``` and works on a single operand. Table 5.2 is the truth table for a logical NOT operation, which, as expected, simply inverses the supplied Boolean flag.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Table5.2.jpg" alt="table2" width="500"/>

Other operators such as AND, OR, and XOR need two operands. Logical AND operation evaluates to ```true``` only when each operand evaluates to ```true```. Table 5.3 demonstrates the functioning of a logical AND operation.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Table5.3.jpg" alt="table3" width="500"/>

Logical AND operation is supported by operator ```&&```.

Logical OR evaluates to ```true``` when at least one of the operands evaluates to ```true```, as demonstrated by Table 5.4.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Table5.4.jpg" alt="table4" width="500"/>

Logical OR operation is supported by operator ```||```.

The exclusive OR (abbreviated to XOR) operation is slightly different than the logical OR for it evaluates to ```true``` when any one operand is ```true``` but not both, as demonstrated by Table 5.5.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Table5.5.jpg" alt="table5" width="500"/>

C++ provides a bitwise XOR in the form of operator ```^```. This operator helps evaluate a result that is generated via an XOR operation on the operand's bits.

### Using C++ Logical Operators NOT (!), AND (&&), and OR (||)

Consider these statements:
- "If it is raining AND if there are no buses, I cannot go to work."
- "If there is a deep discount OR if I am awarded a record bonus, I can buy that can"

You need such logical constructs in programming where the result of two operations is used in a logical context in deciding the future flow of your program. C++ provides logical AND and OR operators that you can use in conditional statements, hence conditionally changing the flow of your program.

Listing 5.4 (and [AndOr.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%205%20Working%20with%20Expressions%20Statements%20and%20Operators/AndOr.cpp)) demonstrates the workings of logical AND and logical OR operators.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/listing5.4.jpg" alt="listing4" width="500"/>

#### Output

```
Enter true(1) or false(0) for two operands:
1
0
1 AND 0 = 0
1 OR 0 = 1

Next run:

Enter true(1) or false(0) for two operands:
1
1
1 AND 1 = 1
1 OR 1 = 1
```

#### Analysis

The program actually indicates how the operators supply logical AND and OR functions to you. What the program doesn't do is show you how to use them in making decisions.

Listing 5.5 (and [NotAndIf.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%205%20Working%20with%20Expressions%20Statements%20and%20Operators/NotAndIf.cpp)) demonstrates a program that executes different lines of code depending on the values contained in variables using conditional statement processing and logical operators.

#### Output

```
Use boolean values(0 / 1) to answer the questions
Is it raining? 1
Do you have buses on the streets? 1
You can go to work
Take an umbrella
```

Next Run:

```
Use boolean values(0 / 1) to answer the questions
Is it raining? 1
Do you have buses on the streets? 0
You cannot go to work
```

Last run:

```
Use boolean values(0 / 1) to answer the questions
Is it raining? 0
Do you have buses on the streets? 1
You can go to work
Enjoy the sun and have a nice day
```

#### Analysis

The program in Listing 5.5 uses conditional statements in the form of the ```if``` construct that has not been introduced to you. Yet, try to understand the behavior of this construct by correlating it against the output. Line 20 contains the logical expression ```(isRaining !busesply)``` that can be read as "Raining AND NO buses." This uses the logical AND operator to connect the absence of buses (indicated by the logical NOT on presence of buses) to the presence of rain.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Notepg99.jpg" alt="Notepg99" width="500"/>

Listing 5.6 (and [OrNotIf.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%205%20Working%20with%20Expressions%20Statements%20and%20Operators/OrNotIf.cpp)) uses logical NOT (```!```) and OR (```||```) operators in a demonstration of conditional processing.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Listing5.6.jpg" alt="listing6" width="500"/>

#### Output

```
Answer questions with 0 or 1
Is there a discount on your favorite car? 0
Did you ger a fantastic bonus? 1
Congratulations, you can buy that car!
Car not on discount
```

Next run:

```
Answer questions with 0 or 1
Is there a discount on your favorite car? 0
Did you ger a fantastic bonus? 0
Sorry, waiting a while is a good idea
Car not on discount
```

Last run:

```
Answer questions with 0 or 1
Is there a discount on your favorite car? 1
Did you ger a fantastic bonus? 1
Congratulations, you can buy that car!
```

#### Analysis

The program recommends buying a car if you get a discount or if you got a fantastic bonus (or both). If not, it recommends waiting. It also uses the logical not operation in Line 19 to remind you that the car is not on discount. Line 14 uses the if construct followed by an accompanying else in Line 16. The if construct executes the following statement in Line 15 when the condition ```(onDiscount || fantasticBonus)``` evaluates to ```true```. This expression contains the logical OR operator and evaluates to ```true``` when there is a discount on your favorite car or if you have received a fantastic bonus. When the expression evaluates to ```false```, the statement following else in Line 17 is executed.

### Bitwise NOT (```~```), AND (&), OR (|), and XOR (```^```) Operators

The difference between the logical and the bitwise operators is that bitwise operators don't return a boolean result. Instead, they supply a result in which individual bits are governed by executing the operator on the operands' bits. C++ allows you to perform operations such as NOT, OR, AND, and exclusive OR (that is, XOR) operations on a bitwise mode where you can manipulate individual bits by negating them using ```~```,  0Rring them using ```|```, ANDing them using ```&```, and XORring them using ```^```. The latter three are performed against a number (typically a bit mask) of your choosing.

Some bitwise operations are useful in those situations where bits contained in an integer —for example, each specify the state of a certain flag. Thus, an integer with 32 bits can be used to carry 32 Boolean flags. Listing 5.7 (and [Bitwise.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%205%20Working%20with%20Expressions%20Statements%20and%20Operators/Bitwise.cpp)) demonstrates the use of bitwise operators.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Listing5.7.jpg" alt="listing7" width="500"/>

#### Output

```
Enter a number (0 - 255): 181
181 in binary is 10110101
Logical NOT ~
~10110101 = 01001010
Logical AND, & with 00001111
0001111 & 10110101 = 00000101
Logical OR, | with 00001111
00001111 | 10110101 = 10111111
Logical XOR, ^ with 00001111
00001111 ^ 10110101 = 10111010
```

#### Analysis

This program uses bitset—a type you have not seen yet—to make displaying binary data easier. The role of ```std::bitset``` here is purely to help with displaying and nothing more. In Lines 10, 13, 18, and 22 you actually assign an integer to a bitset object, which is used to display that same integer data in binary mode. The operations are done on integers. For a start, focus on the output, which shows you the original integer 181 fed by the user in binary and then proceeds to demonstrate the effect of the various bitwise operators ```&```, ```|```, and ```^``` on this integer. You see that the bitwise NOT used in Line 14 toggles the individual bits. The program also demonstrates how the operators ```&```, ```|```, and ```^``` work, performing the operations using each bit in the two operands to create the result. Correlate this result with the truth tables introduced earlier, and the workings should become clearer to you.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Notepg102.jpg" alt="Notepg102" width="500"/>

### Bitwise Right Shift (>>) and Left Shift (<<) Operators

Shift operators move the entire bit sequence to the right or to the left, and thus can help with multiplication or division by multiples of two, apart from having other uses in an application.
 
A sample use of a shift operator used to multiply by two is the following:

```int doubledVa1ue	num << 1; // shift bits one position left to double value```

A sample use of a shift operator used to halve is the following: 

```int halvedValue = num >> 1; // shift bits one position right to halve value```

Listing 5.8 (and [BitwiseShift.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%205%20Working%20with%20Expressions%20Statements%20and%20Operators/BitwiseShift.cpp)) demonstrates how you can use shift operators to effectively multiply or divide  an integer value. 

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Listing5.8.jpg" alt="listing8" width="500"/>

#### Output

```
Enter a number: 16
Quarter: 4
Half: 8
Double: 32
Quadruple: 64
```

#### Analysis

The input number is 16, which in binary terms is 1000. In Line 9, you move it one bit right to change it to 0100, which is 8, effectively halving it. In Line 10, you move it two bits right changing 1000 to 00100, which is 4. Similarly the effect of the left shift operators in Lines 11 and 12 are exactly the opposite. You move it one bit left to get 10000, which is 32 and two bits left to get 100000, which is 64, effectively doubling and quadrupling the number!

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Notepg104.jpg" alt="Notepg104" width="500"/>

### Compound Assignment Operators

Compound assignment operators are assignment operators where the operand to the left is assigned the value resulting from the operation.

Consider the following code:

```
int numl = 22; 
int num2 = 5;
numl += num2; // numl contains 27 after the operation
```

This is similar to what's expressed in the following line of code:

```
numl = numl + num2;
```

Thus, the effect of the ```+=``` operator is that the sum of the two operands is calculated and then assigned to the operand on the left (which is ```numl```). Table 5.6 is a quick reference on the many compound assignment operators and explains their working.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Table5.6pg104.jpg" alt="table6" width="500"/>

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Table5.6pg105.jpg" alt="table6" width="500"/>

Listing 5.9 (and [Compound.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%205%20Working%20with%20Expressions%20Statements%20and%20Operators/Compound.cpp)) demonstrates the effect of using these operators.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Listing5.9.jpg" alt="listing9" width="500"/>

#### Output

```
Enter a number: 440
After += 8, value = 448
After -= 2, value = 446
After /= 4, value = 111
After *= 4, value = 444
After %= 1000, value = 444
After <<= 1, value = 888
After >>= 2, value = 222
After |= 0x55, value = 223
After ^= 0x55, value = 138
After &= 0x0F, value = 10
```

#### Analysis
 
Note that value is continually modified throughout the program via the various assignment operators. Each operation is performed using ```value```, and the result of the operation is assigned back to it. Hence, at Line 9, the user input 440 is added to 8, which results in 448 and is assigned back to ```value```. In the subsequent operation at Line 11, 2 is subtracted from 448, resulting in 446, which is assigned back to ```value```, and so on.

### Using ```sizeof``` to Determine the Memory Occupied by a Variable

This operator tells you the amount of memory in bytes consumed by a particular type or a variable. The usage of ```sizeof``` is the following: 

```
sizeof(variable);
```

or 

```
sizeof(type);
```

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Notepg106.jpg" alt="Notepg106" width="500"/>

Listing 5.10 (and [SizeOfBytesArray.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%205%20Working%20with%20Expressions%20Statements%20and%20Operators/SizeOfBytesArray.cpp)) demonstrates the use of ```sizeof``` in determining memory space occupied by an array. Additionally, you might want to revisit [Listing 3.4](https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/listing3.4.jpeg) to analyze the usage of ```sizeof``` in determining memory consumed by the most familiar variable types

#### Output

```
Use sizeof to determine memory used by arrays
Bytes used by an int: 4
Bytes used by myNumbers: 400
Bytes used by an element: 4
```

#### Analysis

The program demonstrates how ```sizeof``` is capable of returning the size of an array of 100 integers in bytes, which is 400 bytes. The program also demonstrates that the size of each element is 4 bytes.

```sizéof``` can be useful when you need to dynamically allocate memory for N objects, especially of a type created by yourself. You would use the result of the ```sizeof``` operation in determining the amount of memory occupied by each object and then dynamically allocate using the operator ```new```.

Dynamic memory allocation is explained in detail in Lesson 8, "Pointers and References Explained."

### Operator Precedence

You possibly learned something in school on the order of arithmetic operations called BODMAS (Brackets Orders Division Multiplication Addition Subtraction), indicating order in which a complex arithmetical expression should be evaluated. In C++, you use operators and expressions such as the following:

```
int myNumber = 10 * 30 + 20 - 5 * 5 << 2;
```

The question is, what value would ```myNumber``` contain? This is not left to guesswork of any kind. The order in which the various operators are invoked is very strictly specified by the C++ standard. This order is what is meant by operator precedence. See Table 5.7.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Table5.7pg108.jpg" alt="table7" width="500"/>

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Table5.7pg109.jpg" alt="table7" width="500"/>

Have another look at the complicated expression used as the earlier example:  

```
int myNumber = 10 * 30 + 20 - 5 * 5 << 2;
```

In evaluating the result of this expression, you need to use the rules related to operator precedence as shown in Table 5.7 to understand what value the compiler assigns it. As multiply and divide have priority over add and subtract, which in turn have priority over shift, you simplify it to the following:

```
int myNumber = 300 + 20 - 25 >> 2;
```

As ```add``` and ```subtract``` have priority over ```shift```, this gets simplified to:

```
int myNumber = 295 << 2;
```

Finally, you perform the shift operation. Knowing that one bit left shift doubles, and hence two bits left shift quadruples, you can say that the expression evaluates to 295 * 4, which is 1180.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Cautionpg109.jpg" alt="Cautionpg109" width="500"/>

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/note%20pics/Dodontpg110.jpg" alt="Dodontpg110" width="500"/>

## Summary

In this lesson you learned what C++ statements, expressions, and operators are. You learned how to perform basic arithmetic operations such as addition, subtraction, multiplication, and division in C++. You also had an overview on logical operations such as NOT, AND, OR, and XOR. You learned of the C++ logical operators ```!``` , ```&&```, and ```||``` that help you in conditional statements and the bitwise operators such as ```~```, ```&```, ```|```, and ```^``` that help you manipulate data, one bit at a time.

You learned about operator precedence and how important it is to use parenthesis to write code that can also be understood by fellow programmers. You were given an overview on integer overflow and how important avoiding it actually is.

## Q&A

**Q Why do some programs use unsigned int if unsigned short takes less memory and compiles, too?**

**A** ```unsigned short``` typically has a limit of 65535, and if incremented, overflows to zero. To avoid this behavior, well-programmed applications choose ```unsigned int``` when it is not certain that the value will stay well below this limit.

**Q I need to calculate the double of a number after it's divided by three. So, do you see any problem in the following code:**

```int result = Number / 3 << 1;```
 
**A** Yes! Why didn't you simply use parenthesis to make this line simpler to read to fellow programmers? Adding a comment or two won't hurt either. 

**Q My application divides two integer values 5 and 2:**

```
int numl = 5, num2 = 2;  
int result = numl / num2;
```

**On execution, the result contains value 2. Isn't this wrong?**

**A** Not at all. Integers are not meant to contain decimal data. The result of this operation is hence 2 and not 2.5. If 2.5 is the result you expect, change all data types to ```float``` or ```double```. These are meant to handle floating-point (decimal) operations.

## Workshop

The Workshop provides quiz questions to help you solidify your understanding of the material covered and exercises to provide you with experience in using what you've learned. Try to answer the quiz and exercise questions before checking the [answers](https://github.com/keldavis/c-plus-plus-practice/tree/master/Sam's%20Teach%20Yourself/Part%201%20The%20Basics/Lesson%205%20Working%20with%20Expressions%20Statements%20and%20Operators/answers), and be certain that you understand the answers before continuing to the next lesson.

### Quiz

1.	I am writing an application to divide numbers. What's a better suited data type: ```int``` or ```float```?
2.	What is the value of 32 / 7?
3.	What is the value of 32.0/7?
4.	Is ```sizeof ( . . . )``` a function?
5.	I need to compute the double of a number, add 5 to it, and then double it again. Is this correct?

```
int result = number << 1 + 5 << 1;
```

6.	What is the result of XOR operation where the XOR operands both evaluate to true?

### Exercises

1.	Improve on the code in quiz question 5, using parenthesis to create clarity.
2.	What is the value of result stored by this expression:

```
int result = number << 1 + 5 << 1;
```

3.	Write a program that asks the user to input two Boolean values and demonstrates the result of various bitwise operators on them.