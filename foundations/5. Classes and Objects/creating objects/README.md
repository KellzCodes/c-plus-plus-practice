# Creating Objects

Shows how to create objects

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

// add the Song class here:
class Song {
  
  std::string title;

public:
  void add_title(std::string new_title);
  std::string get_title();
  
};
```

- **song.cpp**

```
#include "song.hpp"

// add Song method definitions here:
void Song::add_title(std::string new_title) {

  title = new_title;

}

std::string Song::get_title() {

  return title;

}
```

2. Flip over to **song.hpp** and **song.cpp** to see how the class and its methods are set up.

	Then, in **music.cpp**, instantiate a new song ```electric_relaxation``` in ```main()```.

3. Use ```Song```‘s built-in ```.add_title()``` method to add a title to ```electric_relaxation```: ```"Electric Relaxation"```.

4. Use ```.get_title()``` to retrieve ```electric_relaxation```'s title and print it to the terminal.

Example code can be found in the [music.cpp]() file.