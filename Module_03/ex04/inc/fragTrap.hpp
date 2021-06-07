#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <iostream>
#include <string>
#include "ctime"
#include "cstdlib"
#include "../inc/clapTrap.hpp"

class fragTrap : public virtual clapTrap
{
private:
	std::string randAttack(void);
	int setArmorDamageReduction(int ArmDmgRed);

public:
	//=============================================CONSTRUCTORS/DESTRUCTOR================================
	fragTrap();
	fragTrap(std::string const name);
	fragTrap(fragTrap const &);
	fragTrap& operator=(fragTrap const &);
	virtual ~fragTrap();

	//==========================PUBLIC MEMBER FONCTION===========================================================
	void armorUpUp(void);
	void vaulthunter_dot_exe(std::string const &target);
};

static int armorDefLimiter = 0;

#endif
