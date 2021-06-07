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
	//=============================================CONSTRUCTORS/DESTRUCTOR================================
	scavTrap();
	scavTrap(std::string const name);
	scavTrap(scavTrap const &);
	scavTrap& operator=(scavTrap const &);
	~scavTrap();

	//==========================PUBLIC MEMBER FONCTION===========================================================

	void challengeNewComer(std::string const &target);
};

#endif
