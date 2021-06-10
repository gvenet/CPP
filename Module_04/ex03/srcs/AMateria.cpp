#include "../inc/AMateria.hpp"

//============================================================COPLIAN============================================================

AMateria::AMateria(std::string const &type) : _type(type), _xp(0), _equiped(0)
{
	std::cout << "Materia " << this->_type << " is created" << std::endl;
}

AMateria::AMateria(AMateria const &cpy) : _type(cpy._type), _xp(cpy._xp), _equiped(0)
{
	*this = cpy;
}

AMateria &AMateria::operator=(AMateria const &op)
{
	this->_equiped = op._equiped;
	this->_type = op._type;
	this->_xp = op._xp;
	return *this;
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
	this->displayXp();
}

void AMateria::displayXp()
{
	std::cout << "Materia\t: " << this->_type << " has " << this->_xp << " xp" << std::endl;
}

AMateria *AMateria::clone() const
{
	
}