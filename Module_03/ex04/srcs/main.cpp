#include "../inc/fragTrap.hpp"
#include "../inc/scavTrap.hpp"
#include "../inc/clapTrap.hpp"
#include "../inc/ninjaTrap.hpp"
#include "../inc/superTrap.hpp"

int main(void)
{
	std::string ennemy = "ArmorManiac";
	superTrap super("Garry");
	ninjaTrap ninja2("Borrus");

	std::cout << std::endl
			  << "<|TYPE     \t|LVL\t|NAME\t|EP\t|HP\t|>" << std::endl;

	super.vaulthunter_dot_exe(ennemy);
	super.ninjaShoebox(ninja2);

	std::cout << std::endl;
	return (0);
}
