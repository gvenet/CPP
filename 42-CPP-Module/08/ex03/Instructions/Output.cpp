#include "Output.hpp"

Output::Output(Program &mindOpen):
	Instruction(mindOpen)
{
}

Output::Output(Output const &other):
	Instruction(other)
{
}

Output::~Output()
{
}

Output &Output::operator=(Output const &other)
{
	(void)other;
	return (*this);
}

void Output::execute(void)
{
	std::cout << this->mo.getPtrData();
}

int Output::getType(void) const
{
	return (5);
}
