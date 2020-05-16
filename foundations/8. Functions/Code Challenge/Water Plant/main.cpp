#include <iostream>

// Define needs_water() here:
std::string needs_water(int days, bool is_succulent){
  if(is_succulent == false && days > 3){
    return "Time to water the plant.";
  }
  else if(is_succulent == true && days <= 12){
    return "Don't water the plant!";
  }
  else if(is_succulent == true && days >= 13){
    return "Go ahead and give the plant a little water.";
  }
  else{
    return "Don't water the plant!";
  }
}


int main() {
  
  std::cout << needs_water(10, false) << "\n";
  
}