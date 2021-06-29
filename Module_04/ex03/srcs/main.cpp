#include "../inc/ICharacter.hpp"
#include "../inc/Character.hpp"
#include "../inc/IMateriaSource.hpp"
#include "../inc/MateriaSource.hpp"
#include "../inc/AMateria.hpp"
#include "../inc/Cure.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Ultima.hpp"
#include "../inc/KnightsOfTheRound.hpp"

int main()
{
	std::cout << "=============== BOCAL FATASY ===============" << std::endl;

	std::cout << std::endl;
	IMateriaSource *src = new MateriaSource();
	ICharacter *Cloud = new Character("Cloud");
	ICharacter *Tifa = new Character("Tifa");
	ICharacter *Jenova = new Character("Jenova");
	std::cout << std::endl;

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ultima());
	src->learnMateria(new KnightsOfTheRound());

	std::cout << std::endl;
	AMateria *tmp;

	tmp = src->createMateria("ice");
	Cloud->equip(tmp);
	tmp = src->createMateria("cure");
	Cloud->equip(tmp);
	tmp = src->createMateria("ultima");
	Cloud->equip(tmp);
	tmp = src->createMateria("knights");
	Cloud->equip(tmp);

	tmp = src->createMateria("ice");
	Tifa->equip(tmp);
	tmp = src->createMateria("cure");
	Tifa->equip(tmp);


	src->displayComInv();

	std::cout << std::endl;
	Tifa->use(1, *Cloud);
	Tifa->use(2, *Jenova);
	Cloud->unequip(0);
	Cloud->use(0, *Jenova);
	Tifa->use(0, *Jenova);
	Cloud->use(1, *Tifa);
	for (int i = 0; i < 12; i++)
		Cloud->use(2, *Jenova);
	src->displayComInv();
	Cloud->unequip(2);
	src->displayComInv();
	
	Tifa->equip(src->ComInvOut("ultima"));
	src->displayComInv();
	for (int i = 0; i < 12; i++)
		Tifa->use(2, *Jenova);
	Tifa->unequip(2);
	Tifa->unequip(0);
	Cloud->use(3, *Jenova);
	src->displayComInv();

	std::cout << std::endl;
	
	delete src;

	delete Cloud;
	delete Tifa;
	delete Jenova;

	return (0);
}