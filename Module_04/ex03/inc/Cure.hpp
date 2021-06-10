#ifndef CURE_HPP
#define CURE_HPP
#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	//============================================================COPLIAN============================================================

	Cure();
	Cure(Cure const &cpy);
	Cure &operator=(Cure const &op);
	virtual ~Cure();
	//============================================================GETTERS============================================================

	std::string const &getType() const;
	unsigned int getXP() const;

	//============================================================METHODS============================================================

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif