#ifndef SQUAD_HPP
#define SQUAD_HPP
#include <string>
#include <iostream>
#include "ISquad.hpp"

class Squad : public ISquad
{
private:
	int _count;
	ISpaceMarine **_units;

public:
	Squad();
	Squad &operator=(Squad const &);
	Squad (Squad const &);
	virtual ~Squad();

	int getCount() const;
	ISpaceMarine *getUnit(int nThUnit) const;
	int push(ISpaceMarine *unit);
};

#endif