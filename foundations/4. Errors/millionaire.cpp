#include <iostream>

int main() {
  
  char answer;
  int score = 0;
  
  std::cout << "Who Wants To Be a Millionaire\n\n"
  
  std::cout << "Question 1)\n\n";
  
  std::cout << "For ordering his favorite beverages on demand, LBJ had four buttons installed in the Oval Office labeled 'Coffee', 'Tea', 'Coke', and what?\n\n";
  
  std::cout << "A. Fresca   B. V8  \n";
  std::cout << "C. Yoo-hoo  D. A&W \n\n";
  
  std::cout << "Enter your answer: ";
  std::cin >> answer;
  
  if (answer == 'A' || answer == 'a') {
    
    score = score + 100;
    std::cout << "Correct!\n";
    
  }
  
}