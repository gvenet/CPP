#include "../inc/AWeapon.hpp"
#include "../inc/PlasmaRifle.hpp"
#include "../inc/PowerFist.hpp"
#include "../inc/SuperMutant.hpp"
#include "../inc/RadScorpion.hpp"
#include "../inc/Character.hpp"

int main()
{
	Character *me = new Character("Garry");
	std::cout << *me;
	Enemy *b = new RadScorpion();
	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	std::cout << "+++++++++++++++++++++++++++++" << std::endl;
	Enemy *c = new SuperMutant();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(c);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	me->equip(pf);
	std::cout << *me;
	me->attack(c);	
	me->attack(c);	
	delete me;
	return 0;
}