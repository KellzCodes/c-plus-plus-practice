#include <iostream>
#include "song.hpp"

int main() {
  // instantiate song object
  Song back_to_black("Back to Black", "Amy Winehouse");

  // print each attribute of song object
  std::cout << back_to_black.get_title() << "\n" << back_to_black.get_artist(); 
}