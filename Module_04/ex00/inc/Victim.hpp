#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <string>
#include <iostream>

class Victim
{
protected:
	std::string _name;

public:
	Victim();
	Victim(std::string name);
	Victim(Victim const &);
	Victim& operator=(Victim const &);
	virtual ~Victim();

	std::string getName(void) const;
	virtual void getPolymorphed() const;
};

std::ostream& operator<<(std::ostream& os, const Victim& Victim);

#endif