#include "../inc/Peon.hpp"

Peon::Peon(std::string const &name) : Victim(name)
{
	std::cout << _name << " : Zogzog !" << std::endl;
}

Peon::Peon(Peon const &cpy) : Victim(cpy._name)
{
	std::cout << _name << " : Zogzog !" << std::endl;
}

Peon &Peon::operator=(Peon const &op)
{
	_name = op._name;
	return *this;
}

Peon::~Peon()
{
	std::cout << _name << " : Bleuark..." << std::endl;
}

void Peon::getPolymorphed(void) const
{
	std::cout << getName() << " has been turned into a pink pony!" << std::endl;
}
