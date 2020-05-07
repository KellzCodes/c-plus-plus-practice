#include <iostream>
#include "profile.hpp"

int main() {
  // create a profile object
  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");

  // add hobbies to profile object
  sam.add_hobby("listening to audiobooks and podcasts");
  sam.add_hobby("playing rec sports like bowling and kickball");
  sam.add_hobby("writing a speculative fiction novel");
  sam.add_hobby("reading advice columns");
  sam.add_hobby("playing video games");

  // print profile information
  std::cout << sam.view_profile();
}