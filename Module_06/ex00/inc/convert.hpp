#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>

class Convert
{
private:
	float const		_input;
	// float const		_fVal;
	// int const		_iVal;
	// double const	_dVal;
	// char const		_cVal;
	Convert();

public:
	Convert(char const *str);
	Convert(Convert const &cpy);
	Convert &operator=(Convert const &op);
	virtual ~Convert();

	float getF(void) const;

};

std::ostream &operator<<(std::ostream &os, Convert const &rhs);

#endif