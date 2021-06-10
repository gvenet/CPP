#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP
#include <string>
#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &);
	TacticalMarine &operator=(TacticalMarine const &);
	~TacticalMarine();

	TacticalMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif