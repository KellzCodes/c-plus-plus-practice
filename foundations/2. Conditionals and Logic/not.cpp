#include <iostream>

int main() {
  
  bool logged_in = false;
  
  // If the user is !logged_in, then print the phrase "Try again".
  if(!logged_in){
    std::cout << "Try again\n";
  }
  
  // Alternate solution
  if(not logged_in){
    std::cout << "Try again\n";
  }
}