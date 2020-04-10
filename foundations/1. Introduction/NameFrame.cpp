// Ask for someone's name then generate a framed greeting
#include <iostream>
#include <string>

int main(){
	std::cout << "Please enter your first name: ";
	std::string name;
	std::cin >> name;
	
	// Build the message that we want to write
	const std::string greeting = "Hi, " + name + "!";
	
	// Build the second and fourth lines of the output
	const std::string spaces(greeting.size(), ' ');
	const std::string second = "* " + spaces + " *";
	
	// Build the first and fifth lines of the output
	const std::string first(second.size(), '*');
	
	// Write it all
	std::cout << std::endl;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;
	
	return 0;
}
