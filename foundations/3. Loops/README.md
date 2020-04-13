# Loops

A loop is a programming tool that repeats some code or a set of instructions until a specified condition is reached. As a programmer, you’ll find that you rely on loops all the time! You’ll hear the generic term “iterate” when referring to loops; iterate simply means “to repeat”.

When we see that a process has to repeat multiple times in a row, we write a loop. Loops allow us to create efficient code that automates processes to make scalable, manageable programs.

![alt text](https://i345.photobucket.com/albums/p390/keldavis5/roundabout_zpsflm1yu8e.gif)

## While Loop

A ```while``` loop statement repeatedly executes the code block within as long as the condition is ```true```. The moment the condition becomes ```false```, the program will exit the loop.

**Note** that the ```while``` loop might not ever run. If the condition is ```false``` initially, the code block will be skipped.

```
while (password != 1234) {

  std::cout << "Try again: ";
  std::cin >> password;

}
```

## For Loop

A ```for``` loop executes a code block a specific number of times. It has three parts:
- The initialization of a counter
- The continue condition
- The increment/decrement of the counter

This example prints 0 to 9 on the screen.

```
for (int i = 0; i < 10; i++) {
  
  std::cout << i << "\n";
  
}
```