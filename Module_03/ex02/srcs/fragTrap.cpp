#include "../inc/fragTrap.hpp"

fragTrap::fragTrap() : clapTrap()
{
	srand((unsigned)time(NULL));
}

fragTrap::fragTrap(std::string const name) : clapTrap(100, 100, 100, 100, 1, 30, 20, 5, name, "FR4G-TP")
{
	srand((unsigned)time(NULL));
	std::cout << "FR4G-TP <" << this->_name << "> is back !! : HELLO PUSSIZ" << std::endl;
}

fragTrap::~fragTrap()
{
	std::cout << " end of FR4G-TP <" << this->_name << ">" << std::endl;
}

//============================================================================================

int fragTrap::setArmorDamageReduction(int ArmDmgRed)
{
	return this->_armorDamageReduction += ArmDmgRed;
}
 //===========================================================================================
void fragTrap::armorUpUp(void)
{
	if (armorDefLimiter)
		return;
	armorDefLimiter++;
	this->caractere();
	this->setArmorDamageReduction(15);
	std::cout << "Armor Reduction is now <" << this->_armorDamageReduction << ">" << std::endl;
}

std::string fragTrap::randAttack(void)
{
	std::string attacks[5];

	attacks[0] = "role over               <";
	attacks[1] = "tears off the head of   <";
	attacks[2] = "shoot with plasmagun on <";
	attacks[3] = "gives a head shot to    <";
	attacks[4] = "threw up on             <";
	return attacks[(rand() % 5)];
}

void fragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int energyCost = 25;

	if (clapTrap::energyChecker(energyCost))
	{
		this->setEnergy(this->_energy - energyCost);
		this->caractere();
		std::cout << this->randAttack() << target << "> , causing <" << (rand() % 50) + 5 << "> point of damage" << std::endl;
	}
}
