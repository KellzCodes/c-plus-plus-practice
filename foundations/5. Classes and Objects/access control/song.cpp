#include "song.hpp"

// add Song method definitions here:
void Song::add_title(std::string new_title) {

  title = new_title;

}

std::string Song::get_title() {

  return title;

}

// define method to set an artist
void Song::add_artist(std::string new_artist){
  artist = new_artist;
}

// define method to get an artist
std::string Song::get_artist(){
  return artist;
}