#include "../inc/scavTrap.hpp"

//=============================================CONSTRUCTORS/DESTRUCTOR================================

scavTrap::scavTrap()
{
	srand((unsigned)time(NULL));
}

scavTrap::scavTrap(std::string const name) : _hp(100), _maxHp(100), _energy(50), _maxEnergy(50), _level(1), _name(name), _meleeAttDamage(20), _rangedAttDamage(15), _armorDamageReduction(3)
{
	srand((unsigned)time(NULL));
	std::cout << "SC4V-TP <" << this->_name << "> is here : What i'm doing here ? " << std::endl;
}

scavTrap::~scavTrap()
{
	std::cout << " end of SC4V-TP <" << this->_name << ">" << std::endl;
}

//=============================================GETTERS================================

std::string scavTrap::getName(void) const
{
	return this->_name;
}

int scavTrap::getHp(void) const
{
	return this->_hp;
}

int scavTrap::getEnergy(void) const
{
	return this->_energy;
}

//=============================================SETTERS================================

int scavTrap::setHp(int hp)
{
	if (hp < 0)
		hp = 0;
	else if (hp > this->_maxHp)
		hp = this->_maxHp;
	return this->_hp = hp;
}

int scavTrap::setEnergy(int energy)
{
	if (energy < 0)
		energy = 0;
	else if (energy > this->_maxEnergy)
		energy = this->_maxEnergy;
	return this->_energy = energy;
}

//=============================================MEMBER FONCTION================================

void scavTrap::caractere(void) const
{
	std::cout << "<|SC4V-TP\t|" << this->_name << "\t|" << this->_energy << "\t|" << this->_hp << "\t|>   \t";
}

int scavTrap::energyChecker(int energyCost)
{
	if (this->_energy < energyCost)
	{
		this->setEnergy(this->_energy + 5);
		this->caractere();
		std::cout << "not enought energy pts, " << this->_name << " hide and gain 5 energy pts" << std::endl;
		return (0);
	}
	return (1);
}

void scavTrap::rangedAttack(std::string const &target)
{
	int energyCost = 10;

	if (energyChecker(energyCost))
	{
		this->setEnergy(this->_energy - energyCost);
		this->caractere();
		std::cout << "range attacks <" << target << "> , causing <" << this->_rangedAttDamage << "> point of damage" << std::endl;
	}
}

void scavTrap::meleeAttack(std::string const &target)
{
	int energyCost = 15;

	if (energyChecker(energyCost))
	{
		this->setEnergy(this->_energy - energyCost);
		this->caractere();
		std::cout << "melee attacks <" << target << "> , causing <" << this->_meleeAttDamage << "> point of damage" << std::endl;
	}
}

void scavTrap::takeDamage(int amount)
{
	int dmg;

	dmg = 0;
	if (amount > this->_armorDamageReduction)
		dmg += amount - this->_armorDamageReduction;
	this->setHp(this->_hp - dmg);
	this->caractere();
	std::cout << "Ennemy gives <" << amount << "> dmg; " << this->_name << " takes <" << dmg << "> damage ";
	if (this->_hp == 0)
		std::cout << this->_name << " DIE";
	std::cout << std::endl;
}

void scavTrap::beRepaired(int amount)
{
	int energyCost = 30;

	if (energyChecker(energyCost))
	{
		this->setEnergy(this->_energy - energyCost);
		this->setHp(this->_hp + amount);
		this->caractere();
		std::cout << "heal <" << amount << "> hp" << std::endl;
	}
}
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
