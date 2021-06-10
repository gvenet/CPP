#include "../inc/AMateria.hpp"

//=================================COPLIAN================================================================

AMateria::AMateria() : _type(std::string()), _xp(0)
{
}

AMateria::AMateria(std::string const &type) : _type(std::string()), _xp(0)
{
}

AMateria::AMateria(AMateria const &cpy) : _type(cpy._type), _xp(cpy._xp)
{
}

AMateria &AMateria::operator=(AMateria const &op)
{
	this->_type = op._type;
	this->_xp = op._xp;
	return *this;
}

AMateria::~AMateria()
{
}

//==========================================GETTERS=======================================================

std::string const &AMateria::getType() const
{
	return this->_type;
}

unsigned int AMateria::getXP() const
{
	return this->_xp;
}

//=========================================METHODES=======================================================

void AMateria::use(ICharacter &target)
{
	this->_xp += 10;
	(void)target;
}
