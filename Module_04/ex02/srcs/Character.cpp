#include "../inc/Character.hpp"

//=================================COPLIAN================================================================

Character::Character() : _name(std::string()), _AP(0)
{
}

Character::Character(std::string const &name) : _name(name), _AP(40)
{
}

Character::Character(Character const &cpy) : _name(cpy._name), _AP(cpy._AP)
{
}

Character &Character::operator=(Character const & obj)
{
	this->_name = obj._name;
	this->_AP = obj._AP;
	return *this;
}

Character::~Character()
{
}

//=========================================METHODES======================================================

std::string const &Character::getName() const
{
	return this->_name;
}

int Character::getAP() const
{
	return this->_AP;
}

std::ostream &operator<<(std::ostream &os, Character const &Character)
{
	os << Character.getName() << " has " << Character.getAP() << " AP and is unarmed" << std::endl;

	return os;
}