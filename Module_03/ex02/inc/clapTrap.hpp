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
	clapTrap();
	clapTrap(clapTrap const & ClapTp);
	clapTrap(std::string const name, std::string type);
	~clapTrap();


	std::string getName(void) const;
	int getHp(void) const;
	int getEnergy(void) const;

	int setHp(int hp);
	int setEnergy(int hp);

	void caractere(void) const;
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(int amount);
	void beRepaired(int amount);
	int energyChecker(int energyCost);
};

#endif
