#include <iostream>
#include <cmath>

int main() {
  // Declare the 3 variables
  double a;
  double b;
  double c;
  
  // Output prompt for user
  std::cout << "Enter a: ";
  // user input is put in variable a
  std::cin >> a;
  
  // Output prompt for user
  std::cout << "Enter b: ";
  // user input is put in variable b
  std::cin >> b;
  
  // Output prompt for user
  std::cout << "Enter c: ";
  // user input is put in variable c
  std::cin >> c;
  
  // Declare the 2 solutions
  double root1;
  double root2;
  
  // Initialize the solutions
  root1 = ((0-b) + std::sqrt((b * b)-4*a*c))/(2*a);
  root2 = ((0-b) - std::sqrt((b * b)-4*a*c))/(2*a);
  
  // Print the answers
  std::cout << "root1: " << root1 << "\n";
  std::cout << "root2: " << root2 << "\n";
}