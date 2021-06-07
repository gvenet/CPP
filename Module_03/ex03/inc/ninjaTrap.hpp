#ifndef NINJA_TRAP_HPP
#define NINJA_TRAP_HPP

#include <iostream>
#include <string>
#include "ctime"
#include "cstdlib"
#include "../inc/clapTrap.hpp"

class ninjaTrap : public clapTrap
{
private: 
	std::string randChallenge(void);

public:
	//=============================================CONSTRUCTORS/DESTRUCTOR================================
	ninjaTrap();
	ninjaTrap(std::string const name);
	ninjaTrap(ninjaTrap const &);
	ninjaTrap& operator=(ninjaTrap const &);
	~ninjaTrap();

	//==========================PUBLIC MEMBER FONCTION===========================================================

	void challengeNewComer(std::string const &target);
};

#endif
