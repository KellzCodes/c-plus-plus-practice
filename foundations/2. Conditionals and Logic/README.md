# Conditionals And Logic
## A simple repository that will explore how programs make decisions by evaluating conditions and introduce logic into our code.

## Table of Contents
- [If Statement](#If-Statement)
- [Relational Operators](#Relational-Operators)
- [Else Clause](#Else-Clause)
- [Else if](#Else-if)
- [Switch Statement](#Switch-Statement)
- [Logical Operator: &&](#Logical-AND-Operator)
- [Logical Operator: ||](#Logical-OR-Operator)
- [Logical Operator: !](#Logical-NOT-Operator)
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

### Logical AND Operator

The ```and``` logical operator is denoted by ```&&```.

It returns ```true``` if the condition on the left *and* the condition on the right are both ```true```. Otherwise, it returns ```false```.

Here’s the truth table:

| a     | b     | a && b |
|-------|-------|--------|
| false | false | false  |
| false | true  | false  |
| true  | false | false  |
| true  | true  | true   |

For instance:
- ```( 1 < 2 && 2 < 3 )``` returns ```true```
- ```( 1 < 2 && 2 > 3 )``` returns ```false```

**Note**: The keyword ```and``` can also be used in the place of ```&&```.

### Logical OR Operator

The ```or``` logical operator is denoted by ```||```.

It returns ```true``` when the condition on the left is ```true``` or the condition on the right is ```true```. Only one of them needs to be ```true```.

Here’s the truth table:

| a     | b     | a||b  |
|-------|-------|-------|
| false | false | false |
| false | true  | true  |
| true  | false | true  |
| true  | true  | true  |



For instance:

- ```( 1 < 2 || 2 > 3 )``` returns ```true```
- ```( 1 > 2 || 2 > 3 )``` returns ```false```

**Note**: The keyword ```or``` can be used in the place of ```||```.

### Logical NOT Operator

The ```not``` logical operator is denoted by ```!```.

It reverses the ```bool``` outcome of the expression that immediately follows.

Here’s the truth table:

| a     | !a    |
|-------|-------|
| true  | false |
| false | true  |

For instance:

- ```( !true )``` returns ```false```
- ```( !false )``` returns ```true```
- ```( !(10 < 11) )``` returns ```false```

**Note**: The keyword ```not``` can be used in the place of ```!```.

# Basic Programs
- [Coin Flip](#Coin-Flip)
- [Grade](#Grade)
- [pH](#pH)
- [Pokedex](#Pokedex)
- [And](#And)
- [Or](#Or)
- [Not](#Not)
- [Leap Year](#Leap-Year)
- [Magic 8 ball](#Magic-Eight-Ball)
- [Harry Potter Sorting Hat Quiz](#Harry-Potter-Sorting-Hat-Quiz)

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

## And

Simple program that demonstrates logical ```&&```

1. Declare and initialize variables:
  - ```int hunger = true;```
  - ```int anger = true;```

2. Write the following if statement:
  - If ```hunger``` is ```true``` *and* ```anger``` is ```true```, then print out the word ```"Hangry"```.

Source code can be found in [and.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/2.%20Conditionals%20and%20Logic/and.cpp) file.

## Or

Simple program that demonstrates logical ```||```

1. Declare an integer named ```day``` and set it equal to 6

2. Write the following ```if``` statement:
- If ```day``` is equal to 6 or ```day``` is equal to 7, then print the word ```"Weekend"```.

The source code for this program can be found in the [or.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/2.%20Conditionals%20and%20Logic/or.cpp) file.

## Not

Simple program that demonstrates logical ```!```

1. Declare a ```bool``` named ```logged_in``` and set it equal to ```false```.
2. Write the following ```if``` statement:
- If the user is ```!logged_in```, then print the phrase ```"Try again"```.

The source code for this program can be found in the [not.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/2.%20Conditionals%20and%20Logic/not.cpp) file.

## Leap Year

A simple program that displays whether or not a year falls on a leap year. Demonstrates use of logical operators.

Write a **leap_year.cpp** program that:

1. Takes a year as input.
2. Checks to see if the year is a four-digit number.
3. Displays whether or not the year falls on a [leap year](https://en.wikipedia.org/wiki/Leap_year).

There are 3 criteria that must be taken into account to identify a leap year:
- If the year can be evenly divided by 4 then it is a leap year, however…
- If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year.
- If that year is evenly divisible by 400, then it is a leap year.

The source code for this program can be found in the [leap_year.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/2.%20Conditionals%20and%20Logic/leap_year.cpp) file.

## Magic Eight Ball

A simple program that will output a random fortune each time it executes.

![alt text](https://s3.amazonaws.com/codecademy-content/courses/learn-cpp/conditionals-and-logic/magic8ball.gif)

1. Create a skeleton for the program. Add:

  ```
  #include <iostream>

  int main() {

    // Your future is here

  }
  ```

2. The first line should be the same across all executions, so let’s output the phrase ```MAGIC 8-BALL:```.

3. Similar to the Coin Flip program, we need to generate a random number.

  C++ has a ```std::rand()``` function from **cstdlib** that generates a random number.

  For example, if you add ```#include <cstdlib>```, you can use the ```std::rand()``` function:

  ```
  std::cout << std::rand() << "\n";
  std::cout << std::rand() << "\n";
  std::cout << std::rand() << "\n";
  ```

  It would output something like:

  ```
  1804289383
  846930886
  1681692777
  ```

  So, create an ```int``` variable and set it equal to a random number:

  ```
  int answer = std::rand();
  ```

  And output it in the terminal.

  Don’t forget to add ```#include <cstdlib>``` at the top.

4. There are 20 different text outputs in the official Magic 8-Ball, but let’s write your own. And let’s do 10 of them.

  So we don’t just want any random number. We want a random number from 0-9.

  Change your ```answer``` to:
  ```
  int answer = std::rand() % 10;
  ```

The ```%``` is the modulo symbol that returns the remainder.

5. If you run the program a bunch of times, you will realize that ```answer``` doesn’t change.

  For our program to work, we need to get a different random number for each execution.

  To do so, we need to add this line of code before the declaration of ```answer```:
  ```
  srand(time(NULL));
  ```

This sets the “seed” of the random number generator.

6. Write an ```if``` statement where if ```answer``` is equal to 0, your program outputs the phrase ```It is certain.```

7. Write an ```else``` statement for the 10th answer.

8. And now do the same for the 8 other answers using ```else if```s.

9. Try writing the program using a switch statement instead. 

Sample source code for this program using ```else``` statements can be found in the [magic8.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/2.%20Conditionals%20and%20Logic/magic8.cpp) file.

Sample source code for this program using a ```switch``` statement can be found in the [magic8_switch.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/2.%20Conditionals%20and%20Logic/magic8_switch.cpp) file.

## Harry Potter Sorting Hat Quiz

The Sorting Hat is a talking hat at Hogwarts that magically determines which of the four school Houses.

![alt text](https://s3.amazonaws.com/codecademy-content/courses/learn-cpp/conditionals-and-logic/harrypotter.gif)

1. create a skeleton for the program:
  ```
#include <iostream>

int main() {

  // The magic starts here

}
  ```

2. Every time the Muggle-born quiz taker answers a question, they should receive points to one or more Houses.

  Let’s declare four ```int``` variables: 
  - ```gryffindor``` 
  - ```hufflepuff``` 
  - ```ravenclaw``` 
  - ```slytherin``` 

  And initialize them each to 0.

3. declare another four ```int``` variables to store each of their answers to the four quiz questions:
  - ```answer1```
  - ```answer2```
  - ```answer3```
  - ```answer4```

4. Add a ```std::cout``` statement that tells the Muggle that they have started the quiz with the phrase ```The Sorting Hat Quiz!```.

5. Before moving on, press Save and let’s compile and execute using the terminal to make sure there are no bugs.

6. And now comes the first question!

  Use multiple std::cout statements to display the following question:

  ```
  Q1) When I'm dead, I want people to remember me as:

    1) The Good
    2) The Great
    3) The Wise
    4) The Bold
  ```

7. Then use ```std::cin``` to receive an input from the user.

  Store that input in ```answer1```.

8. Merlin’s beard! We have the user’s answer but now we need… conditionals & logic.

  Write a control flow that:

  - If ```answer1 == 1```, add one point to ```hufflepuff```.

  - Else if ```answer1 == 2```, add one point to ```slytherin```.

  - Else if ```answer1 == 3```, add one point to ```ravenclaw```.

  - Else if ```answer1 == 4```, add one point to ```gryffindor```.

  - Else, output ```Invalid input```.

9. Compile and execute using the terminal. Make sure to debug.

10. And now do the same thing for question 2:
```
  Q2) Dawn or Dusk?

    1) Dawn
    2) Dusk
```

  And use ```std::cin``` to get user’s input and store it in ```answer2```.

11. However, for this question:

  - If ```answer2 == 1```, one point to both ```gryffindor``` and ```ravenclaw```.

  - Else if ```answer2 == 2```, one point to both ```hufflepuff``` and ```slytherin```.

  - Else, output the phrase ```Invalid input```.

12. Do the same thing for question 3:
  ```
  Q3) Which kind of instrument most pleases your ear?

    1) The violin
    2) The trumpet
    3) The piano
    4) The drum
  ```

13. For this question:

  - If ```answer3 == 1```, add one to ```slytherin```.

  - Else if ```answer3 == 2```, add one to ```hufflepuff```.

  - Else if ```answer3 == 3```, add one to ```ravenclaw```.

  - Else if ```answer3 == 4```, add one to ```gryffindor```.

  - Else, output ```Invalid input```.

14. Do the same thing for question 4:
  ```
  Q4) Which road tempts you most?

    1) The wide, sunny grassy lane
    2) The narrow, dark, lantern-lit alley
    3) The twisting, leaf-strewn path through woods
    4) The cobbled street lined (ancient buildings)
  ```

15. For this question:

  - If ```answer4 == 1```, add one to ```hufflepuff```.

  - Else if ```answer4 == 2```, add one to ```slytherin```.

  - Else if ```answer4 == 3```, add one to ```gryffindor```.

  - Else if ```answer4 == 4```, add one to ```ravenclaw```.

  - Else, output ```Invalid input```.

16. Now we need to find out which of the four Houses has the highest answer!

  We will need another variable called ```max``` that starts at 0 and an empty string with:

  ```
  std::string house;
  ```

  And to find the maximum:

  ```
  if (gryffindor > max) {

    max = gryffindor;
    house = "Gryffindor";

  }

  if (hufflepuff > max) {

    max = hufflepuff;
    house = "Hufflepuff";

  }

  if (ravenclaw > max) {

    max = ravenclaw;
    house = "Ravenclaw";

  }

  if (slytherin > max) {

    max = slytherin;
    house = "Slytherin";

  }

  std::cout << house << "!\n";
  ```

  This also outputs the House.

A sample code can be found can be found in the [sortinghat.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/2.%20Conditionals%20and%20Logic/sortinghat.cpp) file.