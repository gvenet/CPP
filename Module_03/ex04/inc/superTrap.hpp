#ifndef SUPER_TRAP_HPP
#define SUPER_TRAP_HPP

#include <iostream>
#include <string>
#include "ctime"
#include "cstdlib"
#include "../inc/clapTrap.hpp"
#include "../inc/fragTrap.hpp"
#include "../inc/scavTrap.hpp"
#include "../inc/ninjaTrap.hpp"

class superTrap : virtual public clapTrap, public fragTrap, public ninjaTrap
{
public:
	//=============================================CONSTRUCTORS/DESTRUCTOR================================
	superTrap();
	superTrap(std::string const name);
	superTrap(superTrap const &);
	superTrap& operator=(superTrap const &);
	virtual ~superTrap();

	//==========================PUBLIC MEMBER FONCTION===========================================================
};

#endif
