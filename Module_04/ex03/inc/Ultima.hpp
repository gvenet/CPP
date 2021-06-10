#ifndef ULTIMA_HPP
#define ULTIMA_HPP
#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ultima : public AMateria
{
public:
	//============================================================COPLIAN============================================================

	Ultima();
	Ultima(Ultima const &cpy);
	Ultima &operator=(Ultima const &op);
	virtual ~Ultima();
	//============================================================GETTERS============================================================

	std::string const &getType() const;
	unsigned int getXP() const;

	//============================================================METHODS============================================================

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif