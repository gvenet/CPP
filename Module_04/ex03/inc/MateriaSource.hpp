#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include <iostream>
#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Ultima.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_learned[4];
	AMateria **_comInv;
	int _sizeComInv;

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
	virtual void comInvIn(AMateria *m);
	virtual void displayComInv(void);
	virtual AMateria *ComInvOut(std::string const &type);
};

#endif