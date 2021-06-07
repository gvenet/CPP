#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>
#include <string>
#include "ctime"
#include "cstdlib"
#include "../inc/clapTrap.hpp"

class scavTrap : public clapTrap
{
private: 
	std::string randChallenge(void);

public:
	scavTrap();
	scavTrap(scavTrap const &tp);
	scavTrap(std::string const name);
	~scavTrap();

	void challengeNewComer(std::string const &target);
};

#endif
