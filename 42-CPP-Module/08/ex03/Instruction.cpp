
#include "Instruction.hpp"

Instruction::Instruction(Program &mindOpen):
	mo(mindOpen)
{
}

Instruction::Instruction(Instruction const &other):
	mo(other.mo)
{
}

Instruction::~Instruction()
{
}

Instruction &Instruction::operator=(Instruction const &other)
{
	(void)other;
	return (*this);
}
