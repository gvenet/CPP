#include "../inc/Sorcerer.hpp"

//=================================COPLIAN=======================

Sorcerer::Sorcerer()
{
	this->_name = "default";
	this->_title = "default";
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &)
{
}

Sorcerer &Sorcerer::operator=(Sorcerer const &)
{
	return *this;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Sorcerer &Sorcerer)
{
	os << "I am " << Sorcerer.getName() << ", " << Sorcerer.getTitle() << ", and I like ponies"  << std::endl;
	return os;
}
//==========================================GETTERS=======================================================

std::string Sorcerer::getName(void) const
{
	return this->_name;
}

std::string Sorcerer::getTitle(void) const
{
	return this->_title;
}

//================================PRIVATE MEMBER FONCTION=================================================

//=================================PRIVATE METHODE========================================================

//=================================PUBLIC MEMBER FONCTION================================================

void Sorcerer::polymorph(Victim const & victim)
{
	victim.getPolymorphed();
}

//=================================PUBLIC METHODE========================================================