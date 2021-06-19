
#include "Decr.hpp"

Decr::Decr(Program &mindOpen):
	Instruction(mindOpen)
{
}

Decr::Decr(Decr const &other):
	Instruction(other)
{
}

Decr::~Decr()
{
}

Decr &Decr::operator=(Decr const &other)
{
	(void)other;
	return (*this);
}

void Decr::execute(void)
{
	this->mo.decrData();
}

int Decr::getType(void) const
{
	return (2);
}
