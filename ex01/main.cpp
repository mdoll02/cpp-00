#include <iostream>
#include "Contact.hpp"
// #include "Phonebook.hpp"

int main ()
{
	char buff[512];
	Contact contact;

	std::cout << "Enter Something: ";
	std::cin >> buff;
	std::cout << "You entered: " << "[" << buff << "]" << std::endl;
	return 0;
}