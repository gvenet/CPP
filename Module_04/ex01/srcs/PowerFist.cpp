#include "../inc/PowerFist.hpp"

//=================================COPLIAN================================================================

PowerFist::PowerFist() : AWeapon("Plasma Rifle", 5, 21)
{
}

PowerFist::PowerFist(PowerFist const &)
{
}

PowerFist &PowerFist::operator=(PowerFist const &)
{
	return *this;
}

PowerFist::~PowerFist()
{
}

//==========================================GETTERS=======================================================

//==========================================SETTERS=======================================================

//=================================PUBLIC MEMBER FONCTION=================================================

void PowerFist::attOutput() const
{
	std::cout << "* pshhh... SBAM! *" << std::endl;
}

//=================================PUBLIC METHODE=========================================================

void PowerFist::attack(void) const
{
	this->attOutput();
}