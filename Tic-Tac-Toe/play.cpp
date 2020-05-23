#include <iostream>
#include <vector>

// Define functions
void greet(){
  std::cout << "=============\n" << "Tic-Tac_Toe\n" << "=============\n" << "Instructions: The player who succeeds in\n placing three of their marks in a horizontal,\n vertical or diagonal row wins the game.\n";
  std::cout << "\n";
  
  std::cout << "Player 1) ✖\n";
  std::cout << "Player 2) ⊙\n\n";

  std::cout << "Here's the 3 x 3 grid:\n\n";

  std::cout << "     |     |      \n";
  std::cout << "  1  |  2  |  3   \n";
  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";
  std::cout << "  4  |  5  |  6   \n";
  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";
  std::cout << "  7  |  8  |  9   \n";
  std::cout << "     |     |      \n\n";
}