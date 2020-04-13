#include <iostream>

int main() {
  
  int i = 0;
  int square = 0;
  
  // Write a while loop that calculates and prints squares from 0 to 10
   while (i < 10) {

    square = i * i;

    std::cout << i << "  " << square << "\n";

    i++;

  }
  
  // Alternate solution
    while (i < 10) {

    std::cout << i << "  " << i * i << "\n"; 

    i++; 

  } 
  
}