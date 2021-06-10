#include "../inc/Cure.hpp"

//============================================================COPLIAN============================================================

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const &cpy) : AMateria("cure")
{
	*this = cpy;
}

Cure &Cure::operator=(Cure const &op)
{
	this->_type = op._type;
	this->_xp = op._xp;
	return *this;
}

Cure::~Cure()
{
}

//============================================================GETTERS============================================================

//============================================================METHODS============================================================

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}

AMateria *Cure::clone() const
{
	AMateria *cpy = new Cure;
	return cpy;
}
