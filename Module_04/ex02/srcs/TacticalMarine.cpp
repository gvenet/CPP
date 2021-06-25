#include "../inc/TacticalMarine.hpp"

//=================================COPLIAN================================================================

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &cpy)
{
	(void)cpy;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &op)
{
	(void)op;
	return *this;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

//==========================================GETTERS=======================================================

//=========================================METHODES=======================================================

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

TacticalMarine *TacticalMarine::clone() const
{
	TacticalMarine *cpy = new TacticalMarine(*this);
	return cpy;
}
