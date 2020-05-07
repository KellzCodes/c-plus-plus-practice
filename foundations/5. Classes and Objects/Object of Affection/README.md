# The Object of Your Affection

Your friend is building a new match-making service: The Object of Your Affection or OOYA for short (don’t worry, you still have time to convince them to change the name).

![alt text](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/5.%20Classes%20and%20Objects/Object%20of%20Affection/ooya.gif)

With your new understanding of C++ objects and classes, your friend thought you could build a pretty well-organized system of dating profiles.

Your first step? Build a ```Profile``` class that allows users to generate profile objects.

The Profile should store the following information:

- User’s name
- User’s age
- User’s city
- User’s country
- User’s pronouns
- User’s hobbies

And this is how users should be able to interact with their own profiles:

- Create a new profile with some information
- Add hobbies
- View profile

Let’s get started!

1. Start with 3 empty files:
	- **app.cpp**
	- **profile.hpp**
	- **profile.cpp**

## The attributes of a classy Profile:

2. Tab over to **profile.hpp** and set up the skeleton of the ```Profile``` class.

3. Add the following member attributes to ```Profile```:

	- an ```std::string``` ```name```
	- an ```int``` ```age```
	- an ```std::string``` ```city```
	- an ```std::string``` ```country```
	- an ```std::string``` ```pronouns```
	- an ```std::vector``` ```hobbies``` that will store ```std::string``` values

	Since you’re using ```std::vector```, make sure you include ```<vector>``` at the top of the file.

4. ![alt text](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/5.%20Classes%20and%20Objects/Object%20of%20Affection/Sam-Drakkila.gif)

	Tab over to **app.cpp**:
	- include ```<iostream>``` and add a ```main()``` method
	- Above ```main()```, include the header file so that ```Profile``` is in scope.
	- Instantiate a new ```Profile``` object called ```sam```. (Your friend Sam is looking for love.)
	- Try to give ```sam``` a ```name```: ```"Sam Drakkila"```.
	- Then try to compile and execute.

5. Yikes, what was that error message all about? Something to do with ```Profile::name``` being ```private```?

	Oh that’s right! All the attributes in a class (including ```name```) are automatically set to ```private```. You need a way for users to set some basic profile information.

	Inside ```Profile```:

	- Add ```private``` above the attributes you’ve created.
	- Add a ```public``` section below.

6. Under ```public``` in ```Profile```, declare a constructor for ```Profile``` that allows you to set:

	- ```name```
	- ```age```
	- ```city```
	- ```country```
	- ```pronouns``` (give this a default value of ```"they/them"``` just in case it’s ever left blank)
	
	Define the constructor in **profile.cpp** and assign the attributes the values passed in. (Don’t give ```pronouns``` a default value in the definition.)

	Name each parameter something different than its corresponding attribute. For example, this will work:

	
	```population = new_population;```

	
	But this won’t:


	```population = population;```


7. Time to test your code out!

	Include ```<iostream>``` and **profile.hpp** at the top of **profile.cpp**. (Without these include statements, **profile.cpp** doesn’t know that the ```Profile``` class exists or what ```std::string``` is.)

	If you assigned ```sam``` a ```name``` before, remove that line. Where ```sam``` is constructed, pass in the following information:

	- a ```name``` of ```"Sam Drakkila"```
	- an ```age``` of ```30```
	- ```city``` and ```country``` of ```"New York"``` and ```"USA"```
	- ```pronouns``` of ```"he/him"```

	Then go ahead and compile and execute your code.

8. Nice work! But how can you access profile information once it’s been added?

	Time to add a ```.view_profile()``` method.

	Declare ```.view_profile()``` under your ```public``` section of ```Profile``` with:

	- a return type of ```std::string```
	- no parameters
	
	In **profile.cpp**, add the method’s definition. The method should return a string that includes the profile information.

9. Test out the new method in ```main()``` on ```sam``` and print out the result.

10. You still need to give users a way to add hobbies. In **profile.hpp**, declare a new ```public``` method ```.add_hobby()``` with:

	- no return value
	- one ```std::string``` parameter ```new_hobby```

	In **profile.cpp**, define ```.add_hobby()```. In the method body, add ```new_hobby``` to hobbies.

11. Great! Go back into ```.view_profile()``` and modify the method so that you display a profile’s hobbies.

	(Remember, you can loop through ```hobbies``` to access each element.)

12. Before you show this all to your friend, be sure to test your work.

	Above where you print ```sam```‘s profile information out, add some hobbies to ```sam```:

	- “listening to audiobooks and podcasts”
	- “playing rec sports like bowling and kickball”
	- “writing a speculative fiction novel”
	- “reading advice columns”
	
	Now compile and execute your code!

Example code can be found in the [app.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/5.%20Classes%20and%20Objects/Object%20of%20Affection/app.cpp), [profile.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/5.%20Classes%20and%20Objects/Object%20of%20Affection/profile.cpp), and [profile.hpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/5.%20Classes%20and%20Objects/Object%20of%20Affection/profile.hpp) files.