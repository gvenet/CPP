#include "../inc/FragTrap.hpp"
#include "ctime"
#include "cstdlib"

int main(void)
{
	std::string ennemy = "ArmorManiac";
	fragTrap fragtrap("FR4G-TP");

	std::cout << "<|NAME   \t|EP\t|HP\t|>" << std::endl;
	fragtrap.rangedAttack(ennemy);
	fragtrap.meleeAttack(ennemy);
	fragtrap.takeDamage(20);
	fragtrap.armorUpUp();
	fragtrap.takeDamage(20);
	fragtrap.rangedAttack(ennemy);
	fragtrap.takeDamage(40);
	fragtrap.beRepaired(80);
	fragtrap.vaulthunter_dot_exe(ennemy);
	fragtrap.vaulthunter_dot_exe(ennemy);
	fragtrap.vaulthunter_dot_exe(ennemy);
	fragtrap.vaulthunter_dot_exe(ennemy);
	fragtrap.vaulthunter_dot_exe(ennemy);
	fragtrap.vaulthunter_dot_exe(ennemy);
	fragtrap.takeDamage(130);
	return (0);
}
