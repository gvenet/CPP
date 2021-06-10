#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
	unsigned int _xp;
	std::string _type;
public:

//=================================COPLIAN================================================================

	AMateria();
	AMateria(std::string const &type);
	AMateria(AMateria const &);
	AMateria &operator=(AMateria const &);
	virtual ~AMateria();

//==========================================GETTERS=======================================================

	std::string const &getType() const;
	unsigned int getXP() const;

//=========================================METHODES=======================================================

	virtual AMateria *clone() const = 0;		//no implementation in AMateria.cpp
	virtual void use(ICharacter &target);
};

#endif
