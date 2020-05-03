# Class Members

1. Start with this code:

	- **song.hpp**
```
#include <string>

// add the Song class here:

```

- **song.cpp**


```
#include "song.hpp"

// add Song method definitions here:
```

2. Add a ```Song``` class to **song.hpp**. Inside the class, add an ```std::string``` attribute called ```title```.

3. Below ```title```, add ```public```: on a new line. We’ll explain this part later.

	Add two method declarations for ```Song``` underneath:

	- ```.add_title()```, a ```void``` method which accepts a ```new_title``` for a song. (Make sure this parameter has a different name than ```title```.)
	- ```.get_title()```, which has no parameters and will return as ```std::string```.

4. Move over to song.cpp. Add definitions for each method:

	- ```Song::add_title()``` should set title to ```new_title```.
	- ```Song::get_title()``` should return ```title```.

Example code can be found in the [song.hpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/5.%20Classes%20and%20Objects/class%20members/song.hpp) and [song.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/5.%20Classes%20and%20Objects/class%20members/song.cpp) files.