# Conditionals And Logic
## A simple repository that will explore how programs make decisions by evaluating conditions and introduce logic into our code.

## Table of Contents
- [If Statement](#If-Statement)
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

# Basic Programs
- [Coin Flip](#Coin-Flip)

## Coin Flip

![alt text](https://s3.amazonaws.com/codecademy-content/courses/learn-cpp/conditionals-and-logic/coinflip.gif)

The program simulates a coin toss:
- 50% of the time, it’s Heads.
- 50% of the time, it’s Tails.

1. Open the [coinflip.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/2.%20Conditionals%20and%20Logic/coinflip.cpp) file and run the program five times to see an ```if``` ```else``` statement in action. See how many times it goes Heads.

