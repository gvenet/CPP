#include "../inc/Character.hpp"

//=================================COPLIAN================================================================

Character::Character() : _name(std::string())
{
	
}

Character::Character(std::string const &name) : _name(name)
{
}

Character::Character(Character const &cpy) : _name(cpy._name)
{
}

Character &Character::operator=(Character const &op)
{
	this->_name = op._name;
	return *this;
}

Character::~Character()
{
}

//==========================================GETTERS=======================================================

std::string const &Character::getName() const
{
	return this->_name;
}

//=========================================METHODES=======================================================

void Character::equip(AMateria *m)
{
}

void Character::unequip(int idx)
{
}

void Character::use(int idx, ICharacter &target)
{

}