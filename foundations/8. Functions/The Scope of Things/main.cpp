#include <iostream>

void enter_code(int passcode) {
  std::string secret_knowledge = "https://s3.amazonaws.com/codecademy-content/courses/regex/onyourexcitingjourneylearningtocodeyouwillfindthis.gif";

  
  if (passcode == 0310) {
    
    std::cout << secret_knowledge << "\n";
    
  } else {
    
    std::cout << "Sorry, incorrect!\n";
    
  }
}

int main() {
  
  enter_code(0310);
  
}