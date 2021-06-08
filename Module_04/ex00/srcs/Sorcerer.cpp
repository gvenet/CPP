#include "../inc/Sorcerer.hpp"

//=================================CONSTRUCTOR/DESTRUCTOR/OPERATOR=======================

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

//==========================================GETTERS=======================================================

//==========================================SETTERS=======================================================



//================================PRIVATE MEMBER FONCTION=================================================

//=================================PRIVATE METHODE========================================================



//=================================PUBLIC MEMBER FONCTION================================================

//=================================PUBLIC METHODE========================================================