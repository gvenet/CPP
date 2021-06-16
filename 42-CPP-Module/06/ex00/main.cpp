
#include <iostream>
#include "Interpreter.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cout << "convert: error: bad arguments\n"
				<< "         usage: value" << std::endl;
	}
	else
	{
		Interpreter p(argv[1]);
		std::cout << p << std::endl;
	}
	return (0);
}
