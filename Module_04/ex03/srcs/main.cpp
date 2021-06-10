#include "../inc/ICharacter.hpp"
#include "../inc/Character.hpp"
#include "../inc/IMateriaSource.hpp"
#include "../inc/MateriaSource.hpp"
#include "../inc/AMateria.hpp"
#include "../inc/Cure.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Ultima.hpp"

int main()
{
	std::cout << "=============== BOCAL FATASY ===============" << std::endl;

	ICharacter *Cloud = new Character("Cloud");
	ICharacter *Tifa = new Character("Tifa");
	ICharacter *Jenova = new Character("Jenova");
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	AMateria *tmp;
	tmp = src->createMateria("ice");
	Cloud->equip(tmp);
	Tifa->equip(tmp);
	Jenova->equip(tmp);
	tmp = src->createMateria("cure");
	Cloud->equip(tmp);
	Tifa->equip(tmp);
	Jenova->equip(tmp);
	tmp = src->createMateria("ultima");
	Cloud->equip(tmp);
	Tifa->equip(tmp);
	Jenova->equip(tmp);

	std::cout << std::endl;
	Cloud->unequip(0);
	Tifa->use(0, *Cloud);
	Cloud->use(0, *Jenova);
	Cloud->use(1, *Jenova);
	Tifa->use(0, *Cloud);
	Cloud->use(0, *Cloud);
	Jenova->use(0, *Cloud);
	Jenova->use(1, *Cloud);
	std::cout << std::endl;

	delete Cloud;
	delete Tifa;
	delete Jenova;
	return (0);
}