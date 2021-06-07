#include "../inc/fragTrap.hpp"
#include "../inc/scavTrap.hpp"
#include "../inc/clapTrap.hpp"

int main(void)
{
	std::string ennemy = "ArmorManiac";
	fragTrap frag("FR4G-TP1");
	scavTrap scav("SC4V-TP1");

	std::cout << std::endl
			  << "<|TYPE     \t|NAME   \t|EP\t|HP\t|>" << std::endl;
	frag.rangedAttack(ennemy);
	frag.meleeAttack(ennemy);
	frag.takeDamage(20);
	frag.armorUpUp();
	frag.takeDamage(20);
	frag.rangedAttack(ennemy);
	frag.takeDamage(40);
	frag.beRepaired(80);
	frag.vaulthunter_dot_exe(ennemy);
	frag.vaulthunter_dot_exe(ennemy);
	frag.vaulthunter_dot_exe(ennemy);
	frag.vaulthunter_dot_exe(ennemy);
	frag.vaulthunter_dot_exe(ennemy);
	frag.vaulthunter_dot_exe(ennemy);
	frag.takeDamage(130);

	scav.challengeNewComer(ennemy);
	scav.rangedAttack(ennemy);
	scav.takeDamage(30);
	scav.beRepaired(10);
	scav.rangedAttack(ennemy);
	scav.rangedAttack(ennemy);
	scav.takeDamage(100);
	std::cout << std::endl;


	return (0);
}
