#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria *_inventory[4];

public:
	//============================================================COPLIAN============================================================

	Character(std::string const &name);
	Character(Character const &cpy);
	Character &operator=(Character const &op);
	virtual ~Character();

	//============================================================GETTERS============================================================

	std::string const &getName() const;

	//============================================================METHODS============================================================

	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter &target);
};

#endif