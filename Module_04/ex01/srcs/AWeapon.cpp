#include "../inc/AWeapon.hpp"

//=================================COPLIAN================================================================

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
	std::cout << this->_name << "\t | apcost : " << this->_apcost << " | damage : " << this->_damage << std::endl;
}

AWeapon::AWeapon(AWeapon const &)
{
}

AWeapon &AWeapon::operator=(AWeapon const &)
{
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
