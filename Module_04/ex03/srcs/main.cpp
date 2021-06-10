#include "../inc/AMateria.hpp"
#include "../inc/Character.hpp"
#include "../inc/Cure.hpp"
#include "../inc/Ice.hpp"
#include "../inc/ICharacter.hpp"

int main()
{
	std::cout << "=============== BOCAL FATASY ===============" << std::endl;

	ICharacter* Cloud = new Character("Cloud");
	ICharacter* Enemy = new Character("Enemy");
	AMateria *ice = new Ice;
	
	std::cout << std::endl;
	Cloud->equip(ice);
	Cloud->use(0, *Enemy);
	Cloud->use(1, *Enemy);
	Cloud->unequip(0);
	Cloud->use(0, *Enemy);
	Enemy->equip(ice);
	Enemy->use(0, *Cloud);
	return (0);
}