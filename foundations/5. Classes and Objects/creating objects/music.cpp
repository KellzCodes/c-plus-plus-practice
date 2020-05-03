#include <iostream>
#include "song.hpp"

int main() {
  // create (or instantiate) a new song object
  Song electric_relaxation;

  // use add_title() method to add a title to the song object
  electric_relaxation.add_title("Electric Relaxation");

  // use get_title() method to retrieve song title and print it to the terminal
  std::cout << electric_relaxation.get_title();
}