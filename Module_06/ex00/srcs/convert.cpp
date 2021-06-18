#include "../inc/convert.hpp"

Convert::Convert(char const *cc) : _input(std::strtof(cc, NULL))
{
	std::string str = cc;
	for (unsigned long i = 0; i < str.length(); i++)
	{
		if (std::isdigit(str.at(i)) == 0)
		{
			std::cout << "coucou\n" ;
		}
	}
}

Convert::Convert(Convert const &cpy) : _input(cpy._input)
{
}

Convert::~Convert()
{
}

float Convert::getF(void) const
{
	return (this->_input);
}

std::ostream &operator<<(std::ostream &os, Convert const &rhs)
{
	os << rhs.getF();
	return os;
}
