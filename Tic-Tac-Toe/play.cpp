#include <iostream>
#include <vector>

// Tic tac toe board has 9 spaces
std::string board[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
// player 
int player = 1;

// board position
int position

// Intro
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

// determine which board is a winner
bool isWinner(){
  bool winner = false;
  // check rows
  if ((board[0] == board[1]) && (board[1] == board[2]) && board[0] != " ") {
    winner = true;
  } else if ((board[3] == board[4]) && (board[3] == board[5]) && board[3] != " ") {
    winner = true;
  } else if ((board[6] == board[7]) && (board[6] == board[8]) && board[6] != " ") {
    winner = true;
  }

  // check columns
  else if ((board[0] == board[3]) && (board[0] == board[6]) && board[0] != " ") {
    winner = true;
  } else if ((board[1] == board[4]) && (board[1] == board[7]) && board[1] != " ") {
    winner = true;
  } else if ((board[2] == board[5]) && (board[2] == board[8]) && board[2] != " ") {
    winner = true;
  } 
  
  // check diagonals
  else if ((board[0] == board[4]) && (board[0] == board[8]) && board[0] != " ") {
    winner = true;
  }
  else if ((board[2] == board[4]) && (board[2] == board[6]) && board[2] != " ") {
    winner = true;
  }

  // return if board is a winner
  return winner;
}

// determine if a space on the board is full
bool isFull(){
  bool full = true;
  // traverse through board position
  for (int i = 0; i < 9; i++){
    // if a board position is occupied by a space, it is not full
    if (board[i] == " "){
      full = false;
    }
  }
  return full;
}

// Draw the board
void draw(){
  std::cout << "     |     |      \n";

  std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";

  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";

  std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";

  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";

  std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
  std::cout << "     |     |      \n";

  std::cout << "\n";
}

// Set the board position
void set_position(){
  std::cout << "Player " << player << "'s Turn (Enter 1-9): ";

  /*
  while the user input prompt is open, check to see if 
  the input is a valid answer. While the answers aren't
  valid, ask the player to put in a valid number. 
  */
  while (!(std::cin >> position)) {
    std::cout << "Player " << player << ", please enter a valid number between 1 and 9: ";
    // reset the input
    std::cin.clear();
    /*
    read and ignore the input stream until
    the next line
    */
    std::cin.ignore();
  }
  
  std::cout << "\n";

  /*
  While the board position is not a space, 
  tell the user the position is already full
  */
  while (board[position - 1] != " ") {

    std::cout << "Oops, there's already something in that position!\n\n";

    std::cout << "Player " << player << "'s Turn (Enter 1-9): ";
    std::cin >> position;

    std::cout << "\n";
  }
  
}

// Update the board
void update_board() {
  // player 1 is X
  if (player % 2 == 1) {
    board[position - 1] = "✖";
  } 
  // player 2 is O
  else {
    board[position - 1] = "⊙";
  }
}