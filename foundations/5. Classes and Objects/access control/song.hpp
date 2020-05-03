#include <string>

class Song {
  // attributes
  std::string title;
  std::string artist;

public:
  void add_title(std::string new_title);
  std::string get_title();
  // create method to set the artist
  void add_artist(std::string new_artist);
  // create method to get the artist
  std::string get_artist();
};