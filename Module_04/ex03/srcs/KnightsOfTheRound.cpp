#include "../inc/KnightsOfTheRound.hpp"

//============================================================COPLIAN============================================================

KnightsOfTheRound::KnightsOfTheRound() : AMateria("knightsoftheround")
{
}

KnightsOfTheRound::KnightsOfTheRound(KnightsOfTheRound const &cpy) : AMateria("knightsoftheround")
{
	*this = cpy;
}

KnightsOfTheRound &KnightsOfTheRound::operator=(KnightsOfTheRound const &op)
{
	this->_type = op._type;
	this->_xp = op._xp;
	return *this;
}

KnightsOfTheRound::~KnightsOfTheRound()
{
}

//============================================================GETTERS============================================================

//============================================================METHODS============================================================

void KnightsOfTheRound::use(ICharacter& target)
{
	std::cout << "Let's go for fifteen minutes of summoning" << std::endl;
	AMateria::use(target);
}

AMateria *KnightsOfTheRound::clone() const
{
	AMateria *cpy = new KnightsOfTheRound;
	return cpy;
}
