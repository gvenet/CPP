#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include <string>
#include "ICharacter.hpp"
class ICharacter;

class AMateria
{
protected:
	std::string _type;
	unsigned int _xp;

public:
	//============================================================COPLIAN============================================================

	AMateria(std::string const &type);
	AMateria(AMateria const &cpy);
	AMateria &operator=(AMateria const &op);
	virtual ~AMateria();
	//============================================================GETTERS============================================================

	std::string const &getType() const;
	unsigned int getXP() const;

	//============================================================METHODS============================================================

	virtual void displayXp();
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif