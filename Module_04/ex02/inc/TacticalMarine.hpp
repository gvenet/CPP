#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP
#include <string>
#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
private:

public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &cpy);
	TacticalMarine &operator=(TacticalMarine const &op);
	virtual ~TacticalMarine();

	TacticalMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
