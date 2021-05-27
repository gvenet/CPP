#include "../inc/Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
}

Zombie::~Zombie(void)
{
}

std::string Zombie::get_type(void) const
{
	return this->_type;
}
std::string Zombie::get_name(void) const
{
	return this->_name;
}

void Zombie::advert(void) const
{
	std::cout << "<" << get_name() << " (" << get_type() << ")> Braiiiiinnssss ...." << std::endl;
}