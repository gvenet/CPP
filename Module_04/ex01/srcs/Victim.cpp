#include "../inc/Victim.hpp"

//=================================COPLIAN=======================

Victim::Victim()
{
	this->_name = "default";
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &)
{
}

Victim &Victim::operator=(Victim const &)
{
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

std::string Victim::getName(void) const
{
	return this->_name;
}

//================================PRIVATE MEMBER FONCTION=================================================

//=================================PRIVATE METHODE========================================================

//=================================PUBLIC MEMBER FONCTION================================================

void Victim::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into a cute little sheep!" << std::endl;
}

//=================================PUBLIC METHODE========================================================