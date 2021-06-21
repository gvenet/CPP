#include "../inc/AWeapon.hpp"

//=================================COPLIAN================================================================

AWeapon::AWeapon() : _name(std::string()), _apcost(0), _damage(0)
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
	std::cout << _name << "\t | apcost : " << _apcost << " | damage : " << _damage << std::endl;
}

AWeapon::AWeapon(AWeapon const &cpy) : _name(cpy._name), _apcost(cpy._apcost), _damage(cpy._damage)
{
	std::cout << _name << "\t | apcost : " << _apcost << " | damage : " << _damage << std::endl;
}

AWeapon &AWeapon::operator=(AWeapon const &op)
{
	_name = op._name;
	_apcost = op._apcost;
	_damage = op._damage;
	return *this;
}

AWeapon::~AWeapon()
{
}

//==========================================GETTERS=======================================================

std::string const &AWeapon::getName() const
{
	return _name;
}

int AWeapon::getAPCost() const
{
	return _apcost;
}

int AWeapon::getDamage() const
{
	return _damage;
}
