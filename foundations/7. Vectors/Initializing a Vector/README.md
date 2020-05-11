# Initializing a Vector

1. Start with this code:

```
#include <iostream>
#include <vector>

int main() {
   
  std::vector<double> subway_adult = {800, 1200, 1500};
  
  // Give subway_child some values:
  
  std::vector<double> subway_child;
  
}
```

2. Suppose the Tokyo Subway costs are as follows:

	| Ticket  | Adult | Child |
	|---------|-------|-------|
	| 24-hour | ¥800  | ¥400  |
	| 48-hour | ¥1200 | ¥600  |
	| 72-hour | ¥1500 | ¥750  |

	We have initialized the ```subway_adult``` already for you.

	Initialize the ```subway_child``` vector with:

	- ```400```
	- ```600```
	- ```750```

	**Note**: The vector can still be ```double``` even though the values entered are ```int```s.

Example code can be found in the [tokyo.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/7.%20Vectors/Initializing%20a%20Vector/tokyo.cpp) file