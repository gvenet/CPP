#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
#include <iostream>
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	

public:
	Character();
	Character(std::string const &name);
	Character(Character const &);
	Character &operator=(Character const &);
	~Character();
	
	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif
