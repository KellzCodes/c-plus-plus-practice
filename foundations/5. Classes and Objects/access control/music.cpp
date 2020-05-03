#include <iostream>
#include "song.hpp"

int main() {
  // create song object
  Song electric_relaxation;
  // add an artist to song object
  electric_relaxation.add_artist("A Tribe Called Quest");
  // use get_artist() method and print result
  std::cout << electric_relaxation.get_artist();
}