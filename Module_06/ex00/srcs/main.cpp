#include <iostream>

int main(int ac, char **av)
{

	if (ac != 2)
	{
		std::cout << "bad argument" << std::endl;
		return 1;
	}
	char c = (char)av[1];
	int i = (char)av[1];
	float f = (char)av[1];
	double d = (char)av[1];

	std::cout << "char : " << c << std::endl
			  << "int : " << i << std::endl
			  << "float : " << f << std::endl
			  << "double : " << d << std::endl;
	return 0;
}
