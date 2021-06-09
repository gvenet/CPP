#include "../inc/ISpaceMarine.hpp"
#include "../inc/ISquad.hpp"
#include "../inc/AssaultTerminator.hpp"
#include "../inc/TacticalMarine.hpp"
#include "../inc/Squad.hpp"

int main()
{
	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *jim = new AssaultTerminator;
	// ISpaceMarine *jimm = new AssaultTerminator;
	ISquad *vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);
	vlc->push(jim);
	// vlc->push(jimm);
	vlc->push(NULL);


	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine *cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}
