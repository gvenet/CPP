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
	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();
	std::cout << "+++++++++++++++++++++++++++++" << std::endl
			  << std::endl;
	// Enemy *b = new RadScorpion();
	// me->equip(pr);
	// std::cout << *me;
	// me->equip(pf);
	// me->attack(b);
	// std::cout << *me;
	// me->equip(pr);
	// std::cout << *me;
	// me->attack(b);
	// std::cout << *me;
	// me->attack(b);
	// std::cout << *me;
	std::cout << "+++++++++++++++++++++++++++++" << std::endl
			  << std::endl;
	// Enemy *c = new SuperMutant();
	// me->equip(pr);
	// std::cout << *me;
	// me->equip(pf);
	// me->attack(c);
	// std::cout << *me;
	// me->equip(pr);
	// std::cout << *me;
	// me->attack(c);
	// std::cout << *me;
	// me->attack(c);
	// std::cout << *me;
	// me->attack(c);
	// std::cout << *me;
	// me->recoverAP();
	// me->recoverAP();
	// std::cout << *me;
	// me->recoverAP();
	// me->recoverAP();
	// me->recoverAP();
	// std::cout << *me;
	// me->equip(pf);
	// std::cout << *me;
	// me->attack(c);
	// me->attack(c);
	std::cout << "+++++++++++++++++++++++++++++" << std::endl
			  << std::endl;
	// AWeapon *prCpy (static_cast<PlasmaRifle*>(pr));
	AWeapon *prCpy = NULL;
	prCpy = pr;
	std::cout << *me; //unamerd
	me->equip(prCpy);
	std::cout << *me; // plaasma rifle
	prCpy = pf;
	me->equip(prCpy); // power fist
	std::cout << *me;


	std::cout << "+++++++++++++++++++++++++++++" << std::endl;

	PlasmaRifle a;
	PlasmaRifle b = a;
	PlasmaRifle c (a);

	AWeapon *d (&a);
	std::cout << d <<" || " << &a;

	delete me;
	delete pr;
	delete pf;
	return 0;
}