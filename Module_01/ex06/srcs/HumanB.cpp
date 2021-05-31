#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon.setType("Default");
}

HumanB::~HumanB()
{

}

void HumanB::attack(void)
{
	std::cout << this->_name << "attacks with his" << this->_weapon.getType();
}

void HumanB::setWeapon(Weapon weapon)
{

}