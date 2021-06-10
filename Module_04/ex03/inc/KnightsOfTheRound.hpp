#ifndef KNIGHTSOFTHEROUND_HPP
#define KNIGHTSOFTHEROUND_HPP
#include <iostream>
#include <string>
#include "AMateria.hpp"

class KnightsOfTheRound : public AMateria
{
public:
	//============================================================COPLIAN============================================================

	KnightsOfTheRound();
	KnightsOfTheRound(KnightsOfTheRound const &cpy);
	KnightsOfTheRound &operator=(KnightsOfTheRound const &op);
	virtual ~KnightsOfTheRound();
	//============================================================GETTERS============================================================

	std::string const &getType() const;
	unsigned int getXP() const;

	//============================================================METHODS============================================================

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif