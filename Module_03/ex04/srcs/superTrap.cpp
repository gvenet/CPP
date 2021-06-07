#include "../inc/superTrap.hpp"

//=============================================CONSTRUCTORS/DESTRUCTOR/OPERATOR================================

superTrap::superTrap() : clapTrap()
{
	srand((unsigned)time(NULL));
}

superTrap::superTrap(std::string const name) : clapTrap(100, 100, 120, 120, 1, 60, 20, 5, name, "FR4G-TP")
{

	std::cout << this->_type << " <" << this->_name << "> I'M SUPERTRAMP" << std::endl;
	this->caractere();
	std::cout << std::endl << std::endl;
}

superTrap::superTrap(superTrap const &src) : clapTrap(src)
{
	std::cout << "copy constructor called" << std::endl;
}

superTrap& superTrap::operator=(superTrap const &)
{
	return *this;
}

superTrap::~superTrap()
{
	std::cout << "end of " << this->_type << " <" << this->_name << ">" << std::endl;
}

//===================================SETTER==================================================================

//==========================PRIVATE MEMBER FONCTION==========================================================

//==========================PUBLIC MEMBER FONCTION===========================================================

