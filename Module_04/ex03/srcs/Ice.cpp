#include "../inc/Ice.hpp"

//=================================COPLIAN================================================================

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const &cpy)
{
	this->_xp = cpy._xp;
}

Ice &Ice::operator=(Ice const &op)
{
	this->_xp = op._xp;
	return *this;
}

Ice::~Ice()
{
}

//==========================================GETTERS=======================================================

//=========================================METHODES=======================================================

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const
{
	Ice *cpy = new Ice(*this);
	return(cpy);
}