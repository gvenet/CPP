#ifndef NINJA_TRAP_HPP
#define NINJA_TRAP_HPP

#include <iostream>
#include <string>
#include "ctime"
#include "cstdlib"
#include "../inc/clapTrap.hpp"
#include "../inc/fragTrap.hpp"
#include "../inc/scavTrap.hpp"

class ninjaTrap : public clapTrap
{
public:
	//=============================================CONSTRUCTORS/DESTRUCTOR================================
	ninjaTrap();
	ninjaTrap(std::string const name);
	ninjaTrap(ninjaTrap const &);
	ninjaTrap& operator=(ninjaTrap const &);
	~ninjaTrap();

	//==========================PUBLIC MEMBER FONCTION===========================================================

	void ninjaShoebox(fragTrap & traget);
	void ninjaShoebox(scavTrap & traget);
	void ninjaShoebox(ninjaTrap & traget);
};

#endif
