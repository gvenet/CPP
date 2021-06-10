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
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
		{
			std::cout << this->_name << "\t: ";
			delete this->_inventory[i];
		}
}

//============================================================GETTERS============================================================

std::string const &Character::getName() const
{
	return this->_name;
}

//============================================================METHODS============================================================

void Character::equip(AMateria *m)
{
	std::cout << this->_name << "\t: ";
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i] && !m->getEquiped())
		{
			this->_inventory[i] = m;
			m->setEquiped(1);
			std::cout << "equip " << m->getType() << " at slot " << i << std::endl;
			return;
		}
	}
	if (m->getEquiped())
		std::cout << m->getType() << " already equiped" << std::endl;
	else
		std::cout << "Inventory full !" << std::endl;
}

void Character::unequip(int idx)
{
	std::cout << this->_name << "\t: ";
	if (this->_inventory[idx])
	{
		std::cout << this->_inventory[idx]->getType() << " is unequip at slot " << idx << std::endl;
		this->_inventory[idx]->setEquiped(0);
		this->_inventory[idx] = NULL;
	}
	else
		std::cout << "No materia at slot " << idx << std::endl;
}
void Character::use(int idx, ICharacter &target)
{
	std::cout << this->_name << "\t: ";
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << "No Materia at slot " << idx << std::endl;
}
