#include "../inc/Squad.hpp"

//=================================COPLIAN================================================================

Squad::Squad() : _count(0), _units(NULL)
{
}

Squad::Squad(Squad const &cpy) : _count(cpy._count), _units(cpy._units)
{
}

Squad &Squad::operator=(Squad const &op)
{
	this->_count = op._count;
	this->_units = op._units;
	return *this;
}

Squad::~Squad()
{
	for(int i=0; i < this->_count; i++)
		delete this->_units[i];
	delete this->_units;
}

//==========================================GETTERS=======================================================

int Squad::getCount() const
{
	return this->_count;
}

ISpaceMarine *Squad::getUnit(int nThUnit) const
{
	if (!this->_count || nThUnit < 0 || nThUnit >= this->_count)
		return (NULL);
	return (this->_units[nThUnit]);
}

//=========================================METHODES=======================================================

int Squad::push(ISpaceMarine *unit)
{
	if (!unit)
		return (this->_count);
	if (this->_units)
	{
		for (int i = 0; i < this->_count; i++)
			if (this->_units[i] == unit)
				return this->_count;
		ISpaceMarine **units = new ISpaceMarine *[this->_count + 1];
		for (int i = 0; i < this->_count; i++)
			units[i] = this->_units[i];
		delete[] this->_units;
		this->_units = units;
		this->_units[this->_count] = unit;
		this->_count++;
	}
	else
	{
		this->_count++;
		this->_units = new ISpaceMarine *[this->_count];
		this->_units[0] = unit;
	}
	return this->_count;
}