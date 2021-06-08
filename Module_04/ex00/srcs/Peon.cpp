#include "../inc/Peon.hpp"

//=================================COPLIAN=======================

Peon::Peon()
{
	this->_name = "default";
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << this->_name << ": Zogzog !" << std::endl;
}

Peon::Peon(Peon const &)
{
}

Peon &Peon::operator=(Peon const &)
{
	return *this;
}

Peon::~Peon()
{
	std::cout << this->_name << ": Bleuark..." << std::endl;
}

//==========================================GETTERS=======================================================

//================================PRIVATE MEMBER FONCTION=================================================

//=================================PRIVATE METHODE========================================================

//=================================PUBLIC MEMBER FONCTION================================================

void Peon::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into pink pony!" << std::endl;
}

//=================================PUBLIC METHODE========================================================