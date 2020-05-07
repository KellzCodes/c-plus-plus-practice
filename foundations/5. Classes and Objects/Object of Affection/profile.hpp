#include <string>
#include <vector>
#include <iostream>

// add the profile class
class Profile {
  private:
    // attributes
    std::string name, city, country;
    std::string pronouns = "they/them";
    int age;
    std::vector<std::string> hobbies;
  
  public:
    // constructor
    Profile(std::string name, int age, std::string city, std::string country, std::string pronouns);
    
    // view profile info
    std::string view_profile();

    // add hobby
    void add_hobby(std::string hobby);
};