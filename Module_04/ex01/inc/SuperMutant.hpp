#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include <string>
#include <iostream>
#include "../inc/Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	SuperMutant(SuperMutant const &);
	virtual ~SuperMutant();
	SuperMutant &operator=(SuperMutant const &);
	virtual void takeDamage(int);
};

std::ostream &operator<<(std::ostream &os, const SuperMutant &SuperMutant);

#endif