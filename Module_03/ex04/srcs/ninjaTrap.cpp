/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ninjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:30:13 by gvenet            #+#    #+#             */
/*   Updated: 2021/06/15 12:30:14 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ninjaTrap.hpp"

//=============================================CONSTRUCTORS/DESTRUCTOR/OPERATOR================================

ninjaTrap::ninjaTrap() : clapTrap()
{
	srand((unsigned)time(NULL));
}

ninjaTrap::ninjaTrap(std::string const name) : clapTrap(60, 60, 120, 120, 1, 60, 5, 0, name, "NINJ4-TP")
{
	srand((unsigned)time(NULL));
	std::cout << "NINJ4-TP <" << this->_name << "> look behind if i'm there..." << std::endl;
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
	std::cout << " end of NINJ4-TP <" << this->_name << ">" << std::endl;
}
//==========================PRIVATE MEMBER FONCTION===========================================================

//==========================PUBLIC MEMBER FONCTION===========================================================

void ninjaTrap::ninjaShoebox(fragTrap & target)
{
	int energyCost = 20;
	int dmg = 30;

	if (clapTrap::energyChecker(energyCost))
	{
		this->setEnergy(this->_energy - energyCost);
		this->caractere();
		std::cout << "hit with dagger on back of " << target.getName() << "> , causing <" << dmg << "> point of damage" << std::endl;
		target.takeDamage(dmg);
	}
}
void ninjaTrap::ninjaShoebox(scavTrap & target)
{
	int energyCost = 30;
	int dmg = 50;

	if (clapTrap::energyChecker(energyCost))
	{
		this->setEnergy(this->_energy - energyCost);
		this->caractere();
		std::cout << "kick head of " << target.getName() << "> , causing <" << dmg << "> point of damage" << std::endl;
		target.takeDamage(dmg);
	}
}
void ninjaTrap::ninjaShoebox(ninjaTrap & target)
{
	int energyCost = 40;
	int dmg = 70;

	if (clapTrap::energyChecker(energyCost))
	{
		this->setEnergy(this->_energy - energyCost);
		this->caractere();
		std::cout << "does a low kick to " << target.getName() << "> , causing <" << dmg << "> point of damage" << std::endl;
		target.takeDamage(dmg);
	}

}
