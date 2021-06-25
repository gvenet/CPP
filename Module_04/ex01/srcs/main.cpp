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

	Enemy *b = new RadScorpion();
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

	std::cout << "+++++++++++++++++++++++++++++" << std::endl
			  << std::endl;

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

	std::cout << "+++++++++++++++++++++++++++++" << std::endl
			  << std::endl;
	
	AWeapon *prCpy = NULL;
	prCpy = pr;
	std::cout << &prCpy << " || " << pr << std::endl; 
	std::cout << *me; //unamerd
	me->equip(prCpy);
	std::cout << *me; // plaasma rifle
	prCpy = pf;
	std::cout << &prCpy << " || " << pr << std::endl; 
	me->equip(prCpy); // power fist
	std::cout << *me;

	std::cout << "+++++++++++++++++++++++++++++" << std::endl
			  << std::endl;

	PlasmaRifle x;
	PlasmaRifle y = x;
	PlasmaRifle *z = new PlasmaRifle(x);

	std::cout << &x <<" || " << &y << " || " << z << std::endl;

	std::cout << "+++++++++++++++++++++++++++++" << std::endl
			  << std::endl;

	delete z;
	delete me;
	delete pr;
	delete pf;
	return 0;
}