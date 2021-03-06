#include "../inc/Ice.hpp"

//============================================================COPLIAN============================================================

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const &cpy) : AMateria("ice")
{
	*this = cpy;
}

Ice &Ice::operator=(Ice const &op)
{
	this->_type = op._type;
	this->_xp = op._xp;
	return *this;
}

Ice::~Ice()
{
}

//============================================================GETTERS============================================================

//============================================================METHODS============================================================

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}

AMateria *Ice::clone() const
{
	AMateria *cpy = new Ice;
	return cpy;
}
