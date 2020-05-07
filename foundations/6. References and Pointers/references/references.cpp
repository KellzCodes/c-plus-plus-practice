#include <iostream>

int main() {
  // declare variable named soda
  int soda = 99;

  // declare variable named pop and make it rerence soda
  int &pop = soda;

  // add 1 to pop
  pop++;

  // print out soda and pop to see if they are the same
  std::cout << soda << "\n" << pop;
  
  // They are the same
}