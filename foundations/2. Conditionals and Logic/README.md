# Conditionals And Logic
## A simple repository that will explore how programs make decisions by evaluating conditions and introduce logic into our code.

## Table of Contents
- [If Statement](#If-Statement)
- [Relational Operators](#Relational-Operators)
- [Else Clause](#Else-Clause)
- [Basic Programs](#Basic-Programs)

### If Statement

An ```if``` statement is used to test an expression for truth and execute some code based on it. Here’s a simple form of the ```if``` statement:

```
if (condition) {

  some code

}
```

If the *condition* is ```true```, then the statements within are executed. Otherwise, the *statements* are skipped and the program continues on.

```
if (coin_flip == 1) {

  std::cout << "Heads\n";

}
```

The ```if``` keyword is followed by a set of parentheses ```()```. Inside the parentheses ```()```, a condition is provided that evaluates to ```true``` or ```false```:

- If the condition evaluates to true, the code inside the curly braces ```{}``` executes.
- If the condition evaluates to ```false```, the code won’t execute.

So in the code above, if ```coin_flip``` is equal to 1, the program outputs “Heads”; if it does not, then nothing happens and the program continues.

### Relational Operators

When writing conditional statements, sometimes we need to use different types of operators to compare values. These operators are called relational operators.

To have a condition, we need *relational* operators:

- ```==``` equal to
- ```!=``` not equal to
- ```>``` greater than
- ```<``` less than
- ```>=``` greater than or equal to
- ```<=``` less than or equal to

Relational operators compare the value on the left with the value on the right.

### Else Clause

We can also add an ```else``` clause to an ```if``` statement to provide code that will only be executed if the condition is ```false```. Here’s a form of an ```if``` statement that includes an ```else``` clause:

```
if (condition) {

  do something

} else {

  do something else

}
```

- If *condition* is ```true```, *statement1* is executed. Then the program skips *statement2* and executes any code statements following the ```if```/```else``` clause.
- If *condition* is ```false```, *statement1* is skipped and *statement2* is executed. After *statement2* completes, the program executes any code statements following the ```if```/```else``` clause.

```
if (coin == 1) {

  std::cout << "Heads\n";

}
else {

  std::cout << "Tails\n";

}
```

So in the code above, if ```coin``` is equal to 1, the program outputs “Heads”; if it does not, then it outputs “Tails”.

**Note**: It’s either or — only one of them will execute!

# Basic Programs
- [Coin Flip](#Coin-Flip)
- [Grade](#Grade)

## Coin Flip

The program simulates a coin toss:
- 50% of the time, it’s Heads.
- 50% of the time, it’s Tails.

![alt text](https://s3.amazonaws.com/codecademy-content/courses/learn-cpp/conditionals-and-logic/coinflip.gif)

1. Open the [coinflip.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/2.%20Conditionals%20and%20Logic/coinflip.cpp) file and run the program five times to see an ```if``` ```else``` statement in action. See how many times it goes Heads.

## Grade
A simple gradebook program meant to show how ```if``` and ```else``` statements are used.

1. Declare an int named ```grade``` and set it equal to 90.

2. Write an if statement where if grade > 60 is true, output “Pass”.

3. Change the condition ```grade > 60``` to ```grade < 60```. Observe what happens.

4. Change the condition ```grade < 60``` to ```grade != 60```. Observe what happens. 

5. Add an else statement that outputs “Fail”.

Example code is found in the [grade.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/2.%20Conditionals%20and%20Logic/grade.cpp) file.
