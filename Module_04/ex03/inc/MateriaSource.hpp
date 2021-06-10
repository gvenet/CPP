#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include <string>
#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:

public:
MateriaSource();
MateriaSource(MateriaSource const &);
MateriaSource &operator=(MateriaSource const &);
~MateriaSource();

void learnMateria(AMateria*);
AMateria* createMateria(std::string const & type);

};

#endif
