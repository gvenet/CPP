#include "../inc/FragTrap.hpp"

fragTrap::fragTrap(std::string const name) : _hp(100), _maxHp(100), _energy(100), _maxEnergy(100), _level(1), _name(name), _meleeAttDamage(30), _rangedAttDamage(20), _armorDamageReduction(5)
{
	std::cout << this->_name << " is born" << std::endl;
}

fragTrap::~fragTrap()
{
}

std::string fragTrap::getName(void) const
{
	return this->_name;
}

int fragTrap::getHp(void) const
{
	return this->_hp;
}

int fragTrap::getEnergy(void) const
{
	return this->_energy;
}
