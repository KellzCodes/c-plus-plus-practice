# Vectors

Storing data with vectors, a sequence of elements that you can access by an index.

- [Creating a Vector](#Creating-a-Vector)
- [Initializing a Vector](#Initializing-a-Vector)
- [Index](#Index)
- [Adding and Removing Elements](#Adding-and-Removing-Elements)
- [.size()](#size)
- [Operations](#Operations)
- [Review](#Review)
- [Whale Talk Project](#Whale-Talk-Project)

To do just about anything of interest in a program, we need a group of data to work with.

For example, our program might need:

- A list of Twitter’s trending tags
- A set of payment options for a car
- A catalog of eBooks read over the last year

The need for storing a collection of data is endless.

We are familiar with data types like ```int``` and ```double```, but how do we store a group of ```int```s or a group of ```double```s?

In this lesson, we will start with one of the simplest, and arguably the most useful, ways of storing data in C++: a vector.

A *vector* is a sequence of elements that you can access by index.

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/7.%20Vectors/vector.gif" alt="vector" width="500"/>

### Creating a Vector

The ```std::vector``` lives in the ```<vector>``` header. So first, we need to add this line of code at the top of the program:

```
#include <vector>
```

For review, ```#include``` is a preprocessor directive that tells the compiler to include whatever library that follows. In our case that is the standard ```vector``` library.

And the syntax to create a vector looks like:

```
std::vector<type> name;
```

So to define a vector of ```int```s called ```calories_today```:

```
std::vector<int> calories_today;
```

Inside the angle brackets is the data type of the vector. After the angle brackets is the name of the vector.

**Note**: The type of the vector (i.e., what data type is stored inside) cannot be changed after the declaration.

Example code can be found in the [Creating a Vector](https://github.com/keldavis/c-plus-plus-practice/tree/master/foundations/7.%20Vectors/Creating%20a%20Vector) folder.

### Initializing a Vector

Now we know how to create a vector, we can also initialize a vector, giving it values, as we are creating it in the same line.

For example, instead of just creating a double vector named location:

```
std::vector<double> location;
```

We can create *and* initialize ```location``` with specific values:

```
std::vector<double> location = {42.651443, -73.749302};
```

Here, we are storing [a latitude and a longitude](https://en.wikipedia.org/wiki/Geographic_coordinate_system).

So it would look something like this:

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/7.%20Vectors/lat_lon.png" alt="lat_lon" width="500"/>

Another way we can initialize our vector is by *presizing*, or setting the size.

Suppose we want to create and initialize a vector with two elements. However, we don’t know what values we want to add yet:

```
std::vector<double> location(2);
```

Here, we are creating a ```double``` vector and setting the initial size to two using parentheses.

It would look something like this:

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/7.%20Vectors/vectors1.png" alt="vectors1" width="500"/>

Because ```0.0``` is the default value for ```double```.

Example code can be found in the [Initializing a Vector](https://github.com/keldavis/c-plus-plus-practice/tree/master/foundations/7.%20Vectors/Initializing%20a%20Vector) folder.

### Index

Now that we have a vector, how do we access an individual element? This is where index comes into play.

An *index* refers to an element’s position within an ordered list. Vectors are 0-indexed, meaning the first element has index 0, the second index 1, and so on.

For example, suppose we have a ```char``` vector with all the [vowels](https://en.wikipedia.org/wiki/Vowel):

```
std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
```

It should look something like this:

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/7.%20Vectors/Index/index1.png" alt="index1" width="500"/>

- The character at index ```0``` is ```'a'```.
- The character at index ```1``` is ```'e'```.
- The character at index ```2``` is ```'i'```.
- The character at index ```3``` is ```'o'```.
- The character at index ```4``` is ```'u'```.

To output each of the elements, we can do:

```
std::cout << vowels[0] << "\n";
std::cout << vowels[1] << "\n";
std::cout << vowels[2] << "\n";
std::cout << vowels[3] << "\n";
std::cout << vowels[4] << "\n";
```

Using the notation ```vector[index]``` with square brackets after the vector name and the element’s index number inside.

This will output:

```
a
e
i
o
u
```

Example code can be found in the [Index](https://github.com/keldavis/c-plus-plus-practice/tree/master/foundations/7.%20Vectors/Index) folder

### Adding and Removing Elements

Often, we start with a vector that’s either empty or a certain length. As we read or compute data we want, we can grow the vector as needed.

#### .push_back()

To add a new element to the “back”, or end of the vector, we can use the ```.push_back()``` function.

For example, suppose we have a vector called ```dna``` with three letter codes of [nucleotides](https://en.wikipedia.org/wiki/Nucleotide):

```
std::vector<std::string> dna = {"ATG", "ACG"};
```

It would look like:

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/7.%20Vectors/Adding%20and%20Removing%20Elements/adding1.png" alt="adding1" width="500"/>

We can add elements using ```.push_back()```:

```
dna.push_back("GTG");
dna.push_back("CTG");
```

So now dna would look like:

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/7.%20Vectors/Adding%20and%20Removing%20Elements/adding2.png" alt="adding2" width="500"/>

#### .pop_back()

You can also remove elements from the “back” of the vector using ```.pop_back()```.

```
dna.pop_back();
```

Notice how nothing goes inside the parentheses.

The vector would now look like:

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/7.%20Vectors/Adding%20and%20Removing%20Elements/adding3.png" alt="adding3" width="500"/>

because ```CTG``` is removed!

**Note**: If you have programmed in other languages, be aware that ```.pop_back()``` has no return value in C++.

Example code can be found in the [Adding and Removing Elements](https://github.com/keldavis/c-plus-plus-practice/tree/master/foundations/7.%20Vectors/Adding%20and%20Removing%20Elements) folder.

### Size
### .size()

```<std::vector>``` not only stores the elements; it also stores the size of the vector:

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/7.%20Vectors/size/size.png" alt="size" width="500"/>

The ```.size()``` function returns the number of elements in the vector.

For example, suppose we have a ```std::string``` vector with Sonny’s grocery list:

```
std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
```

It should look something like this:

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/7.%20Vectors/size/size1.png" alt="size1" width="500"/>

- The string at index ```0``` is ```"Hot Pepper Jam"```.
- The string at index ```1``` is ```"Dragon Fruit"```.
- The string at index ```2``` is ```"Brussel Sprouts"```.

```
std::cout << grocery.size() << "\n";
```

will return

```
3
```

Notice how nothing goes in the parentheses.

Example code can be found in the [size](https://github.com/keldavis/c-plus-plus-practice/tree/master/foundations/7.%20Vectors/size) folder

### Operations

So what happens when you want to change each of the values within a vector?

You can use a ```for``` loop!

For example, suppose we have an ```int``` vector that looks like this:

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/7.%20Vectors/Operations/operations1.png" alt="operations1" width="500"/>

You can write a ```for``` loop that iterates from ```0``` to ```vector.size()```. And here’s the cool part: you can use the counter of the ```for``` loop as the index! Woah.

```
for (int i = 0; i < vector.size(); i++) {

  vector[i] = vector[i] + 10;

}
```

This will change the vector to:

<img src="https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/7.%20Vectors/Operations/operations2.png" alt="operations2" width="500"/>

Here, we incremented ```i``` from ```0``` to ```vector.size()```, which is 3. During each iteration, we are adding 10 to the element at position ```i```:

- When ```i = 0```, we added 10 to ```vector[0]```
- When ```i = 1```, we added 10 to ```vector[1]```
- When ```i = 2```, we added 10 to ```vector[2]```

Example code can be found in the [Operations](https://github.com/keldavis/c-plus-plus-practice/tree/master/foundations/7.%20Vectors/Operations) folder.

### Review

Congratulations! You have learned about how to store groups of data into vectors in C++. 🙌

Here are some of the things that we learned:

- Vectors are a sequence of elements that you can access by an index.
```
std::vector<int> even = {2, 4, 6, 8, 10};
```
- The first index in a vector is ```0```.

- Some of the functions that come with vectors:

	- ```.push_back()```
	- ```.pop_back()```
	- ```.size()```

- We can use a ```for``` loop to iterate through a vector.

Example code can be found in the [Review](https://github.com/keldavis/c-plus-plus-practice/tree/master/foundations/7.%20Vectors/Review) folder

# Whale Talk Project

In this next project, we’re going to practice using vectors and loops in C++, so you can hone your skills and feel confident taking them to the real world. What’s next? Talking like a whale, vowel matching, and nested for loop. You got this!

Takes a phrase like ```"turpentine and turtles"``` and translate it into its “whale talk” equivalent, ```"uueeieeauuee"```.

There are a few simple rules for translating text to whale language:

- There are no consonants. Only vowels excluding the letter y.
- The ```u```‘s and ```e```‘s are extra long, so we must double them.

Once we have converted text to the whale language, the result is sung slowly, as is custom in the ocean.

Write a **whale.cpp** program that accomplishes this translation using loops and vectors.

Project details can be found in the [Whale Talk Project](https://github.com/keldavis/c-plus-plus-practice/tree/master/foundations/7.%20Vectors/Whale%20Talk%20Project) folder.