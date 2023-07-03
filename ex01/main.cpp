#include <iostream>

int main ()
{
	char buff[512];

	std::cout << "Enter Something: ";
	std::cin >> buff;
	std::cout << "You entered: " << "[" << buff << "]" << std::endl;
	return 0;
}