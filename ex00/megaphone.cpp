#include <iostream>

int main(int argc, char **argv)
{
	int i = 1;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (i < argc)
		{
			int j = 0;
			while (argv[i][j])
				std::cout << (char) toupper(argv[i][j++]);
			i++;
		}
	std::cout << std::endl;
	return 0;
}