#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
#include <iostream>

class Character
{
private:
	std::string _name;
	int _AP;

public:
	Character();
	Character(std::string const &name);
	Character(Character const &);
	Character &operator=(Character const &);
	~Character();

	std::string const &getName() const;
	int getAP() const;

};

std::ostream &operator<<(std::ostream &os, Character const &Character);

#endif