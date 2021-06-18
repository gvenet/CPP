#include "../inc/convert.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "bad argument" << std::endl;
		return 1;
	}
	Convert convert = Convert(av[1]);
	std::cout << convert << std::endl;
	return 0;
}
