#ifndef ICE_HPP
#define ICE_HPP
#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	//============================================================COPLIAN============================================================

	Ice();
	Ice(Ice const &cpy);
	Ice &operator=(Ice const &op);
	virtual ~Ice();
	//============================================================GETTERS============================================================

	std::string const &getType() const;
	unsigned int getXP() const;

	//============================================================METHODS============================================================

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif