#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>
#include <string>
#include "ctime"
#include "cstdlib"

class scavTrap
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
	std::string randChallenge(void);

	//============================GETTERS================================================================
	std::string getName(void) const;
	int getHp(void) const;
	int getEnergy(void) const;

	//============================SETTERS================================================================
	int setHp(int hp);
	int setEnergy(int hp);

public:
	//=============================================CONSTRUCTORS/DESTRUCTOR================================
	scavTrap();
	scavTrap(std::string const name);
	scavTrap(scavTrap const &);
	scavTrap& operator=(scavTrap const &);
	~scavTrap();

	//==========================PUBLIC MEMBER FONCTION===========================================================
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(int amount);
	void beRepaired(int amount);
	void challengeNewComer(std::string const &target);
};

#endif
