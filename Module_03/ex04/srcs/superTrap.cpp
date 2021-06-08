#include "../inc/superTrap.hpp"

//=============================================CONSTRUCTORS/DESTRUCTOR/OPERATOR================================

superTrap::superTrap() : clapTrap()
{
	srand((unsigned)time(NULL));
}

superTrap::superTrap(std::string const name) : clapTrap(100, 100, 120, 120, 1, 60, 20, 5, name, "SUPER-TP"), fragTrap(name), ninjaTrap(name)
{
	std::cout << "SUPER-TP <" << this->_name << "> HI I'M SUPEEEEERTRAMP" << std::endl;
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
	std::cout << " end of SUPER-TP <" << this->_name << ">" << std::endl;
}

//===================================SETTER==================================================================

//==========================PRIVATE MEMBER FONCTION==========================================================

//==========================PUBLIC MEMBER FONCTION===========================================================

