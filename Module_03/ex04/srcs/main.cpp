#include "../inc/fragTrap.hpp"
#include "../inc/scavTrap.hpp"
#include "../inc/clapTrap.hpp"
#include "../inc/ninjaTrap.hpp"
#include "../inc/superTrap.hpp"

int main(void)
{
	std::string ennemy = "ArmorManiac";
	superTrap super("Supero");
	ninjaTrap ninja2("Nino");
	fragTrap frag1("Fragy");

	std::cout << std::endl;
	std::cout << "<|TYPE     \t|LVL\t|NAME\t|EP\t|HP\t|>" << std::endl;
	super.vaulthunter_dot_exe(ennemy);
	ninja2.meleeAttack(ennemy);
	super.meleeAttack(ennemy);
	frag1.rangedAttack(ennemy);
	super.rangedAttack(ennemy);
	super.ninjaShoebox(ninja2);
	std::cout << std::endl;
	return (0);
}
