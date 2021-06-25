#include "../inc/Squad.hpp"

//=================================COPLIAN================================================================

Squad::Squad() : _count(0), _units(NULL)
{
}

Squad::Squad(Squad const &cpy)
{
	*this = cpy;
}

Squad &Squad::operator=(Squad const &op)
{
	if (_units)
	{
		for (int i = 0; i < _count; i++)
			delete _units[i];
		delete _units;
		_units = nullptr;
	}
	_count = 0;
	for (int i = 0; i < op.getCount(); i++)
		this->push(op.getUnit(i)->clone());
	return (*this);
}

Squad::~Squad()
{
	for(int i=0; i < _count; i++)
		delete _units[i];
	delete _units;
}

//==========================================GETTERS=======================================================

int Squad::getCount() const
{
	return _count;
}

ISpaceMarine *Squad::getUnit(int nThUnit) const
{
	if (!_count || nThUnit < 0 || nThUnit >= _count)
		return (NULL);
	return (_units[nThUnit]);
}

//=========================================METHODES=======================================================

int Squad::push(ISpaceMarine *unit)
{
	if (_units)
	{
		for (int i = 0; i < _count; i++)
			if (_units[i] == unit)
				return _count;
		ISpaceMarine **units = new ISpaceMarine *[_count + 1];
		for (int i = 0; i < _count; i++)
			units[i] = _units[i];
		delete[] _units;
		_units = units;
		_units[_count] = unit;
		_count++;
	}
	else
	{
		_count++;
		_units = new ISpaceMarine *[_count];
		_units[0] = unit;
	}
	return _count;
}