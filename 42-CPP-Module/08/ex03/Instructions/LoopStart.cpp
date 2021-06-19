#include "LoopStart.hpp"

LoopStart::LoopStart(Program &mindOpen):
	Instruction(mindOpen)
{
}

LoopStart::LoopStart(LoopStart const &other):
	Instruction(other)
{
}

LoopStart::~LoopStart()
{
}

LoopStart &LoopStart::operator=(LoopStart const &other)
{
	(void)other;
	return (*this);
}

void LoopStart::execute(void)
{
	if (this->mo.getPtrData() == 0)
		this->mo.moveToNextLoop();
}

int LoopStart::getType(void) const
{
	return (6);
}
