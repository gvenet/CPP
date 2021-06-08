#ifndef PEON_HPP
#define PEON_HPP
#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon : virtual public Victim
{
public:
	Peon();
	Peon(std::string name); 
	Peon(Peon const &);
	Peon& operator=(Peon const &);
	virtual ~Peon();

	void getPolymorphed() const;
};

#endif