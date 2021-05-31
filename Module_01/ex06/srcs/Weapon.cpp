#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{

}

Weapon::~Weapon()
{
	
}

const std::string & Weapon::getType() const
{
	return (this->_type);
}

std::string Weapon::setType(std::string& type)
{
	this->_type = type;
	return (type);
}
