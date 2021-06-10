#include "../inc/MateriaSource.hpp"

//============================================================COPLIAN============================================================

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_learned[i] = NULL;
	std::cout << "MateriaSource created" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &cpy)
{
	for (int i = 0; i < 4; i++)
		this->_learned[i] = cpy._learned[i];	
	*this = cpy;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &op)
{
	for (int i = 0; i < 4; i++)
		this->_learned[i] = op._learned[i];
	return *this;
}

MateriaSource::~MateriaSource()
{
}

//============================================================GETTERS============================================================

//============================================================SETTERS============================================================

//============================================================METHODS============================================================

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
		if (!this->_learned[i])
		{
			this->_learned[i] = m;
			std::cout << "MateriaSource learned " << m->getType() << std::endl;
			return;
		}
	std::cout << "MateriaSource can't learn more materia..." << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i =0; i < 4; i++)
		if (type == this->_learned[i]->getType())
			return this->_learned[i]->clone();
	std::cout << "MateriaSource does not know this type of Materia" << std::endl;
	return NULL;
}
