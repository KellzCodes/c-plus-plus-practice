#include <iostream>

int main() {
  
  double ph = 4.6;
  
  // if ph is greater than 7 print "Basic"
  if (ph > 7){
    std::cout << "Basic\n";
  }
  // if ph is less than 7 print "Acidic"
  else if (ph < 7){
    std::cout << "Acidic\n";
  }
  // Otherwise print "Neutral"
  else{
    std::cout << "Neutral\n";
  } 
}