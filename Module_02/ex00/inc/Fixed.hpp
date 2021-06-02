#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <sstream>

class Fixed
{
private:
	int _fixPt;
	static const int _bits = 8;

public:
	Fixed();
	Fixed(Fixed const &i);
	virtual ~Fixed();

	Fixed &operator=(Fixed const & rhs);

	int getRawBits(void) const;
	int setRawBits(int const raw);
	std::string identify(void) const;

};

#endif
