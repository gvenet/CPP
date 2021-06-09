#include "../inc/SuperMutant.hpp"

//=================================COPLIAN================================================================

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	this->display();
}

SuperMutant::SuperMutant(SuperMutant const &)
{
}

SuperMutant &SuperMutant::operator=(SuperMutant const &)
{
	return *this;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

//==========================================GETTERS=======================================================

void SuperMutant::takeDamage(int dmg)
{
	std::cout << this->_type << " takes " << dmg << " - 3 points of damage." << std::endl;
	if ((this->getHP() - dmg + 3) > 0)
	{
		this->_hp = (this->getHP() - dmg + 3);
		this->display();
	}
	else
	{
		this->_hp = 0;
		this->display();
		delete this;
	}
}
