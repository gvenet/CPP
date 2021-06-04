#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <iostream>
#include <string>

class fragTrap
{
private:
	unsigned int _hp;
	unsigned int _maxHp;
	unsigned int _energy;
	unsigned int _maxEnergy;
	unsigned int _level;
	std::string _name;
	unsigned int _meleeAttDamage;
	unsigned int _rangedAttDamage;
	unsigned int _armorDamageReduction;

public:
	fragTrap(std::string const name);
	~fragTrap();
	void rangedAttack(std::string const & target); //price 10energy pts
	void meleeAttack(std::string const & target); //price 15energy pts
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
 	void caractere(void);
	void vaulthunter_dot_exe(std::string const & target);


//============================GETTERS
	std::string getName(void) const;
	unsigned int getHp(void) const;
	unsigned int getEnergy(void) const;

//============================SETTERS
	unsigned int setHp(unsigned int hp);
	unsigned int setEnergy(unsigned int hp);

};

#endif
