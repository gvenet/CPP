#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <string>
#include <iostream>

class Victim
{
protected:
	std::string _name;
	Victim();

public:
	Victim(std::string const &name);
	Victim(Victim const &cpy);
	Victim& operator=(Victim const &op);
	virtual ~Victim();

	std::string const &getName(void) const;
	virtual void getPolymorphed() const;
};

std::ostream& operator<<(std::ostream& os, const Victim& victim);

#endif