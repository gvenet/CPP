#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <iostream>
#include <string>
#include "ctime"
#include "cstdlib"
#include "../inc/clapTrap.hpp"

class fragTrap : public clapTrap
{
private:
	std::string randAttack(void);
	int setArmorDamageReduction(int ArmDmgRed);

public:
	fragTrap();
	fragTrap(fragTrap const &tp);
	fragTrap(std::string const name);
	~fragTrap();

	void armorUpUp(void);
	void vaulthunter_dot_exe(std::string const &target);
};

static int armorDefLimiter = 0;

#endif
