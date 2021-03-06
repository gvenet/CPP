/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:27:36 by gvenet            #+#    #+#             */
/*   Updated: 2021/06/15 12:27:37 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

//=============================================CONSTRUCTORS/DESTRUCTOR/OPERATOR================================

fragTrap::fragTrap()
{
	srand((unsigned)time(NULL));
}

fragTrap::fragTrap(std::string const name) : 
_hp(100), _maxHp(100), _energy(100), _maxEnergy(100), _level(1), _name(name), _meleeAttDamage(30), _rangedAttDamage(20), _armorDamageReduction(5)
{
	srand((unsigned)time(NULL));
	std::cout << "<" << this->_name << "> is back !! : HELLO PUSSIZ" << std::endl
			  << std::endl;
}

fragTrap::fragTrap(fragTrap const &src)
{
	std::cout << "copy constructor called" << std::endl;
	*this = src;
}

fragTrap &fragTrap::operator=(fragTrap const &)
{
	return *this;
}

fragTrap::~fragTrap()
{
	std::cout << std::endl
			  << " end of fight " << std::endl;
}

//=============================================GETTERS================================

std::string fragTrap::getName(void) const
{
	return this->_name;
}

int fragTrap::getHp(void) const
{
	return this->_hp;
}

int fragTrap::getEnergy(void) const
{
	return this->_energy;
}

//=============================================SETTERS================================

int fragTrap::setHp(int hp)
{
	if (hp < 0)
		hp = 0;
	else if (hp > this->_maxHp)
		hp = this->_maxHp;
	return this->_hp = hp;
}

int fragTrap::setEnergy(int energy)
{
	if (energy < 0)
		energy = 0;
	else if (energy > this->_maxEnergy)
		energy = this->_maxEnergy;
	return this->_energy = energy;
}

int fragTrap::setArmorDamageReduction(int ArmDmgRed)
{
	return this->_armorDamageReduction += ArmDmgRed;
}

//=============================================MEMBER FONCTION================================

void fragTrap::caractere(void) const
{
	std::cout << "<|" << this->_name << "\t|" << this->_level << "\t|" << this->_energy << "\t|" << this->_hp << "\t|>   \t";
}

int fragTrap::energyChecker(int energyCost)
{
	if (this->_energy < energyCost)
	{
		this->setEnergy(this->_energy + 5);
		this->caractere();
		std::cout << "not enought energy pts, fragtrap hide and gain 5 energy pts" << std::endl;
		return (0);
	}
	return (1);
}

void fragTrap::armorUpUp(void)
{
	if (armorDefLimiter)
		return;
	armorDefLimiter++;
	this->caractere();
	this->setArmorDamageReduction(15);
	std::cout << "Armor Reduction is now <" << this->_armorDamageReduction << ">" << std::endl;
}

void fragTrap::rangedAttack(std::string const &target)
{
	int energyCost = 10;

	if (energyChecker(energyCost))
	{
		this->setEnergy(this->_energy - energyCost);
		this->caractere();
		std::cout << "range attacks <" << target << "> , causing <" << this->_rangedAttDamage << "> point of damage" << std::endl;
	}
}

void fragTrap::meleeAttack(std::string const &target)
{
	int energyCost = 15;

	if (energyChecker(energyCost))
	{
		this->setEnergy(this->_energy - energyCost);
		this->caractere();
		std::cout << "melee attacks <" << target << "> , causing <" << this->_meleeAttDamage << "> point of damage" << std::endl;
	}
}

void fragTrap::takeDamage(int amount)
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

void fragTrap::beRepaired(int amount)
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

	if (energyChecker(energyCost))
	{
		this->setEnergy(this->_energy - energyCost);
		this->caractere();
		std::cout << this->randAttack() << target << "> , causing <" << (rand() % 50) + 5 << "> point of damage" << std::endl;
	}
}
