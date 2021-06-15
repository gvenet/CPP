/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:27:24 by gvenet            #+#    #+#             */
/*   Updated: 2021/06/15 12:27:26 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <iostream>
#include <string>

class fragTrap
{
private:
	int _hp;
	int _maxHp;
	int _energy;
	int _maxEnergy;
	int _level;
	std::string _name;
	int _meleeAttDamage;
	int _rangedAttDamage;
	int _armorDamageReduction;

	//==========================PRIVATE MEMBER FONCTION===========================================================
	int energyChecker(int energyCost);
	void caractere(void) const;
	std::string randAttack(void);

	//============================GETTERS================================================================
	std::string getName(void) const;
	int getHp(void) const;
	int getEnergy(void) const;

	//============================SETTERS================================================================
	int setHp(int hp);
	int setEnergy(int hp);
	int setArmorDamageReduction(int ArmDmgRed);

public:
	//=============================================CONSTRUCTORS/DESTRUCTOR================================
	fragTrap();
	fragTrap(std::string const name);
	fragTrap(fragTrap const &);
	fragTrap& operator=(fragTrap const &);
	virtual ~fragTrap();

	//==========================PUBLIC MEMBER FONCTION===========================================================
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void armorUpUp(void);
	void takeDamage(int amount);
	void beRepaired(int amount);
	void vaulthunter_dot_exe(std::string const &target);
};

static int armorDefLimiter = 0;
#endif
