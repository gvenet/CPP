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
	std::cout << "________________________LOOP__________________________" << std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		std::cout << "______________________INDEX " << i << "_________________________" << std::endl;
		ISpaceMarine *cur = vlc->getUnit(i);
		if (cur)
		{
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		else
			std::cout << "NULL pushed" << std::endl;
	}
	std::cout << "____________________DESSTRUCTION______________________" << std::endl;
	delete vlc;
	std::cout << std::endl
			  << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++"
			  << std::endl
			  << std::endl;

	std::cout << "____________________CONSTRUCTION______________________" << std::endl;
	Squad *test1 = new Squad;
	test1->push(new TacticalMarine);
	Squad test2;
	test2 = *test1;
	Squad test3 = Squad(test2);

	std::cout << "________________________LOOP__________________________" << std::endl;
	test1->getUnit(0)->battleCry();
	std::cout << "____________________DESSTRUCTION_TEST1________________" << std::endl;
	delete test1;
	std::cout << "________________________LOOP__________________________" << std::endl;
	test2.getUnit(0)->battleCry();
	test3.getUnit(0)->battleCry();

	std::cout << "____________________DESSTRUCTION_TEST_2_3_____________" << std::endl;

	return 0;
}