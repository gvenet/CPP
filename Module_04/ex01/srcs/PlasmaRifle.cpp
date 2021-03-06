#include "../inc/PlasmaRifle.hpp"

//=================================COPLIAN================================================================

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &cpy) : AWeapon(cpy)
{
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &op)
{
	_name = op._name;
	_apcost = op._apcost;
	_damage = op._damage;
	return *this;
}

PlasmaRifle::~PlasmaRifle()
{
}

//==========================================GETTERS=======================================================

//==========================================SETTERS=======================================================

//=================================PUBLIC MEMBER FONCTION=================================================

void PlasmaRifle::attOutput() const
{
	std::cout << "* piouuuu piouuu piouuu *" << std::endl;
}

//=================================PUBLIC METHODE=========================================================

void PlasmaRifle::attack(void) const
{
	this->attOutput();
}