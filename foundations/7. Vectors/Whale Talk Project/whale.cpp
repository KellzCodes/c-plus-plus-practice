  
#include <iostream>
#include <vector>
#include <string>

int main() {
  
  // Declare an std::string
  std::string input = "Turpentine and turtles.";

  // Create a char vector named vowels
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};

  // create a vector to store the result
  std::vector<char> whale_talk;

   // write a for loop that iterates through the input string.
  for (int i = 0; i < input.size(); i++) {
    // for loop that iterates through the vowel vector
    for (int j = 0; j < vowels.size(); j++) {
      /* Write an if statement that compares input[i] with vowels[j].

If they are equal, add the character to the result vector using .push_back().
      */
      if (input[i] == vowels[j]) {

        whale_talk.push_back(input[i]);

       /*
       Write an if statement that checks if each letter in the input string is equal to 'e'. If so, .push_back() input[i] to the result vector.
       */
        if (input[i] == 'e' || input [i] == 'u') {

        whale_talk.push_back(input[i]);
        
        }
      
      }
      
    }
  
  }
  
  /*
  for loop that goes through the result vector and outputs each of the elements.
  */
  for (int k = 0; k < whale_talk.size(); k++) {
    
    std::cout << whale_talk[k];
    
  }
  
  std::cout << "\n";
  
}