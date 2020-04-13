#include <iostream>

int Main() {
  
  int num = 0;
  int sum = 0;
  
  std::cout << "Enter a number: ";
  std::cin >> num;
  
  for (int i = 1; i <= num; i++) {
    
    sum = sum + i;
    std::cout << i << " ";
    
  }
  
  std::cout << "Sum: " << sum << "\n";
  
}