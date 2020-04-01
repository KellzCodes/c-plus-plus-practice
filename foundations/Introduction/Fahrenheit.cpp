#include <iostream>

int main() {
	// Degrees fahrenheit
  double tempf = 43;
  // Degrees Celsius
  double tempc;
  
  // Convert fahrenheit to celsius
  tempc = (tempf - 32)/1.8;
  
  // Print
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
}
