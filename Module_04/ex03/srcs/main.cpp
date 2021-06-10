#include "../inc/ICharacter.hpp"
#include "../inc/Character.hpp"
#include "../inc/IMateriaSource.hpp"
#include "../inc/MateriaSource.hpp"
#include "../inc/AMateria.hpp"
#include "../inc/Cure.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Ultima.hpp"
#include "../inc/KnightsOfTheRound"

int main()
{
	std::cout << "=============== BOCAL FATASY ===============" << std::endl;

	ICharacter *Cloud = new Character("Cloud");
	ICharacter *Tifa = new Character("Tifa");
	ICharacter *Jenova = new Character("Jenova");
	IMateriaSource *src = new MateriaSource();
	std::cout << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ultima());

	std::cout << std::endl;
	AMateria *tmp;
	tmp = src->createMateria("ice");
	Cloud->equip(tmp);
	tmp = src->createMateria("ice");
	tmp = src->createMateria("ice");
	Jenova->equip(tmp);
	tmp = src->createMateria("cure");
	Cloud->equip(tmp);
	tmp = src->createMateria("cure");
	tmp = src->createMateria("cure");
	Jenova->equip(tmp);
	tmp = src->createMateria("ultima");
	Cloud->equip(tmp);
	tmp = src->createMateria("ultima");
	tmp = src->createMateria("ultima");
	Jenova->equip(tmp);

	std::cout << std::endl;
	Cloud->use(0, *Jenova);
	Cloud->use(1, *Cloud);
	Cloud->use(2, *Jenova);
	Jenova->use(0, *Cloud);
	Jenova->use(1, *Jenova);
	Jenova->use(2, *Cloud);
	std::cout << std::endl;

	delete Cloud;
	delete Jenova;
	return (0);
}