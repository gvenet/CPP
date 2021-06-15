/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:29:06 by gvenet            #+#    #+#             */
/*   Updated: 2021/06/15 12:29:07 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
#include <string>
#include "ctime"
#include "cstdlib"

class clapTrap
{
protected:
	int _hp;
	int _maxHp;
	int _energy;
	int _maxEnergy;
	int _level;
	std::string _name;
	int _meleeAttDamage;
	int _rangedAttDamage;
	int _armorDamageReduction;
	std::string _type;

public:
	//=============================================CONSTRUCTORS/DESTRUCTOR================================
	clapTrap();
	clapTrap(int hp, int maxHp, int energy, int maxEnergy, int level, int meleeAtt, int rangeAtt, int armorDmgRed, std::string const name, std::string type);
	clapTrap(clapTrap const &);
	clapTrap& operator=(clapTrap const &);
	~clapTrap();

	//=========================SETTERS/GETTERS===========================================================

	std::string getName(void) const;
	int getHp(void) const;
	int getEnergy(void) const;

	int setHp(int hp);
	int setEnergy(int hp);

	//==========================PUBLIC MEMBER FONCTION===========================================================

	void caractere(void) const;
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(int amount);
	void beRepaired(int amount);
	int energyChecker(int energyCost);
};

#endif
