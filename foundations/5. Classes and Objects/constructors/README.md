# Constructors

Shows how to use constructors

1. Start with this code:

- **music.cpp**

```
#include <iostream>
#include "song.hpp"

int main() {

  
  
}
```

- **song.hpp**

```
#include <string>

class Song {
  
  std::string title;
  std::string artist;

public:
  // Add a constructor here:
  
  
  void add_title(std::string new_title);
  std::string get_title();
  
  void add_artist(std::string new_artist);
  std::string get_artist();
  
};
```

- **song.cpp**

```
#include "song.hpp"

// add the Song constructor here:


void Song::add_title(std::string new_title) {

  title = new_title;

}

std::string Song::get_title() {

  return title;

}

void Song::add_artist(std::string new_artist) {

  artist = new_artist;

}

std::string Song::get_artist() {

  return artist;

}
```

2. Declare a public constructor for ```Song``` in **song.hpp**. Give it two ```std::string``` parameters:

	- ```new_title```
	- ```new_artist``` Then define the constructor inside **song.cpp**. Initialize ```title``` to ```new_title``` and ```artist``` to ```new_artist```.

3. Hmm… a song probably only needs to be given a title and artist once. Now that you can set those attributes with a constructor, go ahead and remove ```.add_title()``` and ```.add_artist()``` from **song.hpp** and **song.cpp**.

4. Let’s try out your new constructor!

	In ```main()```, instantiate a new ```Song``` called ```back_to_black```. Give it:

	- a ```title``` of ```"Back to Black"```
	- an ```artist``` of ```"Amy Winehouse"```

	(You can print out each attribute of ```back_to_black``` using ```.get_title()``` and ```.get_artist()```.)

Example code can be found in the [music.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/5.%20Classes%20and%20Objects/constructors/music.cpp), [song.hpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/5.%20Classes%20and%20Objects/constructors/song.hpp), [song.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/5.%20Classes%20and%20Objects/constructors/song.cpp) files.