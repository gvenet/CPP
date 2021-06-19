
#include "Incr.hpp"

Incr::Incr(Program &mindOpen):
	Instruction(mindOpen)
{
}

Incr::Incr(Incr const &other):
	Instruction(other)
{
}

Incr::~Incr()
{
}

Incr &Incr::operator=(Incr const &other)
{
	(void)other;
	return (*this);
}

void Incr::execute(void)
{
	this->mo.incrData();
}

int Incr::getType(void) const
{
	return (0);
}
