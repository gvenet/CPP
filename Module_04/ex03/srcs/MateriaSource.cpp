#include "../inc/MateriaSource.hpp"

//============================================================COPLIAN============================================================

MateriaSource::MateriaSource() : _comInv(NULL), _sizeComInv(0)
{
	for (int i = 0; i < 4; i++)
		this->_learned[i] = NULL;
	std::cout << "MateriaSource is created" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &cpy) : _comInv(cpy._comInv), _sizeComInv(cpy._sizeComInv)
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
	for (int i = 0; i < this->_sizeComInv; i++)
	{
		std::cout << "comInv\t: ";
		delete this->_comInv[i];
	}
	delete this->_comInv;
	for (int i = 0; i < 4; i++)
	{
		if (_learned[i] != NULL)
		{
			std::cout << "learned\t: ";
			delete _learned[i];
		}
	}
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
	std::cout << "MateriaSource can't learn more..." << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (this->_learned[i] && type == this->_learned[i]->getType())
		{
			AMateria *tmp = this->_learned[i]->clone();
			comInvIn(tmp);
			return tmp;
		}
	std::cout << "MateriaSource does not know " << type << std::endl;
	return NULL;
}

void MateriaSource::comInvIn(AMateria *m)
{
	if (this->_comInv)
	{
		AMateria **comInv = new AMateria *[this->_sizeComInv + 1];
		for (int i = 0; i < this->_sizeComInv; i++)
			comInv[i] = this->_comInv[i];
		delete[] this->_comInv;
		this->_comInv = comInv;
		this->_comInv[this->_sizeComInv] = m;
		this->_sizeComInv++;
	}
	else
	{
		this->_comInv = new AMateria *[1];
		this->_comInv[0] = m;
		this->_sizeComInv = 1;
	}
}

AMateria *MateriaSource::ComInvOut(std::string const &type)
{
	for (int i = 0; i < this->_sizeComInv; i++)
		if (this->_comInv[i] && type == this->_comInv[i]->getType() && !this->_comInv[i]->getEquiped())
			return this->_comInv[i];
	return NULL;
}

void MateriaSource::displayComInv(void)
{
	std::cout << std::endl;
	std::cout << "slot\t| Materia\t| xp\t| equiped" << std::endl;
	for (int i = 0; i < this->_sizeComInv; i++)
		std::cout << i << " \t| " << this->_comInv[i]->getType() << "   \t| " << this->_comInv[i]->getXP() << "\t| " << this->_comInv[i]->getEquiped() << std::endl;
}