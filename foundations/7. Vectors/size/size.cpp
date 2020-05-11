#include <iostream>
#include <vector>

int main() {
  
  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
    
  // Add more 
  grocery.push_back("artichoke");
  grocery.push_back("celery");

  // print grocery size
  std::cout << grocery.size();
 
}