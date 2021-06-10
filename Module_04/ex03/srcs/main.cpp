#include "../inc/AMateria.hpp"
#include "../inc/Character.hpp"
#include "../inc/Cure.hpp"
#include "../inc/Ice.hpp"
#include "../inc/ICharacter.hpp"
#include "../inc/Ultima.hpp"

int main()
{
	std::cout << "=============== BOCAL FATASY ===============" << std::endl;

	ICharacter* Cloud = new Character("Cloud");
	ICharacter* Tifa = new Character("Tifa");
	ICharacter* Jenova = new Character("Jenova");
	AMateria *ice = new Ice;
	AMateria *cure = new Cure;
	AMateria *utlima = new Ultima;

	std::cout << std::endl;
	Cloud->unequip(0);
	Cloud->equip(ice);
	Cloud->equip(utlima);
	Tifa->equip(cure);
	Tifa->use(0, *Cloud);
	Cloud->use(0, *Jenova);
	Cloud->use(1, *Jenova);
	Cloud->unequip(0);
	Tifa->unequip(0);
	Tifa->use(0, *Cloud);
	Cloud->equip(cure);
	Cloud->use(0, *Cloud);
	Cloud->unequip(1);
	Jenova->equip(ice);
	Jenova->equip(utlima);
	Jenova->use(0, *Cloud);
	Jenova->use(1, *Cloud);
	Jenova->equip(utlima);
	std::cout << std::endl;

	delete Cloud;
	delete Tifa;
	delete Jenova;
	return (0);
}