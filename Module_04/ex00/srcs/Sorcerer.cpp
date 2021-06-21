#include "../inc/Sorcerer.hpp"

//=================================COPLIAN=======================

Sorcerer::Sorcerer(std::string const &name, std::string const &title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &cpy) : _name(cpy._name), _title(cpy._title)
{
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &op)
{
	_name = op._name;
	_title = op._title;
	return *this;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Sorcerer &Sorcerer)
{
	os << "I am " << Sorcerer.getName() << ", " << Sorcerer.getTitle() << ", and I like ponies"  << std::endl;
	return os;
}
//==========================================GETTERS=======================================================

std::string const &Sorcerer::getName(void) const
{
	return _name;
}

std::string const &Sorcerer::getTitle(void) const
{
	return _title;
}

//==========================================METHODS================================================

void Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();
}
