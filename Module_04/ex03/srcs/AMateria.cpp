#include "../inc/AMateria.hpp"

//============================================================COPLIEN============================================================

AMateria::AMateria(std::string const &type) : _type(type), _xp(0), _equiped(0)
{
}

AMateria::~AMateria()
{
	std::cout << this->_type << " is destroyed" << std::endl;
}

//============================================================GETTERS============================================================

std::string const &AMateria::getType() const
{
	return this->_type;
}

unsigned int AMateria::getXP() const
{
	return this->_xp;
}

int AMateria::getEquiped() const
{
	return this->_equiped;
}

//============================================================SETTERS============================================================

void AMateria::setEquiped(int equiped)
{
	this->_equiped = equiped;
}

//============================================================METHODS============================================================

void AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
	std::cout << "Materia\t: " << this->_type << " has " << this->_xp << " xp" << std::endl;
}
