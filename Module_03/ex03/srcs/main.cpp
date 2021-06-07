#include "../inc/fragTrap.hpp"
#include "../inc/scavTrap.hpp"
#include "../inc/clapTrap.hpp"
#include "../inc/ninjaTrap.hpp"

int main(void)
{
	std::string ennemy = "ArmorManiac";
	fragTrap frag1("Garry");
	scavTrap scav1("Banjo");
	ninjaTrap ninja1("Borrus");
	ninjaTrap ninja2("Tchako");

	std::cout << std::endl
			  << "<|TYPE     \t|LVL\t|NAME\t|EP\t|HP\t|>" << std::endl;
	frag1.rangedAttack(ennemy);
	frag1.meleeAttack(ennemy);
	frag1.takeDamage(20);
	frag1.armorUpUp();
	frag1.takeDamage(20);
	frag1.rangedAttack(ennemy);
	frag1.takeDamage(40);
	frag1.beRepaired(80);
	frag1.vaulthunter_dot_exe(ennemy);
	frag1.vaulthunter_dot_exe(ennemy);
	frag1.vaulthunter_dot_exe(ennemy);
	frag1.vaulthunter_dot_exe(ennemy);
	frag1.vaulthunter_dot_exe(ennemy);
	frag1.vaulthunter_dot_exe(ennemy);

	scav1.challengeNewComer(ennemy);
	scav1.rangedAttack(ennemy);
	scav1.takeDamage(30);
	scav1.beRepaired(10);
	scav1.rangedAttack(ennemy);
	scav1.rangedAttack(ennemy);

	ninja1.ninjaShoebox(frag1);
	ninja1.ninjaShoebox(scav1);
	ninja1.ninjaShoebox(ninja2);
	ninja2.beRepaired(200);
	ninja1.ninjaShoebox(ninja2);

	std::cout << std::endl;


	return (0);
}
