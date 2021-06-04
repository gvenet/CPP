#include "../inc/FragTrap.hpp"

//=============================================CONSTRUCTORS/DESTRUCTOR================================

fragTrap::fragTrap(std::string const name) : _hp(100), _maxHp(100), _energy(100), _maxEnergy(100), _level(1), _name(name), _meleeAttDamage(30), _rangedAttDamage(20), _armorDamageReduction(5)
{
	std::cout << "<" << this->_name << "> has born !! : HELLO PUSSYZ" << std::endl
			  << std::endl;
}

fragTrap::~fragTrap()
{
	std::cout << std::endl
			  << "<" << this->_name << "> is now a CL4C-TP" << std::endl;
}

//=============================================GETTERS================================

std::string fragTrap::getName(void) const
{
	return this->_name;
}

unsigned int fragTrap::getHp(void) const
{
	return this->_hp;
}

unsigned int fragTrap::getEnergy(void) const
{
	return this->_energy;
}

//=============================================SETTERS================================

unsigned int fragTrap::setHp(unsigned int hp)
{
	if (hp < 0)
		hp = 0;
	else if (hp > this->_maxHp)
		hp = this->_maxHp;
	return this->_hp = hp;
}

unsigned int fragTrap::setEnergy(unsigned int energy)
{
	if (energy < 0)
		energy = 0;
	else if (energy > this->_maxEnergy)
		energy = this->_maxEnergy;
	return this->_energy = energy;
}

//=============================================MEMBER FONCTION================================

void fragTrap::caractere(void)
{

	std::cout << "<|" << this->_name << "\t|" << this->_energy << "\t|" << this->_hp << "\t|>   ";
}

void fragTrap::rangedAttack(std::string const &target)
{
	unsigned int enc = 10;

	if (this->_energy >= enc)
	{
		this->setEnergy(this->_energy - enc);
		this->caractere();
		std::cout << "\trange attacks <" << target << "> , causing <" << this->_rangedAttDamage << "> point of damage" << std::endl;
	}
	else
	{
		this->setEnergy(this->_energy + 5);
		this->caractere();
		std::cout << "\tnot enought energy pts, fragtrap hide and gain 5 energy pts" << std::endl;
	}
}

void fragTrap::meleeAttack(std::string const &target)
{
	unsigned int enc = 15;

	if (this->_energy >= enc)
	{
		this->setEnergy(this->_energy - enc);
		this->caractere();
		std::cout << "\tmelee attacks <" << target << "> , causing <" << this->_meleeAttDamage << "> point of damage" << std::endl;
	}
	else
	{
		this->setEnergy(this->_energy + 5);
		this->caractere();
		std::cout << "\tnot enought energy pts, fragtrap hide and gain 5 energy pts" << std::endl;
	}
}

void fragTrap::takeDamage(unsigned int amount)
{
	unsigned int dmg;

	dmg = 0;
	if (amount > this->_armorDamageReduction)
		dmg += amount - this->_armorDamageReduction;
	this->setHp(this->_hp - dmg);
	this->caractere();
	std::cout << "\ttakes <" << dmg << "> damage" << std::endl;
}

void fragTrap::beRepaired(unsigned int amount)
{
	unsigned int enc = 30;

	if (this->_energy >= enc)
	{
		this->setEnergy(this->_energy - enc);
		this->setHp(this->_hp + amount);
		this->caractere();
		std::cout << "\theal <" << amount << "> hp" << std::endl;
	}
	else
	{
		this->setEnergy(this->_energy + 5);
		this->caractere();
		std::cout << "\tnot enought energy pts, fragtrap hide and gain 5 energy pts" << std::endl;
	}
}

// void fragTrap::vaulthunter_dot_exe(std::string const &target)
// {
// }
