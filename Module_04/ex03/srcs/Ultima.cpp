#include "../inc/Ultima.hpp"

//============================================================COPLIAN============================================================

Ultima::Ultima() : AMateria("ultima")
{
}

Ultima::Ultima(Ultima const &cpy) : AMateria("ultima")
{
	*this = cpy;
}

Ultima &Ultima::operator=(Ultima const &op)
{
	this->_type = op._type;
	this->_xp = op._xp;
	return *this;
}

Ultima::~Ultima()
{
}

//============================================================GETTERS============================================================

//============================================================METHODS============================================================

void Ultima::use(ICharacter& target)
{
	std::cout << "* summons a green fog on " << target.getName() <<" *"<< std::endl;
	AMateria::use(target);
}

AMateria *Ultima::clone() const
{
	AMateria *cpy = new Ultima;
	return cpy;
}
