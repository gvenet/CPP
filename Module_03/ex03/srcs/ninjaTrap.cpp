#include "../inc/ninjaTrap.hpp"

//=============================================CONSTRUCTORS/DESTRUCTOR/OPERATOR================================

ninjaTrap::ninjaTrap() : clapTrap()
{
	srand((unsigned)time(NULL));
}

ninjaTrap::ninjaTrap(std::string const name) : clapTrap(100, 100, 50, 50, 1, 20, 15, 3, name, "SC4V-TP")
{
	srand((unsigned)time(NULL));
	std::cout << "SC4V-TP <" << this->_name << "> is here : What i'm doing here ? " << std::endl;
}

ninjaTrap::ninjaTrap(ninjaTrap const &src) : clapTrap(src)
{
	std::cout << "copy constructor called" << std::endl;
}

ninjaTrap& ninjaTrap::operator=(ninjaTrap const &)
{
	return *this;
}

ninjaTrap::~ninjaTrap()
{
	std::cout << " end of SC4V-TP <" << this->_name << ">" << std::endl;
}

//==========================PRIVATE MEMBER FONCTION===========================================================

void ninjaTrap::challengeNewComer(std::string const &target)
{
	this->caractere();
	std::cout << this->randChallenge() << target << ">" << std::endl;
}

//==========================PUBLIC MEMBER FONCTION===========================================================

std::string ninjaTrap::randChallenge(void)
{
	std::string challenge[5];

	challenge[0] = "challenge 1 <";
	challenge[1] = "challenge 2 <";
	challenge[2] = "challenge 3 <";
	challenge[3] = "challenge 4 <";
	challenge[4] = "challenge 5 <";
	return challenge[(rand() % 5)];
}

