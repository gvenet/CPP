
#include "DecrPtr.hpp"

DecrPtr::DecrPtr(Program &mindOpen):
	Instruction(mindOpen)
{
}

DecrPtr::DecrPtr(DecrPtr const &other):
	Instruction(other)
{
}

DecrPtr::~DecrPtr()
{
}

DecrPtr &DecrPtr::operator=(DecrPtr const &other)
{
	(void)other;
	return (*this);
}

void DecrPtr::execute(void)
{
	this->mo.decrPtr();
}

int DecrPtr::getType(void) const
{
	return (3);
}
