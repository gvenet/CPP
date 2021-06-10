#include "../inc/MateriaSource.hpp"

//=================================COPLIAN================================================================

MateriaSource::MateriaSource()
{
}

MateriaSource::MateriaSource(MateriaSource const &cpy)
{
	*this = cpy;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &op)
{
	return *this;
}

MateriaSource::~MateriaSource()
{
}

//==========================================GETTERS=======================================================

//=========================================METHODES=======================================================

void MateriaSource::learnMateria(AMateria*)
{

}

AMateria* MateriaSource::createMateria(std::string const & type)
{

}
