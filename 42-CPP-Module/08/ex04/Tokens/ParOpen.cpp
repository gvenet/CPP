
#include "ParOpen.hpp"

ParOpen::ParOpen()
{
}

ParOpen::ParOpen(ParOpen const &other)
{
	(void)other;
}

ParOpen::~ParOpen()
{
}

ParOpen &ParOpen::operator=(ParOpen const &other)
{
	(void)other;
	return (*this);
}

int ParOpen::getType(void) const
{
	return (TokenParOpen);
}

void ParOpen::display(void) const
{
	std::cout << "ParOpen";
}
