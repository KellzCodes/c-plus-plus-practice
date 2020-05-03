# Access Control: Public and Private

Shows use of Public and Private access modifiers

1. Start with this code:

- **music.cpp**

```
#include <iostream>
#include "song.hpp"

int main() {

  Song electric_relaxation;
  
}
```

- **song.hpp**

```
#include <string>

class Song {
  
  std::string title;
  std::string artist;

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


2. Take a look at **song.hpp**. We’ve added an ```artist``` attribute to ```Song```.

	In ```main()``` in **music.cpp**, try to add an ```artist``` attribute of ```"A Tribe Called Quest"``` for ```electric_relaxation``` like:

	```some_object.some_attribute = some_value;```


	Do you think this will work?

3. No! Check out that error message about ```Song::artist``` being private. Go ahead and remove that line you just added to ```main()```.

	Because ```artist``` is ```private```, you can’t access it from outside the class. So what do you do?

	Well, you could move ```artist``` into the ```public``` part of the class. But then it’s easy to accidentally reset ```artist``` and end up with some weird bugs.

	A better solution that allows you to interact with ```artist``` indirectly:

	- Create a ```public``` ```.add_artist()``` for setting the artist.
	- Create a ```public``` ```.get_artist()``` for retrieving the artist.

4. In ```main()```, set ```electric_relaxation```‘s ```artist``` to ```"A Tribe Called Quest"``` using ```.add_artist()```.

	Now retrieve and print out the ```electric_relaxation```‘s ```artist``` using ```.get_artist()```.

Example code can be found in the [music.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/5.%20Classes%20and%20Objects/access%20control/music.cpp), [song.hpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/5.%20Classes%20and%20Objects/access%20control/song.hpp), and [song.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/5.%20Classes%20and%20Objects/access%20control/song.cpp) files.
