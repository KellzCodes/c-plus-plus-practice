#include <iostream>

int main() {
  
  int hunger = true;
  int anger = true;
  
  // If hunger is true and anger is true, then print out the word "Hangry".
  
  if (hunger == true and anger == true){
    std::cout << "Hangry\n";
  }
  
  // alternate solution
  if (hunger && anger){
    std::cout << "Hangry\n";
  }
  
}