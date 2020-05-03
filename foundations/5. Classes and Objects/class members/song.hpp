#include <string>

// add the Song class here:
class Song {
  // attribute
  std::string title;
  public:
    // method
    void add_title(std::string new_title);
    std::string get_title();
};
