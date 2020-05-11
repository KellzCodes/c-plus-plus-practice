#include <iostream>

int main() {
  
  int power = 9000;
  
  // Create pointer
  int* ptr = nullptr;
  
  // Later in the program...
  ptr = &power;
  
  // Print ptr
  std::cout << ptr << "\n";
  
}