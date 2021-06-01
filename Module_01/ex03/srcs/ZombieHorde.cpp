#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int nZ) : _nZ(nZ)
{
	this->_Horde = new Zombie[this->_nZ];
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->_Horde;
}

void ZombieHorde::advert(void) const
{
	for (int i = 0; i < this->_nZ; i++)
		this->_Horde[i].advert();
}
