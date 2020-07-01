# Answers for Lesson 6

## Quiz

1.	You indent not for sake of the compiler, but for the sake of other programmers (humans) who might need to read or understand your code. 
 
2.	You avoid it to keep your code from getting unintuitive and expensive to maintain. 

3. See the code in the solution to Exercise 1 that uses the decrement operator.

4. As the condition in the for statement is not satisfied, the loop won't execute even once and the cout statement it contains is never executed.  

## Exercises

1. You need to be aware that array indexes are zero-based and the last element is at index Length — 1:

```
#include <iostream>
using namespace std;

int main(){
	const in ARRAY_LEN = 5;
	int myNums[ARRAY_LEN] = {-55, 45, 9889, 0, 45};

	for (int index = ARRAY_LEN - 1; index >= 0; --index)
		cout << "myNums[" << index << "] = " << myNums[index] << endl;

	return 0;
}
```

#### Output 

```
myNums[4] = 45
myNums[3] = 0
myNums[2] = 9889
myNums[1] = 45
myNums[0] = -55
```

2. One nested loop equivalent of [Listing 6.13a]() and [Listing 6.13b]() that adds elements in two arrays in the reverse order is demonstrated below:

```
#include <iostream>
using namespace std;

int main(){
	const int ARRAY1_LEN = 3;
	const int ARRAY2_LEN = 2;

	int myNums1[ARRAY1_LEN] = {35, -3, 0};
	int MyInts2[ARRAY2_LEN] = {20, -1};

	cout << "Adding each int in myNums1 by each in MyInts2:" << endl;

	for (int index1 = ARRAY1_LEN - 1; index1 >= 0; --index1)
		for(int index2 = ARRAY2_LEN - 1; index2 >= 0; --index2)
			cout << myNums1[index1] << " + " << MyInts2[index2] \
			<< " = " << myNums1[index1] + MyInts2[index2] << endl;

	return 0;
}
```

#### Output

```
Adding each int in myNums1 by each in MyInts2:
0 + -1 = -1
0 + 20 = 20
-3 + -1 = -4
-3 + 20 = 17
35 + -1 = 34
35 + 20 = 55
```

3. You need to replace the constant integer ```numsToCa1culate``` with a value fixed at 5 with code that asks the user the following: 

```
cout << "How many Fibonacci numbers you wish to calculate ";
int numsToCalculate = 0; // no const 
cin >> numsToCalculate;
```

4. The switch-case construct using enumerated constants that tells if a color is in the rainbow is as below:

```
#include <iostream>
using namespace std;

int main(){
	enum Colors{
		Violet = 0,
		Indigo,
		Blue,
		Green,
		Yellow,
		Orange,
		Red,
		Crimson,
		Beige,
		Brown,
		Peach,
		Pink,
		White,
	};

	cout << "Here are the available colors: " << "Here are the available colors: " << endl;
	cout << "Violet: " << Violet << endl;
	cout << "Indigo: " << Indigo << endl;
	cout << "Blue: " << Blue << endl;
	cout << "Green: " << Green << endl;
	cout << "Yellow: " << Yellow << endl;
	cout << "Orange: " << Orange << endl;
	cout << "Red: " << Red << endl;
	cout << "Crimson: " << Crimson << endl;
	cout << "Beige: " << Beige << endl;
	cout << "Brown: " << Brown << endl;
	cout << "Pink: " << Pink << endl;
	cout << "White: " << White << endl;

	cout << "Choose one by entering code: ";
	int YourChoice = Blue; // initial
	cin >> YourChoice;

	switch (YourChoice){
		case Violet:
		case Indigo:
		case Blue:
		case Green:
		case Yellow:
		case Orange:
		case Red:
			cout << "Bingo, your choice is a Rainbow color!" << endl;
			break;

		default:
			cout << "The color you chose is not in the rainbow" << endl;
			break;
	}

	return 0;
}
```

#### Output

```
Here are the available colors: Here are the available colors:
Violet: 0
Indigo: 1
Blue: 2
Green: 3
Yellow: 4
Orange: 5
Red: 6
Crimson: 7
Beige: 8
Brown: 9
Pink: 11
White: 12
Choose one by entering code: 4
Bingo, your choice is a Rainbow color!
```

5.	The programmer unintentionally makes an assignment to 10 in the ```for``` loop condition statement. 

6.	The ```while``` statement is followed by a ```null``` statement ';' on the same line. Thus, the intended loop following the ```while``` is never reached and because ```loopCounter``` that governs the ```while``` is never incremented, the ```while``` does not end and the statements following it are never executed.

7.	Missing ```break``` statement (that is, the ```default``` case always executes).