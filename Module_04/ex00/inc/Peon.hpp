#ifndef PEON_HPP
#define PEON_HPP
#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon : virtual public Victim
{
private:	
	Peon();
public:
	Peon(std::string const &name);
	Peon(Peon const &cpy);
	Peon& operator=(Peon const &op);
	virtual ~Peon();

	void getPolymorphed() const;
};

#endif