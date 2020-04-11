# Conditionals And Logic
## A simple repository that will explore how programs make decisions by evaluating conditions and introduce logic into our code.

## Table of Contents
- [If Statement](#If-Statement)
- [Relational Operators](#Relational-Operators)
- [Else Clause](#Else-Clause)
- [Else if](#Else-if)
- [Switch Statement](#Switch-Statement)
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

### Else if

what happens if you want more than two possible outcomes?

This is where ```else if``` comes in.

```
if (condition) {

  some code

} else if (condition) {

  some code

} else {

  some code

}
```

The ```else if``` statement always comes after the ```if``` statement and before the ```else``` statement. The ```else if``` statement also takes a condition.

And you can have more than one of them! Here’s an example with three of them:

```
if (grade == 9) {

  std::cout << "Freshman\n";

} 
else if (grade == 10) {

  std::cout << "Sophomore\n";

}
else if (grade == 11) {

  std::cout << "Junior\n";

} 
else if (grade == 12) {

  std::cout << "Senior\n";

}
else {

  std::cout << "Super Senior\n";

}
```

### Switch Statement

Now that we know how ```if```, ```else if```,and ```else``` work, we can write programs that have multiple outcomes. Programs with multiple outcomes are so common that C++ provides a special statement for it… the ```switch``` statement!

A ```switch``` statement provides an alternative syntax that is easier to read and write. However, you are going to find these less frequently than ```if```, ```else if```, and ```else``` in the wild.

A ```switch``` statement looks like this:

```
switch (grade) {

  case 9:
    std::cout << "Freshman\n";
    break;
  case 10:
    std::cout << "Sophomore\n";
    break;
  case 11:
    std::cout << "Junior\n";
    break;
  case 12:
    std::cout << "Senior\n";
    break;
  default:
    std::cout << "Invalid\n";
    break;

}
```

- The ```switch``` keyword initiates the statement and is followed by ```()```, which contains the value that each case will compare. In the example, the value or expression of the switch statement is ```grade```. One restriction on this expression is that it must evaluate to an integral type (```int```, ```char```, ```short```, ```long```, ```long long```, or ```enum```).
- Inside the block, ```{}```, there are multiple cases.
- The ```case``` keyword checks if the expression matches the specified value that comes after it. The value following the first case is ```9```. If the value of ```grade``` is equal to ```9```, then the code that follows the ```:``` would run.
- The ```break``` keyword tells the computer to exit the block and not execute any more code or check any other cases inside the code block.
- At the end of each switch statement, there is a ```default``` statement. If none of the cases are ```true```, then the code in the ```default``` statement will run. It’s essentially the ```else``` part.

In the code above, suppose ```grade``` is equal to ```10```, then the output would be “Sophomore”.

**Note**: Without the ```break``` keyword at the end of each case, the program would execute the code for the first matching case and all subsequent cases, including the ```default``` code. This behavior is different from ```if``` / ```else``` conditional statements which execute only one block of code.

# Basic Programs
- [Coin Flip](#Coin-Flip)
- [Grade](#Grade)
- [pH](#pH)
- [Pokedex](#Pokedex)

## Coin Flip

The program simulates a coin toss:
- 50% of the time, it’s Heads.
- 50% of the time, it’s Tails.

![alt text](https://s3.amazonaws.com/codecademy-content/courses/learn-cpp/conditionals-and-logic/coinflip.gif)

1. Open the [coinflip.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/2.%20Conditionals%20and%20Logic/coinflip.cpp) file and run the program five times to see an ```if``` ```else``` statement in action. See how many times it goes Heads.

## Grade
A simple gradebook program meant to show how ```if``` and ```else``` statements are used.

1. Declare an int named ```grade``` and set it equal to 90.

2. Write an if statement where if ```grade > 60``` is ```true```, output “Pass”.

3. Change the condition ```grade > 60``` to ```grade < 60```. Observe what happens.

4. Change the condition ```grade < 60``` to ```grade != 60```. Observe what happens. 

5. Add an ```else``` statement that outputs “Fail”.

Example code is found in the [grade.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/2.%20Conditionals%20and%20Logic/grade.cpp) file.

## pH
In chemistry, [pH](https://en.wikipedia.org/wiki/PH) is a scale used to specify the acidity or basicity of an aqueous solution.
1. Write an if, else if, else statement that:
- If ```ph``` is greater than 7, output “Basic”.
- If ```ph``` is less than 7, output “Acidic”.
- If neither, output “Neutral”.

Source code for this program can be found in the [ph.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/2.%20Conditionals%20and%20Logic/ph.cpp) file.

## Pokedex
A pokemon identification program that makes use of a switch statement.

![alt text](https://media3.giphy.com/media/DfPZI9D6kRij6/giphy.webp?cid=ecf05e47a80816f7303d1aa1ad7c31cc241623c9635c5f24&rid=giphy.webp)

1. Open the [pokedex.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/2.%20Conditionals%20and%20Logic/pokedex.cpp) file and add 3 more cases to the switch statement right before ```default```:
- ```case 10``` that outputs “Pidgey”
- ```case 11``` that outputs “Pidgeotto”
- ```case 12``` that outputs “Pidgeot”

## Space

A program that helps keep track of weight and BMI on different planets.

1. The program should ask the user what their earth weight is.
2. Ask the user to enter a number for the planet they want to visit.
3. The program should compute the user's weight on the destination planet.

Here is the table of conversion:

| # | Planet  | Relative Gravity |
|---|---------|------------------|
| 1 | Venus   | 0.78             |
| 2 | Mars    | 0.39             |
| 3 | Jupiter | 2.65             |
| 4 | Saturn  | 1.17             |
| 5 | Uranus  | 1.05             |
| 6 | Neptune | 1.23             |

The source code can be found in the [space.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/2.%20Conditionals%20and%20Logic/space.cpp) file. 
