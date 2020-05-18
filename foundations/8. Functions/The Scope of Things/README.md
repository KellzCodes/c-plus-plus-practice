# The Scope of Things

1. Start with this code:

```
#include <iostream>

std::string secret_knowledge = "https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/The%20Scope%20of%20Things/onyourexcitingjourneylearningtocodeyouwillfindthis.gif";

void enter_code(int passcode) {
  
  if (passcode == 0310) {
    
    std::cout << secret_knowledge << "\n";
    
  } else {
    
    std::cout << "Sorry, incorrect!\n";
    
  }
}

int main() {
  
  std::cout << secret_knowledge << "\n";
  
  enter_code(0310);
  
}
```

2. If you run the code, you can print ```secret_knowledge``` right in ```main()``` without entering the passcode. Yikes!

	Only people who enter the correct passcode should have access to that knowledge.

	Move ```secret_knowledge``` into local scope so that it only prints from the function call when the correct code is entered.

3. Nice work! Now it’s time to get rid of that error.

	Remove the line in ```main()``` that prints ```secret_knowledge``` directly without doing any math.

Example code can be found in the [main.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/The%20Scope%20of%20Things/main.cpp) file.