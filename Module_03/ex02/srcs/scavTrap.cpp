#include "../inc/scavTrap.hpp"

scavTrap::scavTrap()
{
	srand((unsigned)time(NULL));
}

scavTrap::scavTrap(std::string const name) : clapTrap(name, "SC4V-TP")
{
	srand((unsigned)time(NULL));
	std::cout << "SC4V-TP <" << this->_name << "> is here : What i'm doing here ? " << std::endl;
}

scavTrap::~scavTrap()
{
	std::cout << " end of SC4V-TP <" << this->_name << ">" << std::endl;
}

//============================================================================================

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

void scavTrap::challengeNewComer(std::string const &target)
{
	this->caractere();
	std::cout << this->randChallenge() << target << ">" << std::endl;
}
