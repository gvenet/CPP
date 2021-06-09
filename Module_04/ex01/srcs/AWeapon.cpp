#include "../inc/AWeapon.hpp"

//=================================COPLIAN================================================================

AWeapon::AWeapon() : _name(std::string()), _apcost(0), _damage(0)
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
	std::cout << this->_name << "\t | apcost : " << this->_apcost << " | damage : " << this->_damage << std::endl;
}

AWeapon::AWeapon(AWeapon const &cpy) : _name(cpy._name), _apcost(cpy._apcost), _damage(cpy._damage)
{
}

AWeapon &AWeapon::operator=(AWeapon const &cpy)
{
	this->_name = cpy._name;
	this->_apcost = cpy._apcost;
	this->_damage = cpy._damage;
	return *this;
}

AWeapon::~AWeapon()
{
}

//==========================================GETTERS=======================================================

std::string const &AWeapon::getName() const
{
	return this->_name;
}

int AWeapon::getAPCost() const
{
	return this->_apcost;
}

int AWeapon::getDamage() const
{
	return this->_damage;
}
