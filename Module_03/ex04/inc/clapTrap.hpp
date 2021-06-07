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
	virtual	~clapTrap();

	//=========================GETTERS===========================================================

	std::string getName(void) const;

	//=========================SETTERS===========================================================
	int getHp(void) const;
	int getMaxHp(void) const;
	int getEnergy(void) const;
	int getMaxEnergy(void) const;
	int getMeleeAttDmg(void) const;
	int getRangedAttDamage(void) const;
	int getArmorDamageReduction(void) const;

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
