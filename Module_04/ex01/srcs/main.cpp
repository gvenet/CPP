#include "../inc/AWeapon.hpp"
#include "../inc/PlasmaRifle.hpp"
#include "../inc/PowerFist.hpp"
#include "../inc/SuperMutant.hpp"

int main()
{
	SuperMutant a;

	a.display();
	a.takeDamage(70);
	a.display();
	a.takeDamage(103);
	a.display();
	a.takeDamage(102);


	return 0;
}