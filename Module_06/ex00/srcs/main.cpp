#include "../inc/convert.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "bad argument" << std::endl;
		return 1;
	}
	try
	{
		Convert convert = Convert(av[1]);
		std::cout << convert << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "\e[01;31mError : " << e.what() << "\e[0m" << std::endl;
	}
	return 0;
}
