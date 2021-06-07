#include "../inc/scavTrap.hpp"

//=============================================CONSTRUCTORS/DESTRUCTOR/OPERATOR================================

scavTrap::scavTrap() : clapTrap()
{
	srand((unsigned)time(NULL));
}

scavTrap::scavTrap(std::string const name) : clapTrap(100, 100, 50, 50, 1, 20, 15, 3, name, "SC4V-TP")
{
	srand((unsigned)time(NULL));
	std::cout << "SC4V-TP <" << this->_name << "> is here : What i'm doing here ? " << std::endl;
}

scavTrap::scavTrap(scavTrap const &src) : clapTrap(src)
{
	std::cout << "copy constructor called" << std::endl;
}

scavTrap& scavTrap::operator=(scavTrap const &)
{
	return *this;
}

scavTrap::~scavTrap()
{
	std::cout << " end of SC4V-TP <" << this->_name << ">" << std::endl;
}

//==========================PRIVATE MEMBER FONCTION===========================================================

void scavTrap::challengeNewComer(std::string const &target)
{
	this->caractere();
	std::cout << this->randChallenge() << target << ">" << std::endl;
}

//==========================PUBLIC MEMBER FONCTION===========================================================

std::string scavTrap::randChallenge(void)
{
	std::string challenge[5];

	challenge[0] = "challenge 1 <";
	challenge[1] = "challenge 2 <";
	challenge[2] = "challenge 3 <";
	challenge[3] = "challenge 4 <";
	challenge[4] = "challenge 5 <";
	return challenge[(rand() % 5)];
}

