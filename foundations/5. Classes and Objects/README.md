# Classes and Objects

- [Class Members](#Class-Members)

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

## Class Members

An empty class is pretty useless. Classes are designed to bring together related information and functionality — time to add stuff inside!

Components of a class are called *class members*. Just like you can get a string’s length using ```.length()```, you can access class members using the dot operator ```(object.class_member)```.

There are two types of class members:

- *Attributes*, also known as *member data*, consist of information about an instance of the class.
- *Methods*, also known as *member functions*, are functions that you can use with an instance of the class. We use a ```.``` before method names to distinguish them from regular functions.

We *encapsulate* — or enclose for simpler user access — attributes and methods in a class like this:

```
class City {

  // attribute
  int population;

// we'll explain 'public' later
public:
  // method
  void add_resident() {
    population++;
  }

};
```

Unless we have a mostly empty class, it’s common to split function declarations from definitions. We declare methods inside the class (in a header), then define the methods outside the class (in a **.cpp** file of the same name).

How can we define methods outside a class? We can do this using ```ClassName::``` before the method name to indicate its class like this:

```
int City::get_population() {
  return population;
}
```

Unlike with regular functions, we need to ```include``` the header file in the .cpp file where we define the methods.

**Note**: We must declare a method inside the class if we want to define it outside.