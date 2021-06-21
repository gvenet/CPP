#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string _name;
	std::string _title;
	Sorcerer();

public:
	Sorcerer(std::string const &name, std::string const &title);
	Sorcerer(Sorcerer const & cpy);
	Sorcerer &operator=(Sorcerer const &op);
	virtual ~Sorcerer();

	std::string const &getName(void) const;
	std::string const &getTitle(void) const;
	void polymorph(Victim const &victim) const;
};

std::ostream &operator<<(std::ostream &os, const Sorcerer &Sorcerer);

#endif