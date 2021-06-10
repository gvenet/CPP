#ifndef ICE_HPP
#define ICE_HPP
#include <string>
#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
public:

	Ice();
	Ice(Ice const &cpy);
	Ice &operator=(Ice const &op);
	virtual ~Ice();

	void use(ICharacter &target);
	AMateria *clone() const;
};

#endif
