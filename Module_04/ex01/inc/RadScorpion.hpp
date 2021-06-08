#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP
#include <string>
#include <iostream>
#include "../inc/Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	RadScorpion(RadScorpion const &);
	virtual ~RadScorpion();
	RadScorpion &operator=(RadScorpion const &);
};

#endif