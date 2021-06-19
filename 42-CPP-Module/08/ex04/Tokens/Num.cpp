
#include "Num.hpp"

Num::Num(int value):
	value(value)
{
}

Num::Num(Num const &other):
	value(other.value)
{
}

Num::~Num()
{
}

Num &Num::operator=(Num const &other)
{
	this->value = other.value;
	return (*this);
}

int Num::getType(void) const
{
	return (TokenNum);
}

int Num::getValue(void) const
{
	return (this->value);
}

void Num::display(void) const
{
	std::cout << "Num(" << this->value << ")";
}
