#include "profile.hpp"
#include <vector>

// Profile constructor
Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns){
  name = new_name;
  age = new_age;
  city = new_city;
  country = new_country;
  pronouns = new_pronouns;
}

// define view profile method
std::string Profile::view_profile() {
  // string holds name
  std::string bio = "Name: " + name;
  // add age to bio
  bio += "\nAge: " + std::to_string(age);
  // add city to bio
  bio += "\nCity: " + city;
  // add country to bio
  bio += "\nCountry: " + country;
  // add pronouns to bio
  bio += "\nPronouns: " + pronouns;
  // Add hobbies to bio
  std::string hobby_string = "Hobbies:\n";
  for (std::string hobby : hobbies) {
    hobby_string += " - " + hobby + "\n";
  }

  // return profile info
  return bio + "\n" + hobby_string;
}

// define add hobby method
void Profile::add_hobby(std::string hobby){
  hobbies.push_back(hobby);
}