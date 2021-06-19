
#include "Op.hpp"

Op::Op(char op):
	op(op)
{
}

Op::Op(Op const &other):
	op(other.op)
{
}

Op::~Op()
{
}

Op &Op::operator=(Op const &other)
{
	this->op = other.op;
	return (*this);
}

int Op::getType(void) const
{
	return (TokenOp);
}

char Op::getOp(void) const
{
	return (this->op);
}

void Op::display(void) const
{
	std::cout << "Op(" << this->op << ")";
}
