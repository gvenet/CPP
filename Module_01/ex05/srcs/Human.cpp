#include "Human.hpp"

Human::Human(int nZ) : _nZ(nZ)
{
	this->_Horde = new Brain[_nZ];
	for (int i = 0; i < _nZ; i++)
		_Horde[i].advert();
}

Human::~Human()
{
	delete [] this->_Horde;
}
