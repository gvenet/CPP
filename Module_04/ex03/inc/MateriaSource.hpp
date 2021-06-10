#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include <iostream>
#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Ultima.hpp"

class MateriaSource : private IMateriaSource
{
private:
	AMateria *_learned[4];

public:
	//============================================================COPLIAN============================================================

	MateriaSource();
	MateriaSource(MateriaSource const &cpy);
	MateriaSource &operator=(MateriaSource const &op);
	virtual ~MateriaSource();

	//============================================================GETTERS============================================================

	//============================================================SETTERS============================================================

	//============================================================METHODS============================================================

	virtual void learnMateria(AMateria *m);
	virtual AMateria *createMateria(std::string const &type);
};

#endif