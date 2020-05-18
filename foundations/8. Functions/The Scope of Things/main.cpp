#include <iostream>

void enter_code(int passcode) {
  std::string secret_knowledge = "https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/8.%20Functions/The%20Scope%20of%20Things/onyourexcitingjourneylearningtocodeyouwillfindthis.gif";

  
  if (passcode == 0310) {
    
    std::cout << secret_knowledge << "\n";
    
  } else {
    
    std::cout << "Sorry, incorrect!\n";
    
  }
}

int main() {
  
  enter_code(0310);
  
}