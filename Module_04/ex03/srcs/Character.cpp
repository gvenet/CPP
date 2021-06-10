#include "../inc/Character.hpp"

//============================================================COPLIAN============================================================

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << this->_name << " ready to fight" << std::endl;
}

Character::Character(Character const &cpy)
{
	this->_name = cpy._name;
	*this = cpy;
}

Character &Character::operator=(Character const &op)
{
	this->_name = op._name;
	return *this;
}

Character::~Character()
{
}

//============================================================GETTERS============================================================

std::string const &Character::getName() const
{
	return this->_name;
}

//============================================================METHODS============================================================

void Character::equip(AMateria *m)
{
	std::cout << this->_name << " : ";
	for (int i = 0; i < 4; i++)
	{
		if(!this->_inventory[i])
		{
			this->_inventory[i] = m;	
			std::cout << "equip " << m->getType() << " at slot " << i << std::endl;
			return ;
		}
	}
	std::cout << "Inventory full !" << std::endl;
}

void Character::unequip(int idx)
{
	std::cout << this->_name << " : " << this->_inventory[idx]->getType() << " is unequip at slot " << idx << std::endl;
	this->_inventory[idx] = NULL;
}
void Character::use(int idx, ICharacter &target)
{
	std::cout << this->_name;
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << " : No Materia at slot " << idx << std::endl;
}
