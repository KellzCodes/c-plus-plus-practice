# Destructors

Shows how to use destructors

1. Start with this code:

- **music.cpp**

```
#include <iostream>
#include "song.hpp"

int main() {

  Song back_to_black("Back to Black", "Amy Winehouse");
    
}
```

- **song.hpp**

```
#include <string>

class Song {
  
  std::string title;
  std::string artist;

public:
  Song(std::string new_title, std::string new_artist);
  // Add a destructor here:
  
  
  std::string get_title();
  
  std::string get_artist();
  
};
```

- **song.cpp**

```
#include "song.hpp"

Song::Song(std::string new_title, std::string new_artist) 
  : title(new_title), artist(new_artist) {}

// add the Song destructor here:



std::string Song::get_title() {

  return title;

}

std::string Song::get_artist() {

  return artist;

}
```

2. Create a destructor for ```Song``` that prints ```"Goodbye "``` plus the song’s title. For example, a song with a title of ```"Drama"``` should print the following message when destroyed:
	> Goodbye Drama!

	(You’ll need to ```include``` the ```<iostream>``` header in **song.cpp** for this to work.)

	Then compile and execute the program in the terminal.

Example code can be found in the [song.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/5.%20Classes%20and%20Objects/destructors/song.cpp) and [song.hpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/5.%20Classes%20and%20Objects/destructors/song.hpp) files.