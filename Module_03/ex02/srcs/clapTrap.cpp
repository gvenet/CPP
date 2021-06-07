#include "../inc/clapTrap.hpp"

//=============================================CONSTRUCTORS/DESTRUCTOR/OPERATOR================================

clapTrap::clapTrap()
{
	srand((unsigned)time(NULL));
}

clapTrap::clapTrap(int hp, int maxHp, int energy, int maxEnergy, int level, int meleeAtt, int rangeAtt, int armorDmgRed, std::string const name, std::string type) : 
	_hp(hp), _maxHp(maxHp), _energy(energy), _maxEnergy(maxEnergy), _level(level), _name(name), _meleeAttDamage(meleeAtt), _rangedAttDamage(rangeAtt), _armorDamageReduction(armorDmgRed), _type(type)
{
	srand((unsigned)time(NULL));
	std::cout << "CL4P-TP <" << this->_name << "> please to meet you" << std::endl;
}

clapTrap::clapTrap::clapTrap(clapTrap const &src)
{
	std::cout << "copy constructor called" << std::endl;
	*this=src;
}

clapTrap& clapTrap::operator=(clapTrap const &)
{
	return *this;
}

clapTrap::~clapTrap()
{
	std::cout << " end of CLAP-TP <" << this->_name << "> pshuuuuhh" << std::endl;
}

//=============================================GETTERS================================

std::string clapTrap::getName(void) const
{
	return this->_name;
}

int clapTrap::getHp(void) const
{
	return this->_hp;
}

int clapTrap::getEnergy(void) const
{
	return this->_energy;
}

//=============================================SETTERS================================

int clapTrap::setHp(int hp)
{
	if (hp < 0)
		hp = 0;
	else if (hp > this->_maxHp)
		hp = this->_maxHp;
	return this->_hp = hp;
}

int clapTrap::setEnergy(int energy)
{
	if (energy < 0)
		energy = 0;
	else if (energy > this->_maxEnergy)
		energy = this->_maxEnergy;
	return this->_energy = energy;
}

//=============================================MEMBER FONCTION================================

void clapTrap::caractere(void) const
{
	std::cout <<  "<|" << this->_type << "\t|" << this->_level << "\t|" << this->_name << "\t|" << this->_energy << "\t|" << this->_hp << "\t|>   \t";
}

int clapTrap::energyChecker(int energyCost)
{
	if (this->_energy < energyCost)
	{
		this->setEnergy(this->_energy + 5);
		this->caractere();
		std::cout << "not enought energy pts, " << this->_name <<" hide and gain 5 energy pts" << std::endl;
		return (0);
	}
	return (1);
}

void clapTrap::rangedAttack(std::string const &target)
{
	int energyCost = 10;

	if (energyChecker(energyCost))
	{
		this->setEnergy(this->_energy - energyCost);
		this->caractere();
		std::cout << "range attacks <" << target << "> , causing <" << this->_rangedAttDamage << "> point of damage" << std::endl;
	}
}

void clapTrap::meleeAttack(std::string const &target)
{
	int energyCost = 15;

	if (energyChecker(energyCost))
	{
		this->setEnergy(this->_energy - energyCost);
		this->caractere();
		std::cout << "melee attacks <" << target << "> , causing <" << this->_meleeAttDamage << "> point of damage" << std::endl;
	}
}

void clapTrap::takeDamage(int amount)
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

void clapTrap::beRepaired(int amount)
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
