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
	fragTrap(std::string const name);
	~fragTrap();
	void rangedAttack(std::string const & traget);
	void meleeAttack(std::string const & traget);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

//============================GETTERS
	std::string getName(void) const;
	int getHp(void) const;
	int getEnergy(void) const;


};

#endif
