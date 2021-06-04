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

public:
	//=============================================CONSTRUCTORS/DESTRUCTOR================================
	fragTrap() {}
	fragTrap(fragTrap const &tp);
	fragTrap(std::string const name);
	~fragTrap();

	//============================GETTERS================================================================
	std::string getName(void) const;
	int getHp(void) const;
	int getEnergy(void) const;

	//============================SETTERS================================================================
	int setHp(int hp);
	int setEnergy(int hp);
	int setArmorDamageReduction(int ArmDmgRed);

	//==========================MEMBER FONCTION===========================================================
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void armorUpUp(void);
	void takeDamage(int amount);
	void beRepaired(int amount);
	void caractere(void) const;
	void vaulthunter_dot_exe(std::string const &target);
	int energyChecker(int energyCost);
};

static int armorDefLimiter = 0;
#endif
