#include <iostream>

int main() {
  // Declare fahrenheit and celsius
  double tempf;
  double tempc;
  
  // Ask the user
  std::cout << "Enter the temperature in Fahrenheit:";
  // Store user input in tempf variable
  std::cin >> tempf;
  
  // Convert tempf to tempc
  tempc = (tempf - 32) / 1.8;
  
  // Print result
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}
