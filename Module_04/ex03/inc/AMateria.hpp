#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include <string>
#include "ICharacter.hpp"
class ICharacter;

class AMateria
{
private:
	AMateria();

protected:
	std::string _type;
	unsigned int _xp;
	int _equiped;

public:
	//============================================================COPLIAN============================================================

	AMateria(std::string const &type);
	virtual ~AMateria();
	
	//============================================================GETTERS============================================================

	std::string const &getType() const;
	unsigned int getXP() const;
	int getEquiped() const;

	//============================================================SETTERS============================================================
	
	void setEquiped(int equiped);

	//============================================================METHODS============================================================

	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif