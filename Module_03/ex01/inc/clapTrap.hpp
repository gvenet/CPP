#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
#include <string>
#include "ctime"
#include "cstdlib"

class clapTrap
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

public:
	//=============================================CONSTRUCTORS/DESTRUCTOR================================
	clapTrap();
	clapTrap(clapTrap const &tp);
	clapTrap(std::string const name);
	~clapTrap();

	//==========================PUBLIC MEMBER FONCTION===========================================================
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void armorUpUp(void);
	void takeDamage(int amount);
	void beRepaired(int amount);
};

#endif
