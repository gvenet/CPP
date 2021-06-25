#include "../inc/ISpaceMarine.hpp"
#include "../inc/ISquad.hpp"
#include "../inc/AssaultTerminator.hpp"
#include "../inc/TacticalMarine.hpp"
#include "../inc/Squad.hpp"

int main()
{
	std::cout << "____________________CONSTRUCTION______________________" << std::endl;
	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *jim = new AssaultTerminator;
	ISquad *vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(jim);
	vlc->push(NULL);
	std::cout << std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		std::cout << "______________________INDEX " << i << "________________________=" << std::endl;
		ISpaceMarine *cur = vlc->getUnit(i);
		if (cur)
		{
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		else
			std::cout << "| NULL pushed                                        |" << std::endl;
		std::cout << std::endl;
	}
	std::cout << "____________________DESSTRUCTION______________________" << std::endl;
	delete vlc;
	
	
	
	return 0;
}