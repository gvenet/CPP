
#include "IncrPtr.hpp"

IncrPtr::IncrPtr(Program &mindOpen):
	Instruction(mindOpen)
{
}

IncrPtr::IncrPtr(IncrPtr const &other):
	Instruction(other)
{
}

IncrPtr::~IncrPtr()
{
}

IncrPtr &IncrPtr::operator=(IncrPtr const &other)
{
	(void)other;
	return (*this);
}

void IncrPtr::execute(void)
{
	this->mo.incrPtr();
}

int IncrPtr::getType(void) const
{
	return (1);
}
