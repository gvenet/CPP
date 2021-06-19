
#include "ParClose.hpp"

ParClose::ParClose()
{
}

ParClose::ParClose(ParClose const &other)
{
	(void)other;
}

ParClose::~ParClose()
{
}

ParClose &ParClose::operator=(ParClose const &other)
{
	(void)other;
	return (*this);
}

int ParClose::getType(void) const
{
	return (TokenParClose);
}

void ParClose::display(void) const
{
	std::cout << "ParClose";
}
