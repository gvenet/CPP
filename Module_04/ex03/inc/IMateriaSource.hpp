#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP
#include <iostream>
#include <string>
class AMateria;

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria *) = 0;
	virtual AMateria *createMateria(std::string const &type) = 0;
	virtual void displayComInv(void) = 0;
	virtual AMateria *ComInvOut(std::string const &type) = 0;
};
#endif