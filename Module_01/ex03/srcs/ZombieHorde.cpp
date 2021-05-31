#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int nZ) : _nZ(nZ)
{
	this->_Horde = new Zombie[_nZ];
	for (int i = 0; i < _nZ; i++)
		_Horde[i].advert();
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->_Horde;
}
