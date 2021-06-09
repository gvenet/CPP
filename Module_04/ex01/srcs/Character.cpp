#include "../inc/Character.hpp"

//=================================COPLIAN================================================================

Character::Character() : _name(std::string()), _AP(0), _wp(NULL)
{
}

Character::Character(std::string const &name) : _name(name), _AP(40), _wp(NULL)
{
}

Character::Character(Character const &cpy) : _name(cpy._name), _AP(cpy._AP), _wp(cpy._wp)
{

}

Character &Character::operator=(Character const & cpy)
{
	this->_AP = cpy._AP;
	this->_name = cpy._name;
	this->_wp = cpy._wp;
	return *this;
}

Character::~Character()
{
}

//=========================================METHODES======================================================

void Character::recoverAP()
{
	int tmp;

	std::cout << this->_name << " gain ";
	tmp = this->_AP;
	this->_AP += 10;
	if (this->_AP > 40)
	{
		this->_AP = 40;
		std::cout << 40 - tmp;
	}
	else
		std::cout << "10";
	std::cout << " AP" << std::endl;
}

void Character::equip(AWeapon *wp)
{
	this->_wp = wp;
}

void Character::attack(Enemy *Enemy)
{
	if (!this->_wp)
		return;
	if (this->_AP < this->_wp->getAPCost())
	{
		std::cout << this->_name << " does not have enough AP!" << std::endl;
		return;
	}
	this->_AP -= this->_wp->getAPCost();
	std::cout << this->_name << " attacks " << Enemy->getType() << " with a " << this->_wp->getName() << std::endl;
	this->_wp->attack();
	Enemy->takeDamage(this->_wp->getDamage());
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
	os << Character.getName() << " has " << Character.getAP() << " AP and ";
	if (Character.getWeapon())
		os << "wields a " << Character.getWeapon()->getName() << std::endl;
	else
		os << "is unarmed" << std::endl;
	return os;
}