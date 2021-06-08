#include "../inc/AWeapon.hpp"
#include "../inc/PlasmaRifle.hpp"
#include "../inc/PowerFist.hpp"
#include "../inc/SuperMutant.hpp"
#include "../inc/RadScorpion.hpp"
#include "../inc/Character.hpp"

int main()
{
	Character *me = new Character("toto");
	std::cout<< *me;
	Enemy *b = new RadScorpion();
	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	return 0;
}