#include "../inc/Character.hpp"

//=================================COPLIAN================================================================

Character::Character(std::string const &name) : _name(name), _AP(40), _wp(NULL)
{
}

Character::Character(Character const &cpy) : _name(cpy._name), _AP(cpy._AP), _wp(cpy._wp)
{
}

Character &Character::operator=(Character const & cpy)
{
	_AP = cpy._AP;
	_name = cpy._name;
	_wp = cpy._wp;
	return *this;
}

Character::~Character()
{
}

//=========================================METHODES======================================================

void Character::recoverAP()
{
	int tmp;

	std::cout << _name << " gain ";
	tmp = _AP;
	_AP += 10;
	if (_AP > 40)
	{
		_AP = 40;
		std::cout << 40 - tmp;
	}
	else
		std::cout << "10";
	std::cout << " AP" << std::endl;
}

void Character::equip(AWeapon *wp)
{
	_wp = wp;
}

void Character::attack(Enemy *enemy)
{
	if (!_wp)
		return;
	if (_AP < _wp->getAPCost())
	{
		std::cout << _name << " does not have enough AP!" << std::endl;
		return;
	}
	_AP -= _wp->getAPCost();
	std::cout << _name << " attacks " << enemy->getType() << " with a " << _wp->getName() << std::endl;
	_wp->attack();
	enemy->takeDamage(_wp->getDamage());
}

std::string const &Character::getName() const
{
	return _name;
}

AWeapon *Character::getWeapon() const
{
	return _wp;
}

int Character::getAP() const
{
	return _AP;
}

std::ostream &operator<<(std::ostream &os, Character const &character)
{
	os << character.getName() << " has " << character.getAP() << " AP and ";
	if (character.getWeapon())
		os << "wields a " << character.getWeapon()->getName() << std::endl;
	else
		os << "is unarmed" << std::endl;
	return os;
}