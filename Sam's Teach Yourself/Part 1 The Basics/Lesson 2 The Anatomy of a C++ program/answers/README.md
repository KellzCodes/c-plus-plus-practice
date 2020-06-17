# Answers for Lesson 2

## Quiz

1.	Code in C++ is case sensitive. ```Int``` is not acceptable to the compiler as an integer type ```int```.
2.	Yes. 

```
/* if you comment using this C-style syntax then you can span your comment over multiple lines */
```
## Exercises

1.	It fails because case-sensitive C++ compilers don't know what ```std::Cout``` is or why the string following it doesn't start with an opening quote. Additionally, the declaration of main should always return an ```int```.

2. Here is the corrected version:

```
#include <iostream> 
int main (){
	std::cout << "Is there a bug here?" • // no bug anymore  return 0;
}

```

3. This program derived from Listing 2.4 demonstrates subtraction and multiplication:

```
#include <iostream>  
#using namespace std;
// Function declaration i int DemoConsoleOutput();
int main (){
	// Call i.e. invoke the function
	DemoConsoleOutput();
	return 0;
}

// Function definition int DemoConsoleOutput(){
	cout << "Performing subtraction 10 - 5 = " << 10 - 5 << endl;
	cout << "Performing multiplication 10 * 5 = " << 10 * 5 << endl;
	return 0;
}
```

**Output**
	> Performing subtraction 10 - 5 = 5
	> Performing multiplication 10 * 5 = 50