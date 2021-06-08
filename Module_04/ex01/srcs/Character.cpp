#include "../inc/Character.hpp"

//=================================COPLIAN================================================================

Character::Character()
{
}

Character::Character(std::string const &name) : _name(name), _AP(40), _wp(NULL)
{
}

Character::Character(Character const &src)
{
	*this = src;
}

Character &Character::operator=(Character const &)
{
	return *this;
}

Character::~Character()
{
}

//=========================================METHODES======================================================

void Character::recoverAP()
{
	this->_AP += 10;
	if (this->_AP > 40)
		this->_AP = 40;
}

void Character::equip(AWeapon *wp)
{
	this->_wp = wp;
}

void Character::attack(Enemy *Enemy)
{
	if (!this->_wp)
		return;
	if(this->_AP < this->_wp->getAPCost())
		return;
	this->_AP -= this->_wp->getAPCost();
	std::cout << this->_name << " attacks " << Enemy->getType() << " with a " << this->_wp->getName() << std::endl;
	this->_wp->attack();
	// Enemy->display();
	Enemy->takeDamage(this->_wp->getDamage());
	// Enemy->display();
}

std::string const &Character::getName() const
{
	return this->_name;
}

AWeapon *Character::getWeapon() const
{
	return this->_wp;
}

int Character::getAP() const
{
	return this->_AP;
}

std::ostream &operator<<(std::ostream &os, Character const &Character)
{
	os << std::cout << Character.getName() << " has " << Character.getAP() << "AP and ";
	if (Character.getWeapon())
		os << "wields a " << Character.getWeapon()->getName() << std::endl;
	else
		os << "is unarmed" << std::endl;
	return os;
}