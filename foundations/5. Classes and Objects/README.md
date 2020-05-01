# Classes and Objects

So far, we’ve used several data types, including ```int```, ```double```, ```std::string```, and ```bool```. When we work with ```int``` or ```std::string```, we can create variables with certain properties and methods specific to those types. For example:
	> int age = 33;
	> age++; // age is now 34

But what happens when you want to create a “type” for something else? You can make your own! Bjarne Stroustrup developed C++ because he wanted to add a feature known as “classes” to the C language. A C++ class is a user-defined type.

The class serves as a blueprint for *objects*, which are instances of the class (just like ```age``` is an instance of ```int```). An object gets characteristics and behaviors from its class.

We can create an empty C++ class like this in a header file:

```
class City {

}; // <-- notice this semicolon!
```