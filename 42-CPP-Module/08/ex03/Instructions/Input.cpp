
#include "Input.hpp"

Input::Input(Program &mindOpen):
	Instruction(mindOpen)
{
}

Input::Input(Input const &other):
	Instruction(other)
{
}

Input::~Input()
{
}

Input &Input::operator=(Input const &other)
{
	(void)other;
	return (*this);
}

void Input::execute(void)
{
	char c;

	std::cin >> c;
	this->mo.setPtrData(c);
}

int Input::getType(void) const
{
	return (4);
}
