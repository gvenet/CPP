#include "../inc/Victim.hpp"

//=================================COPLIAN=======================

Victim::Victim(std::string const &name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &cpy) : _name(cpy._name)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim &Victim::operator=(Victim const &op)
{
	_name = op._name;
	return *this;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Victim &Victim)
{
	os << "I am " << Victim.getName() << ", and I like otters" << std::endl;
	return os;
}
//==========================================GETTERS=======================================================

std::string const &Victim::getName(void) const
{
	return this->_name;
}

void Victim::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into a cute little sheep!" << std::endl;
}
