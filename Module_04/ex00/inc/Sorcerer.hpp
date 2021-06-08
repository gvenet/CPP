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

public:
	Sorcerer();
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &);
	Sorcerer& operator=(Sorcerer const &);
	virtual ~Sorcerer();

	std::string getName(void) const;
	std::string getTitle(void) const;
	void polymorph(Victim const &);
};

std::ostream& operator<<(std::ostream& os, const Sorcerer& Sorcerer);

#endif